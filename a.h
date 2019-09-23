struct unit_test {
	const char *name;
	void (*test)(void);
	void (*setup)(void);
	void (*teardown)(void);
	int thread_options;
};

#define Z_STRINGIFY(x) #x
#define STRINGIFY(s) Z_STRINGIFY(s)
#define K_APP_DMEM_SECTION(id) data_smem_##id##_data
#define __GENERIC_SECTION(segment) __attribute__((section(STRINGIFY(segment))))
#define Z_GENERIC_SECTION(segment) __GENERIC_SECTION(segment)
#define K_APP_DMEM(id) Z_GENERIC_SECTION(K_APP_DMEM_SECTION(id))
#define ZTEST_DMEM	K_APP_DMEM(ztest_mem_partition)
#define BIT(n)  (1UL << (n))
#define K_USER (BIT(2))

#define ztest_user_unit_test_setup_teardown(fn, setup, teardown) { \
		STRINGIFY(fn), fn, setup, teardown, K_USER \
}
#define ztest_unit_test_setup_teardown(fn, setup, teardown) { \
		STRINGIFY(fn), fn, setup, teardown, 0 \
}
#define ztest_unit_test(fn) \
	ztest_unit_test_setup_teardown(fn, unit_test_noop, unit_test_noop)    

#define ztest_user_unit_test(fn) \
	ztest_user_unit_test_setup_teardown(fn, unit_test_noop, unit_test_noop)

#define ztest_test_suite(suite, ...) \
	static ZTEST_DMEM struct unit_test _##suite[] = { \
		__VA_ARGS__, { 0 } \
	}