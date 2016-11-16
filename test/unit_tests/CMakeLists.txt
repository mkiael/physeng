add_executable(physeng_unit_tests
        src/main.cpp
        src/math/test_vector2.cpp)

target_link_libraries(physeng_unit_tests
        gtest
        physeng_unit_test_utils
        physeng)

add_test(
        NAME physeng_unit_tests
        COMMAND $<TARGET_FILE:physeng_unit_tests>
)