add_test( soma.positivos /home/grillo/zenith/google-tests-github-actions/build/bin/testando [==[--gtest_filter=soma.positivos]==] --gtest_also_run_disabled_tests)
set_tests_properties( soma.positivos PROPERTIES WORKING_DIRECTORY /home/grillo/zenith/google-tests-github-actions/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( testando_TESTS soma.positivos)
