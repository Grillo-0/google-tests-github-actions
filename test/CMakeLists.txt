add_executable(testando test.cpp)

target_include_directories(testando PRIVATE ../src)
target_link_libraries(testando ${CONAN_LIBS} soma)

include(GoogleTest)
gtest_discover_tests(testando)
