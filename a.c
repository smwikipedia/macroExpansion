#include "a.h"
void test_threads_spawn_params(void);
static inline void unit_test_noop(void);

int f()
{
    	ztest_test_suite(threads_lifecycle,
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params),
			 ztest_user_unit_test(test_threads_spawn_params),
			 ztest_unit_test(test_threads_spawn_params)
			 );
}