add_library(MyLib STATIC)

target_sources(MyLib
    PRIVATE 
    src/MyList.cpp
    src/func.cpp

    PUBLIC 
    FILE_SET HEADERS 
    BASE_DIRS include 
    FILES 
        include/func.h
        include/MyList.h
)