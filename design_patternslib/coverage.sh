if [ -e ".coverage_rc" ]
     then
     source .coverage_rc
     fi

     if [ -z ${EXCLUDES+x} ]
          then
          EXCLUDES=
               fi

               if [ -z ${FILENAME+x} ]
                    then
                    # path is build directory
                    FILENAME=./sim 
                             fi

rm -rvf build ; mkdir build ; cd build ; cmake -DCMAKE_CXX_COMPILER=g++ -DCMAKE_BUILD_TYPE:STRING=Coverage .. ; make
                             make -j4 && \
                             "$FILENAME" && \
                             lcov -i -c -d . -o coverage.info && \
                             lcov -c -d . -o coverage.info && \
                             lcov -r coverage.info "/usr*" -o coverage.info && \
                             lcov -r coverage.info $EXCLUDES -o coverage.info && \
                             genhtml --legend  --no-branch-coverage --demangle-cpp -o html coverage.info
                             make doc
