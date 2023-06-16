# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\clientside_ui_file_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\clientside_ui_file_autogen.dir\\ParseCache.txt"
  "clientside_ui_file_autogen"
  )
endif()
