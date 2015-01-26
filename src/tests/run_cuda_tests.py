import os
import os.path
import sys
from subprocess import Popen, PIPE
import sys
from os import listdir
import tempfile
from common import Test, run_cmd, run_test, parse_argv, NUM_DEBUG_HOME

vector_sum = Test('VectorSum', 'vector_sum.cu',
        'vector_sum.cudafe1.register.cpp', 'vector_sum', False)
tests = [ vector_sum ]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
CUDA_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cuda'
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/cuda'

if __name__ == '__main__':
    config = parse_argv(sys.argv)

    for t in tests:
        run_test(t, COMPILE_SCRIPT, CUDA_EXAMPLES_DIR, CUDA_TEST_DIR, config)
