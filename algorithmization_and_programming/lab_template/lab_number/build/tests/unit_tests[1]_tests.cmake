add_test([=[TestTopic.HowWeTest]=]  /home/pirum/University-labs/algorithmization_and_programming/lab_template/lab_number/build/tests/unit_tests [==[--gtest_filter=TestTopic.HowWeTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TestTopic.HowWeTest]=]  PROPERTIES WORKING_DIRECTORY /home/pirum/University-labs/algorithmization_and_programming/lab_template/lab_number/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  unit_tests_TESTS TestTopic.HowWeTest)
