add_executable(cppsci_unit_tests
  src/main.cpp
  src/math/test_vector2.cpp)

target_link_libraries(cppsci_unit_tests
  gtest
  cppsci_unit_test_utils
  cppsci)

add_test(
  NAME cppsci_unit_tests
  COMMAND $<TARGET_FILE:cppsci_unit_tests>
)