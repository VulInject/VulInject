import os
import argparse
import re

def extract_variables_and_functions(code):
    variables = []
    functions = []
    lines = code.split('\n') 
    for line in lines:
        variable = re.findall(r'\bVAR\d+\b', line)
        function = re.findall(r'\bFUN\d+\b', line)
        variables += variable
        functions += function
    return functions, variables

def check_last_line_with_return(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            lines = file.readlines()
            last_line = lines[-1].strip()  
            if 'return' not in last_line:
                return True
            

            return_str = last_line.split('return')[1].strip().upper()


            error_codes = ['ERROR', 'INVALID', 'FALSE', 'ENOMEM', 'ENOENT', 'EACCES',
                           'FAULT', 'ENOSYS', 'ENOTSUP', 'EAGAIN', 'EINVAL', 'ENOEXEC',
                           'EFAULT', 'ENOMEDIUM', '0', '1', '-1', 'NULL', 'NULLPTR','EIO','ERR']

            for code in error_codes:
                if code in return_str:
                    return True

            return False
    except Exception as e:
        print(f"An error occurred: {str(e)}")
        return False

# 示例用法


def parse_options():
    parser = argparse.ArgumentParser()
    parser.add_argument('-p1',  help='The dir path of normalized_match_content', type=str, required=True)
    parser.add_argument('-p2',  help='The dir path of normalized_pattern', type=str, required=True)
    parser.add_argument('-p3',  help='The dir path of match_content_var_fun_map', type=str, required=True)
    parser.add_argument('-p4',  help='The dir path of match_content_line_information', type=str, required=True)
    parser.add_argument('-p5',  help='The dir path of match_content_label', type=str, required=True)
    parser.add_argument('-p6',  help='The dir path of match_content', type=str, required=True)
    parser.add_argument('-p7',  help='The dir path of output', type=str, required=True) 
    args = parser.parse_args()
    return args

def match(normalized_match_content_folder, normalized_pattern_folder,match_content_var_fun_map_folder,match_content_line_information_folder, match_content_label_folder,match_content_folder,output_folder):
    for normalized_match_content_filename in os.listdir(normalized_match_content_folder):
        normalized_match_content_path = os.path.join(normalized_match_content_folder, normalized_match_content_filename)
        pattern_filename = normalized_match_content_filename.split("|")[0]
        program_filename = normalized_match_content_filename.split("|")[1]
        cve_num = pattern_filename.split("_")
        matching_files = [filename for filename in os.listdir(normalized_pattern_folder) if filename.startswith(cve_num[0])]
        normalized_pattern_path = os.path.join(normalized_pattern_folder, matching_files[0])
        with open(normalized_pattern_path, 'r') as file:
            code = file.read()
            pattern_fun_list, pattern_var_list = extract_variables_and_functions(code)
            print("pattern_var_list", pattern_var_list)
        with open(normalized_match_content_path, 'r') as file:
            code = file.read()
        match_content_fun_list, match_content_var_list = extract_variables_and_functions(code)
        print("match_content_var_list", match_content_var_list)
        match_content_path = os.path.join(match_content_folder,normalized_match_content_filename[:-2])
        flag = check_last_line_with_return(match_content_path)
        if match_content_fun_list == pattern_fun_list and match_content_var_list == pattern_var_list and flag ==True:
            with open(os.path.join(match_content_var_fun_map_folder,normalized_match_content_filename[:-2]+".txt" ), 'r') as file:
                content_a = file.read() 
            line_info_path = os.path.join(match_content_line_information_folder, normalized_match_content_filename[:-2])
            content_b = ''
            if os.path.exists(line_info_path):
                with open(line_info_path, 'r') as file:
                    content_b = file.read()
            label_path = os.path.join(match_content_label_folder, normalized_match_content_filename[:-2]+".txt_idtype.txt")
            content_c = ''
            if os.path.exists(label_path):
                with open(label_path, 'r') as file:
                    content_c = file.read()
            match_result_dir = os.path.join(output_folder,program_filename,normalized_match_content_filename[:-2])
            os.makedirs(match_result_dir, exist_ok=True)


            with open(os.path.join(match_result_dir, 'map.txt'), 'w') as file:
                file.write(content_a)
            with open(os.path.join(match_result_dir, 'line_information.txt'), 'w') as file:
                file.write(content_b)
            with open(os.path.join(match_result_dir, 'type.txt'), 'w') as file:
                file.write(content_c)



if __name__ == '__main__':
    args = parse_options()
    normalized_match_content_folder = args.p1
    normalized_pattern_folder = args.p2
    match_content_var_fun_map_folder = args.p3
    match_content_line_information_folder = args.p4
    match_content_label_folder = args.p5
    match_content_folder = args.p6
    output_folder = args.p7
    os.makedirs(output_folder, exist_ok=True)


    match(normalized_match_content_folder, normalized_pattern_folder,match_content_var_fun_map_folder,match_content_line_information_folder, match_content_label_folder,match_content_folder,output_folder)