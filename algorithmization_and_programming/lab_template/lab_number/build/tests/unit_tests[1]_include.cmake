if(EXISTS "/home/pirum/University-labs/algorithmization_and_programming/lab_template/lab_number/build/tests/unit_tests[1]_tests.cmake")
  include("/home/pirum/University-labs/algorithmization_and_programming/lab_template/lab_number/build/tests/unit_tests[1]_tests.cmake")
else()
  add_test(unit_tests_NOT_BUILT unit_tests_NOT_BUILT)
endif()
