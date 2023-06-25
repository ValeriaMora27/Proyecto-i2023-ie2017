# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ProyectoEventos_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ProyectoEventos_autogen.dir\\ParseCache.txt"
  "ProyectoEventos_autogen"
  )
endif()
