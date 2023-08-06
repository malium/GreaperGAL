
#set(CJSON_TARGET_NAME "cJSON")
set(GAL_OUTPUT_NAME "GAL")

if(WIN32)
	#string(APPEND CJSON_TARGET_NAME "Win")
	string(APPEND GAL_OUTPUT_NAME "Win")
else()
	#string(APPEND CJSON_TARGET_NAME "Lnx")
	string(APPEND GAL_OUTPUT_NAME "Lnx")
endif()

set(release FALSE)
if(NOT ${CMAKE_BUILD_TYPE} STREQUAL "Debug")
	#string(APPEND CJSON_TARGET_NAME "_Release")
	#string(APPEND GAL_OUTPUT_NAME "_Release")
	set(release TRUE)
else()
	#string(APPEND CJSON_TARGET_NAME "_Debug")
	#string(APPEND GAL_OUTPUT_NAME "_Debug")
endif()
string(APPEND GAL_OUTPUT_NAME "_" $<CONFIG>)

file(GLOB_RECURSE GAL_SOURCES CONFIGURE_DEPENDS "Private/*.cpp" "Private/*.inl" "Private/*.h" "Public/*.inl" "Public/*.h")

if(WIN32)
	file(GLOB_RECURSE TO_REMOVE "Private/Lnx/*" "Public/Lnx/*")
else()
	file(GLOB_RECURSE TO_REMOVE "Private/Win/*" "Public/Win/*")
endif()

list(REMOVE_ITEM GAL_SOURCES ${TO_REMOVE})

add_library(GAL SHARED ${GAL_SOURCES})

set_target_properties(GAL PROPERTIES OUTPUT_NAME ${GAL_OUTPUT_NAME})

target_compile_definitions(GAL PRIVATE GREAPER_GAL_DLL=1)

target_link_libraries(GAL cJSON)

set_target_properties(GAL PROPERTIES
						RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/bin
						RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/bin
						RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/bin
						RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${PROJECT_SOURCE_DIR}/bin
						OUTPUT_NAME ${GAL_OUTPUT_NAME}
						LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
						LIBRARY_OUTPUT_NAME ${GAL_OUTPUT_NAME}
						CXX_STANDARD 17
						C_STANDARD 11)

target_compile_definitions(GAL PRIVATE $<CONFIG>)
if(MSVC)
	set(MSVC_COMPILE_OPTIONS "/sdl;/Gm-;/EHa;/GF;/Zc:inline;/Zc:forScope;/Zc:wchar_t;/permissive-;/openmp-;/GR;/GS")
	if(release EQUAL TRUE)
		string(APPEND MSVC_COMPILE_OPTIONS ";/Oi;/Ot;/Gy;/fp:fast")
	endif()
	target_compile_options(GAL PRIVATE ${MSVC_COMPILE_OPTIONS})
endif()

