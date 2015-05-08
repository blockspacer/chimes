#!/usr/bin/python
import os
import sys
from common import StackVar, transfer, get_stack_vars


if __name__ == '__main__':
    if len(sys.argv) != 4:
        print('usage: python register_stack_var_cond.py input-file output-file ' +
              'stack-var-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    stack_var_filename = sys.argv[3]

    stack_vars = get_stack_vars(stack_var_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    for var in stack_vars:
        output_file.write('static int ____must_checkpoint_' + var.name.replace('|', '_') + ' = 2;\n')
    output_file.write('\n')

    transfer(input_file, output_file)

    input_file.close()
    output_file.close()