import os
import shutil
import argparse
import re
def parse_options():
    parser = argparse.ArgumentParser(description='Extracting diff.')
    parser.add_argument('-i', '--input', help='The dir path of input', type=str)
    parser.add_argument('-o', '--output', help='The dir path of output', type=str)
    args = parser.parse_args()
    return args

def collect_c_cpp_files(source_dir, destination_dir):
    if not os.path.exists(destination_dir):
        os.makedirs(destination_dir)
    
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            if file.endswith(".c") or file.endswith(".cpp"):
                source_file = os.path.join(root, file)
                
                
                if file.endswith(".cpp"):
                    base = os.path.splitext(file)[0]
                    destination_file = os.path.join(destination_dir, f"{base}.c")
                else:
                    destination_file = os.path.join(destination_dir, file)
                
                
                if os.path.exists(destination_file):
                    
                    base, extension = os.path.splitext(destination_file)
                    counter = 1
                    new_destination_file = f"{base}_{counter}{extension}"
                    while os.path.exists(new_destination_file):
                        counter += 1
                        new_destination_file = f"{base}_{counter}{extension}"
                    destination_file = new_destination_file

                shutil.copy(source_file, destination_file)

def remove_comments_from_file(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            code = file.read()
    except UnicodeDecodeError:
        with open(file_path, 'r', encoding='latin-1') as file:
            code = file.read()
    

    pattern = r'(?<!:)//[^\n]*|/\*[\s\S]*?\*/'
    code = re.sub(pattern, "", code)
    
    with open(file_path, 'w', encoding='utf-8') as file:
        file.write(code)

def remove_comments_from_directory(directory_path):
    for root, dirs, files in os.walk(directory_path):
        for file in files:
            file_path = os.path.join(root, file)
            print("next file", file_path)
            remove_comments_from_file(file_path)
            print(f"Processed file: {file_path}")

args = parse_options()
source_directory = args.input
destination_directory = args.output  
if not os.path.exists(destination_directory):
    print("create folder")
    os.makedirs(destination_directory)

collect_c_cpp_files(source_directory, destination_directory)
remove_comments_from_directory(destination_directory)