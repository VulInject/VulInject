from copydetect import CopyDetector
import os
import argparse
import re
import copydetect
import time

common_types = [
    ("size_t", ["size_t"]),
    ("int", ["int", "int32_t", "s32", "long", "long int", "signed int", "signed long", "_int32", "__int32"]),
    ("char", ["char", "int8_t", "s8", "_int8", "__int8"]),
    ("float", ["float"]),
    ("double", ["double"]),
    ("void", ["void"]),
    ("bool", ["bool"]),
    ("long long", ["long long int", "long long", "int64_t", "s64", "signed long long", "_int64", "__int64"]),
    ("short", ["short", "int16_t", "s16", "_int16", "__int16"]),
    ("string", ["string"]),
    ("unsigned int", ["u32", "unsigned int", "unsigned long", "unsigned long int", "uint32_t", "uint", "u_int"]),
    ("unsigned double", ["unsigned double", "udouble"]),
    ("unsigned long long", ["u64", "unsigned long long", "unsigned long long int", "uint64_t"]),
    ("unsigned short", ["u16", "unsigned short", "uint16_t", "ushort"]),
    ("unsigned char", ["u8", "unsigned char", "uchar", "uint8_t"])
]

def replace_types(code, type_mapping):
    for target_type, aliases in type_mapping:
        for alias in aliases:
            pattern = r'\b' + re.escape(alias) + r'\b'
            code = re.sub(pattern, target_type, code)
    return code

def replace_types_in_directory(directory_path):
    for root, dirs, files in os.walk(directory_path):
        for file in files:
            if file.endswith('.c'):
                file_path = os.path.join(root, file)
                with open(file_path, 'r', encoding='utf-8') as f:
                    code = f.read()
                updated_code = replace_types(code, common_types)
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(updated_code)
                print(f"Updated file: {file_path}")

def parse_options():
    parser = argparse.ArgumentParser(description='')
    parser.add_argument('--program', help='The dir path of program', type=str)
    parser.add_argument('--pattern', help='The dir path of pattern', type=str)
    parser.add_argument('--tags', help='The dir path of c_tags', type=str)
    parser.add_argument('--o1', help='The dir path of match_content', type=str)
    parser.add_argument('--o2', help='The dir path of match_content_line_information', type=str)
    args = parser.parse_args()
    return args

def count_chars_without_spaces(input_string):
    filtered_characters = [char for char in input_string if char != ' ']
    return len(filtered_characters)

def get_first_linenum(html_file_path):
    with open(html_file_path, "r", encoding="utf-8") as file:
        html_content = file.readlines()
    count = 0
    line_number = 0
    for line in html_content:
        line_number += 1
        if '<div class="col code-display">' in line:
            count += 1
            if count == 2:
                return line_number
    return -1

def get_program_match_linenum(html_file_path):
    with open(html_file_path, "r", encoding="utf-8") as file:
        html_content = file.readlines()
    start_lines = []
    end_lines = []
    for line_number, line in enumerate(html_content, start=1):
        start_count = line.count('highlight-green')
        end_count = line.count('</span>')
        start_lines.extend([line_number] * start_count)
        end_lines.extend([line_number] * end_count)
    return start_lines, end_lines

def extract_lines_from_file(filename, start_line, end_line):
    lines_to_extract = []
    with open(filename, 'r') as file:
        for i, line in enumerate(file, start=1):
            if start_line <= i <= end_line:
                lines_to_extract.append(line)
            if i > end_line:
                break
    return lines_to_extract

def extract_function(file_path, line_num):
    with open(file_path) as f:
        content = f.readlines()
        for line in content:
            if 'function line' in line:
                parts = line.split()
                function_name = parts[0]
                match_line = re.search(r'line:(\d+)', line)
                if match_line:
                    line_number = int(match_line.group(1))
                    function_name = line.split()[0]
                match_end = re.search(r'end:(\d+)', line)
                if match_end:
                    end_number = int(match_end.group(1))
                if not match_end:
                    return None
                if line_number <= int(line_num) <= end_number:
                    return function_name
    return None

def detect(pattern_path, program_path, match_content_path, match_content_line_information_path, tags_folder):
    os.makedirs(match_content_path, exist_ok=True)
    os.makedirs(match_content_line_information_path, exist_ok=True)
    count = 0
    for pattern_file_name in os.listdir(pattern_path):
        for program_file_name in os.listdir(program_path):
            outfile = "./report.html"
            with open(outfile, 'w', encoding='utf-8') as file:
                file.write("")
            pattern = os.path.join(pattern_path, pattern_file_name)
            print("pattern", pattern)
            program = os.path.join(program_path, program_file_name)
            print("program", program)
            fp1 = copydetect.CodeFingerprint(pattern, 3, 1)
            num = int(count_chars_without_spaces(fp1.filtered_code))
            detector = CopyDetector(autoopen=False, out_file=outfile, guarantee_t=num, noise_t=num)
            detector.add_file(pattern)
            detector.add_file(program)
            detector.run()
            detector.generate_html_report()
            count = count + 1
            file_path = outfile
            with open(file_path, 'r', encoding='utf-8') as file:
                file_content = file.read()
                if 'View matched code' in file_content:
                    first_line = get_first_linenum("./report.html")
                    program_start_line, program_end_line = get_program_match_linenum("./report.html")
                    print("program_start_line", program_start_line)
                    print("program_end_line", program_end_line)
                    print("first_line", first_line)
                    for i in range(1, len(program_start_line)):
                        if program_start_line[i] == program_end_line[i]:
                            content = extract_lines_from_file(program, program_start_line[i] - first_line, program_end_line[i] - first_line)
                        else:
                            content = extract_lines_from_file(program, program_start_line[i] - first_line, program_end_line[i] - first_line - 1)
                        tags_path = os.path.join(tags_folder, program_file_name.rsplit('.', 1)[0])
                        function_name = extract_function(tags_path, program_start_line[i] - first_line)
                        print("function_name", function_name)
                        if function_name is None:
                            continue
                        else:
                            output_file_path = os.path.join(match_content_path, pattern_file_name + "|" + program_file_name.replace('.cpp', '').replace('.c', '') + "|" + function_name)
                            if os.path.exists(output_file_path):
                                continue
                            else:
                                with open(output_file_path, 'w', encoding='utf-8') as text_file:
                                    text_file.write(''.join(content))
                                output_file_path = os.path.join(match_content_line_information_path, pattern_file_name + "|" + program_file_name.replace('.cpp', '').replace('.c', '') + "|" + function_name)
                                with open(output_file_path, 'w', encoding='utf-8') as text_file:
                                    text_file.write(str(program_start_line[i] - first_line) + '\n')
                                    if program_start_line[i] == program_end_line[i]:
                                        text_file.write(str(program_end_line[i] - first_line))
                                    else:
                                        text_file.write(str(program_end_line[i] - first_line - 1))

start_time = time.time()
args = parse_options()
pattern_path = args.pattern
program_path = args.program
tags_folder = args.tags
match_content_path = args.o1
match_content_line_information_path = args.o2
replace_types_in_directory(pattern_path)
replace_types_in_directory(program_path)
detect(pattern_path, program_path, match_content_path, match_content_line_information_path, tags_folder)
end_time = time.time()
execution_time = end_time - start_time
print("Execution time: ", execution_time, " seconds")