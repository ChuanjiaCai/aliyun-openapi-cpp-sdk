#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(green_public_header 
	include/alibabacloud/green/GreenClient.h
	include/alibabacloud/green/GreenExport.h )

set(green_public_header_model 
	include/alibabacloud/green/model/ImageSyncScanRequest.h
	include/alibabacloud/green/model/ImageSyncScanResult.h
	include/alibabacloud/green/model/UploadCredentialsRequest.h
	include/alibabacloud/green/model/UploadCredentialsResult.h
	include/alibabacloud/green/model/GetPersonsRequest.h
	include/alibabacloud/green/model/GetPersonsResult.h
	include/alibabacloud/green/model/GetPersonRequest.h
	include/alibabacloud/green/model/GetPersonResult.h
	include/alibabacloud/green/model/DeleteFacesRequest.h
	include/alibabacloud/green/model/DeleteFacesResult.h
	include/alibabacloud/green/model/DeleteVideoDnaGroupRequest.h
	include/alibabacloud/green/model/DeleteVideoDnaGroupResult.h
	include/alibabacloud/green/model/AddVideoDnaRequest.h
	include/alibabacloud/green/model/AddVideoDnaResult.h
	include/alibabacloud/green/model/VideoFeedbackRequest.h
	include/alibabacloud/green/model/VideoFeedbackResult.h
	include/alibabacloud/green/model/DeletePersonRequest.h
	include/alibabacloud/green/model/DeletePersonResult.h
	include/alibabacloud/green/model/VideoSyncScanRequest.h
	include/alibabacloud/green/model/VideoSyncScanResult.h
	include/alibabacloud/green/model/VideoAsyncScanResultsRequest.h
	include/alibabacloud/green/model/VideoAsyncScanResultsResult.h
	include/alibabacloud/green/model/DeleteVideoDnaRequest.h
	include/alibabacloud/green/model/DeleteVideoDnaResult.h
	include/alibabacloud/green/model/AddGroupsRequest.h
	include/alibabacloud/green/model/AddGroupsResult.h
	include/alibabacloud/green/model/FileAsyncScanRequest.h
	include/alibabacloud/green/model/FileAsyncScanResult.h
	include/alibabacloud/green/model/SetPersonRequest.h
	include/alibabacloud/green/model/SetPersonResult.h
	include/alibabacloud/green/model/VoiceIdentityCheckRequest.h
	include/alibabacloud/green/model/VoiceIdentityCheckResult.h
	include/alibabacloud/green/model/TextFeedbackRequest.h
	include/alibabacloud/green/model/TextFeedbackResult.h
	include/alibabacloud/green/model/FileAsyncScanResultsRequest.h
	include/alibabacloud/green/model/FileAsyncScanResultsResult.h
	include/alibabacloud/green/model/DeleteGroupsRequest.h
	include/alibabacloud/green/model/DeleteGroupsResult.h
	include/alibabacloud/green/model/VoiceIdentityStartCheckRequest.h
	include/alibabacloud/green/model/VoiceIdentityStartCheckResult.h
	include/alibabacloud/green/model/AddVideoDnaGroupRequest.h
	include/alibabacloud/green/model/AddVideoDnaGroupResult.h
	include/alibabacloud/green/model/ImageAsyncScanRequest.h
	include/alibabacloud/green/model/ImageAsyncScanResult.h
	include/alibabacloud/green/model/VideoAsyncScanRequest.h
	include/alibabacloud/green/model/VideoAsyncScanResult.h
	include/alibabacloud/green/model/ImageAsyncScanResultsRequest.h
	include/alibabacloud/green/model/ImageAsyncScanResultsResult.h
	include/alibabacloud/green/model/VoiceAsyncScanResultsRequest.h
	include/alibabacloud/green/model/VoiceAsyncScanResultsResult.h
	include/alibabacloud/green/model/GetFacesRequest.h
	include/alibabacloud/green/model/GetFacesResult.h
	include/alibabacloud/green/model/VoiceAsyncScanRequest.h
	include/alibabacloud/green/model/VoiceAsyncScanResult.h
	include/alibabacloud/green/model/VoiceCancelScanRequest.h
	include/alibabacloud/green/model/VoiceCancelScanResult.h
	include/alibabacloud/green/model/GetGroupsRequest.h
	include/alibabacloud/green/model/GetGroupsResult.h
	include/alibabacloud/green/model/TextScanRequest.h
	include/alibabacloud/green/model/TextScanResult.h
	include/alibabacloud/green/model/VoiceIdentityRegisterRequest.h
	include/alibabacloud/green/model/VoiceIdentityRegisterResult.h
	include/alibabacloud/green/model/ImageScanFeedbackRequest.h
	include/alibabacloud/green/model/ImageScanFeedbackResult.h
	include/alibabacloud/green/model/VoiceIdentityStartRegisterRequest.h
	include/alibabacloud/green/model/VoiceIdentityStartRegisterResult.h
	include/alibabacloud/green/model/DeleteSimilarityImageRequest.h
	include/alibabacloud/green/model/DeleteSimilarityImageResult.h
	include/alibabacloud/green/model/SearchPersonRequest.h
	include/alibabacloud/green/model/SearchPersonResult.h
	include/alibabacloud/green/model/GetAddVideoDnaResultsRequest.h
	include/alibabacloud/green/model/GetAddVideoDnaResultsResult.h
	include/alibabacloud/green/model/AddPersonRequest.h
	include/alibabacloud/green/model/AddPersonResult.h
	include/alibabacloud/green/model/AddFacesRequest.h
	include/alibabacloud/green/model/AddFacesResult.h
	include/alibabacloud/green/model/AddSimilarityImageRequest.h
	include/alibabacloud/green/model/AddSimilarityImageResult.h
	include/alibabacloud/green/model/VoiceIdentityUnregisterRequest.h
	include/alibabacloud/green/model/VoiceIdentityUnregisterResult.h )

