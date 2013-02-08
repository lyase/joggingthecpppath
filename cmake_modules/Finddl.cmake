MESSAGE(STATUS "looking for  dl")
MESSAGE(STATUS "----------------------------------------------------------------------------------------------------")

SET(dl_INCLUDE_DIR "/usr/include/")
#instead of previous line you can use something like FIND_PATH(FOO_INCLUDE_DIR foo.h /usr/include/foo /usr/local/include/foo)
# this file  is all explained in http://www.cmake.org/Wiki/CMake_HowToFindInstalledSoftware

FIND_LIBRARY(dl_LIBRARY NAMES dl PATH /usr/lib/ /usr/local/lib) 

IF (dl_LIBRARY)
MESSAGE(STATUS "Found somestuff for dl at ${dl_LIBRARY}")
   SET(dl_FOUND TRUE)

ENDIF ( dl_LIBRARY)

IF (dl_FOUND)
   IF (NOT dl_FIND_QUIETLY)
      MESSAGE(STATUS "Found dl: ${dl_LIBRARY}")
   ENDIF (NOT dl_FIND_QUIETLY)
ELSE (stdc++_FOUND)
   IF (dl_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "Could not find dl")
   ENDIF (dl_FIND_REQUIRED)

ENDIF (dl_FOUND)
MESSAGE(STATUS " finish looking for  dl")
MESSAGE(STATUS "----------------------------------------------------------------------------------------------------")

