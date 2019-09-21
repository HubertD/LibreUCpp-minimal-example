project(LibeUCpp-minimal-example)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F407XE)
