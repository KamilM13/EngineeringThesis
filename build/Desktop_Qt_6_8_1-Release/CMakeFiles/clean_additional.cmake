# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/appClusterGauge_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appClusterGauge_autogen.dir/ParseCache.txt"
  "appClusterGauge_autogen"
  )
endif()
