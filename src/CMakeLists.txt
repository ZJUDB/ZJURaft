# This is hacky :(
file(GLOB_RECURSE zju_raft_sources ${PROJECT_SOURCE_DIR}/src/raft/*.cpp ${PROJECT_SOURCE_DIR}/src/include/*.h)
add_library(zju_raft_shared SHARED ${zju_raft_sources})

######################################################################################################################
# THIRD-PARTY SOURCES
######################################################################################################################

# murmur3
file(GLOB_RECURSE murmur3_sources
        ${PROJECT_SOURCE_DIR}/third_party/murmur3/*.cpp ${PROJECT_SOURCE_DIR}/third_party/murmur3/*.h)
add_library(thirdparty_murmur3 SHARED ${murmur3_sources})
target_link_libraries(zju_raft_shared thirdparty_murmur3)