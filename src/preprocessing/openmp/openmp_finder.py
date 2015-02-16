#!/usr/bin/python
import os
import sys

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print 'usage: python openmp_finder.py input'
        sys.exit(1)

    input_filename = sys.argv[1]

    input_fp = open(input_filename, 'r')
    
    line_no = 1

    line = input_fp.readline()
    while len(line) > 0:
        # For efficiency, quickly filter out all but preprocessor lines
        column = line.find('#')
        line = line.strip()

        if len(line) > 0 and line[0] == '#':
            tokens = line.split()
            if tokens[0] == '#pragma' and tokens[1] == 'omp':
                acc = line
                starting_line_no = line_no
                while line[len(line) - 1] == '\\':
                    line = input_fp.readline()
                    line_no += 1
                    line = line.strip()
                    acc = acc[:len(acc) - 1].strip() # trim the last \
                    acc += ' ' + line
                sys.stdout.write(str(starting_line_no) + ' ' + str(column) + \
                                ' ' + acc + '\n')

        line = input_fp.readline()
        line_no += 1

    input_fp.close()