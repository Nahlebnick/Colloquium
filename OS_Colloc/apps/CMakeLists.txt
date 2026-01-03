add_executable(Main)
target_sources(Main PRIVATE main/Main.cpp)

target_link_libraries(Main PRIVATE MyLib)