set(green_src 
	src/GreenClient.cc
	src/model/ImageSyncScanRequest.cc
	src/model/ImageSyncScanResult.cc
	src/model/UploadCredentialsRequest.cc
	src/model/UploadCredentialsResult.cc
	src/model/GetPersonsRequest.cc
	src/model/GetPersonsResult.cc
	src/model/GetPersonRequest.cc
	src/model/GetPersonResult.cc
	src/model/DeleteFacesRequest.cc
	src/model/DeleteFacesResult.cc
	src/model/DeleteVideoDnaGroupRequest.cc
	src/model/DeleteVideoDnaGroupResult.cc
	src/model/AddVideoDnaRequest.cc
	src/model/AddVideoDnaResult.cc
	src/model/VideoFeedbackRequest.cc
	src/model/VideoFeedbackResult.cc
	src/model/DeletePersonRequest.cc
	src/model/DeletePersonResult.cc
	src/model/VideoSyncScanRequest.cc
	src/model/VideoSyncScanResult.cc
	src/model/VideoAsyncScanResultsRequest.cc
	src/model/VideoAsyncScanResultsResult.cc
	src/model/DeleteVideoDnaRequest.cc
	src/model/DeleteVideoDnaResult.cc
	src/model/AddGroupsRequest.cc
	src/model/AddGroupsResult.cc
	src/model/FileAsyncScanRequest.cc
	src/model/FileAsyncScanResult.cc
	src/model/SetPersonRequest.cc
	src/model/SetPersonResult.cc
	src/model/VoiceIdentityCheckRequest.cc
	src/model/VoiceIdentityCheckResult.cc
	src/model/TextFeedbackRequest.cc
	src/model/TextFeedbackResult.cc
	src/model/FileAsyncScanResultsRequest.cc
	src/model/FileAsyncScanResultsResult.cc
	src/model/DeleteGroupsRequest.cc
	src/model/DeleteGroupsResult.cc
	src/model/VoiceIdentityStartCheckRequest.cc
	src/model/VoiceIdentityStartCheckResult.cc
	src/model/AddVideoDnaGroupRequest.cc
	src/model/AddVideoDnaGroupResult.cc
	src/model/ImageAsyncScanRequest.cc
	src/model/ImageAsyncScanResult.cc
	src/model/VideoAsyncScanRequest.cc
	src/model/VideoAsyncScanResult.cc
	src/model/ImageAsyncScanResultsRequest.cc
	src/model/ImageAsyncScanResultsResult.cc
	src/model/VoiceAsyncScanResultsRequest.cc
	src/model/VoiceAsyncScanResultsResult.cc
	src/model/GetFacesRequest.cc
	src/model/GetFacesResult.cc
	src/model/VoiceAsyncScanRequest.cc
	src/model/VoiceAsyncScanResult.cc
	src/model/VoiceCancelScanRequest.cc
	src/model/VoiceCancelScanResult.cc
	src/model/GetGroupsRequest.cc
	src/model/GetGroupsResult.cc
	src/model/TextScanRequest.cc
	src/model/TextScanResult.cc
	src/model/VoiceIdentityRegisterRequest.cc
	src/model/VoiceIdentityRegisterResult.cc
	src/model/ImageScanFeedbackRequest.cc
	src/model/ImageScanFeedbackResult.cc
	src/model/VoiceIdentityStartRegisterRequest.cc
	src/model/VoiceIdentityStartRegisterResult.cc
	src/model/DeleteSimilarityImageRequest.cc
	src/model/DeleteSimilarityImageResult.cc
	src/model/SearchPersonRequest.cc
	src/model/SearchPersonResult.cc
	src/model/GetAddVideoDnaResultsRequest.cc
	src/model/GetAddVideoDnaResultsResult.cc
	src/model/AddPersonRequest.cc
	src/model/AddPersonResult.cc
	src/model/AddFacesRequest.cc
	src/model/AddFacesResult.cc
	src/model/AddSimilarityImageRequest.cc
	src/model/AddSimilarityImageResult.cc
	src/model/VoiceIdentityUnregisterRequest.cc
	src/model/VoiceIdentityUnregisterResult.cc )

add_library(green ${LIB_TYPE}
	${green_public_header}
	${green_public_header_model}
	${green_src})

set_target_properties(green
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}green
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(green
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GREEN_LIBRARY)
endif()

target_include_directories(green
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(green
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(green
		jsoncpp)
	target_include_directories(green
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(green
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(green
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(green
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(green
		jsoncpp)
endif()

install(FILES ${green_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/green)
install(FILES ${green_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/green/model)
install(TARGETS green
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)