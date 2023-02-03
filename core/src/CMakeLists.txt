include_directories(${PROJECT_SOURCE_DIR}/headers)
include_directories(${PROJECT_SOURCE_DIR}/headers/algorithms)

add_executable(BanditPAM main.cpp)

add_library(bpam algorithms/kmedoids_algorithm.cpp algorithms/pam.cpp algorithms/banditpam.cpp algorithms/fastpam1.cpp)
target_link_libraries(BanditPAM PUBLIC bpam)

find_package(OpenMP REQUIRED)
target_link_libraries(bpam PUBLIC OpenMP::OpenMP_CXX)
target_link_libraries(BanditPAM PUBLIC OpenMP::OpenMP_CXX)

find_package(Armadillo REQUIRED)
include_directories(${ARMADILLO_INCLUDE_DIRS})
target_link_libraries(BanditPAM PUBLIC ${ARMADILLO_LIBRARIES})
