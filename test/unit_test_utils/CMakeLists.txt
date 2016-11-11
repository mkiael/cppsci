add_library(cppsci_unit_test_utils
  include/mock_dummy.h
  src/mock_dummy.cpp)

target_link_libraries(cppsci_unit_test_utils gtest gmock cppsci)

target_include_directories(cppsci_unit_test_utils PUBLIC include)