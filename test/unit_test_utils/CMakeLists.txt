add_library(physeng_unit_test_utils
        include/mock_dummy.h
        src/mock_dummy.cpp)

target_link_libraries(physeng_unit_test_utils gtest gmock physeng)

target_include_directories(physeng_unit_test_utils PUBLIC include)