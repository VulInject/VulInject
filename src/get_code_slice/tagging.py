import re
import os
import argparse
def parse_options():
    parser = argparse.ArgumentParser(description='Extracting diff.')
    parser.add_argument('-m', '--map', help='The dir path of map', type=str)
    parser.add_argument('-t', '--tag', help='The dir path of tag results', type=str)
    parser.add_argument('-l', '--label', help='The output path of label', type=str)
    parser.add_argument('-s', '--start_line', help='The dir path of line_information', type=str)


    args = parser.parse_args()
    return args


def tagging(var_fun_map_folder, tags_folder, label_folder,line_information_folder):
    count = 0
    for filename in os.listdir(var_fun_map_folder):
        file_path = os.path.join(var_fun_map_folder, filename)
        # print("filepath", file_path)
        with open(file_path, "r") as file:
            text = file.read()

        if not text:
            prefix = filename.replace(".txt", "")
            if '|' in filename:
                label_path = os.path.join(label_folder, filename + "_idtype.txt")
            else:
                label_path = os.path.join(label_folder, prefix + "_idtype.txt")

            with open(label_path, 'w') as f:
                str = "none"
                f.write(str)
            continue
 
        lines = text.strip().split('\n')

        extracted_fun_texts = []
        extracted_fun_line_information = []
        extracted_var_texts = []
        extracted_var_line_information = []
        pipe_count = filename.count("|")
        if pipe_count == 2:
            line_information_path = os.path.join(line_information_folder,filename.replace(".txt", ""))
        else:
            line_information_path = os.path.join(line_information_folder,filename)
        with open(line_information_path, "r") as file:
            start_line = int(file.readline().strip())
        for line in lines:
            parts = line.strip().split(':')
            key = parts[0].strip()
            value_parts = parts[1].split(',')
            value = value_parts[0].strip()
            match = re.search(r'Lines: (\d+)', line)
            lines_number = int(match.group(1))
            if key.startswith('FUN'):
                extracted_fun_texts.append(value)
                extracted_fun_line_information.append(lines_number+start_line-1)
            if key.startswith('VAR'):
                extracted_var_texts.append(value)
                extracted_var_line_information.append(lines_number+start_line-1)
        #Store symbolized information in a list


        fun_num = len(extracted_fun_texts)
        if fun_num > 0:
            if pipe_count == 1:
                program_name = filename.split("|")[1]
                if program_name.endswith("_NEW.txt"):
                    prefix = program_name.replace("_NEW.txt", "")
                elif program_name.endswith(".txt"):
                    prefix = program_name.replace(".txt", "")
            if pipe_count ==2:
                prefix = filename.replace(".txt", "")
                program_name = filename.split("|")[1].replace(".c", "")
            else:
                prefix = filename.replace(".txt", "")
            if pipe_count ==2:    
                ctag_path = os.path.join(tags_folder, program_name)
            else :
                ctag_path = os.path.join(tags_folder, prefix)
            if os.path.exists(ctag_path):


                with open(ctag_path, "r") as ctag_file:
                    ctag_lines = ctag_file.readlines()
                for j in range(fun_num):
                    search_text = extracted_fun_texts[j]
                    found_match = False  
                    if '|' in filename:
                        label_path = os.path.join(label_folder, filename + "_idtype.txt")
                    else:
                        label_path = os.path.join(label_folder, prefix + "_idtype.txt")
                    for line in ctag_lines:
                        segments = line.split()
                        if segments[0] == search_text:
                            match = re.search(r'typename:(.*?)signature:', line)

                            if match:
                                extracted_text = match.group(1).strip()
                                with open(label_path, "a") as label_file:
                                    label_line = f"FUN{j + 1} {extracted_text}\n"
                                    label_file.write(label_line)
                                found_match = True  
                                break 
                    if not found_match:
                        with open(label_path, "a") as label_file:
                            label_line = f"FUN{j + 1} NULL\n"
                            label_file.write(label_line)
        var_num = len(extracted_var_texts)

        if var_num > 0:
            if pipe_count == 1:
                program_name = filename.split("|")[1]
                if program_name.endswith("_NEW.txt"):
                    prefix = program_name.replace("_NEW.txt", "")
                elif program_name.endswith(".txt"):
                    prefix = program_name.replace(".txt", "")
            if pipe_count ==2:
                prefix = filename.replace(".txt", "")
                program_name = filename.split("|")[1].replace(".c", "")
            else:
                prefix = filename.replace(".txt", "")
            if pipe_count ==2:    
                ctag_path = os.path.join(tags_folder, program_name)
            else :
                ctag_path = os.path.join(tags_folder, prefix)
            if os.path.exists(ctag_path):
                with open(ctag_path, "r") as ctag_file:
                    ctag_lines = ctag_file.readlines()
                for j in range(var_num):
                    search_text = extracted_var_texts[j]
                    found_match = False  
                    if '|' in filename:
                        label_path = os.path.join(label_folder, filename + "_idtype.txt")
                    else:
                        label_path = os.path.join(label_folder, prefix + "_idtype.txt")
                    nearest_line = None
                    for line in ctag_lines:
                        segments = line.split()
                        if segments[0] == search_text:

                            found_match = True
                            segments = line.split()  
                            current_line_num = int(segments[2].strip().split(':')[1]) 
                            if current_line_num <= extracted_var_line_information[j]:
                                if nearest_line is None or current_line_num > nearest_line:  
                                    nearest_line = current_line_num
                                    nearest_line_text = line
                    # 施工段
                    if found_match:
                        segments = nearest_line_text.split()
                        if segments[1] == "local" or segments[1] == "variable" or segments[1] == "member":  # check typeref
                            # get information in front of "end" and behind "typefef"  
                            if 'end' in nearest_line_text:
                                pattern = r'typeref:(.*?)end'
                            if 'end' not in nearest_line_text:
                                pattern = r'typeref:(.*?)'
                            match = re.search(pattern, nearest_line_text)
                            if not match:
                                with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} NULL\n"
                                        label_file.write(label_line)
                                continue

                            extracted_text = match.group(1).strip()
                            if extracted_text.startswith("struct"):
                                if extracted_text.endswith("*"):
                                    with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} struct *\n"
                                        label_file.write(label_line)
                                else:
                                    with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} struct\n"
                                        label_file.write(label_line)
                            if extracted_text.startswith("enum"):
                                parts = extracted_text.strip().split(':')
                                type = parts[1].strip()
                                with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} {type}\n"
                                        label_file.write(label_line)
                            if extracted_text.startswith("union"):

                                with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} union\n"
                                        label_file.write(label_line)
                            if extracted_text.startswith("typename"):
                                common_types = [
                                    ("size_t", ["size_t"]),
                                    ("int", ["int", "int32_t","s32","long","long int","signed int","signed long","_int32","__int32"]),
                                    ("char", ["char","int8_t","s8","_int8","__int8"]),
                                    ("float", ["float"]),
                                    ("double", ["double"]),
                                    ("void", ["void"]),
                                    ("bool", ["bool"]),
                                    ("long long", ["long long int", "long long","int64_t","s64","signed long long","_int64","__int64"]),
                                    ("short", ["short","int16_t","s16","_int16","__int16"]),
                                    ("string", ["string"]),
                                    ("unsigned int", ["u32", "unsigned int","unsigned long","unsigned long int","uint32_t","uint"]),
                                    ("unsigned double", ["unsigned double","udouble"]),
                                    ("unsigned long long", ["u64","unsigned long long","unsigned long long int","uint64_t"]),
                                    ("unsigned short", ["u16","unsigned short","uint16_t","ushort"]),
                                    ("unsigned char", ["u8","unsigned char","uint8_t","uchar"]),
                                    ("int *", ["int *", "int32_t *", "s32 *", "long *", "long int *", "signed int *", "signed long *", "_int32 *", "__int32 *"]),
                                    ("char *", ["char *", "int8_t *", "s8 *", "_int8 *", "__int8 *"]),
                                    ("float *", ["float *"]),
                                    ("double *", ["double *"]),
                                    ("void *", ["void *"]),
                                    ("bool *", ["bool *"]),
                                    ("long long *", ["long long int *", "long long *", "int64_t *", "s64 *", "signed long long *", "_int64 *", "__int64 *"]),
                                    ("short *", ["short *", "int16_t *", "s16 *", "_int16 *", "__int16 *"]),
                                    ("string *", ["string *"]),
                                    ("unsigned int *", ["u32 *", "unsigned int *", "unsigned long *", "unsigned long int *", "uint32_t *","uint *"]),
                                    ("unsigned double *", ["unsigned double *,udouble *"]),
                                    ("unsigned long long *", ["u64 *", "unsigned long long *", "unsigned long long int *", "uint64_t *"]),
                                    ("unsigned short *", ["u16 *", "unsigned short *", "uint16_t *,ushort *"]),
                                    ("unsigned char *", ["u8 *", "unsigned char *", "uint8_t *,uchar *"])
                                ]
                                parts = extracted_text.strip().split(':')
                                type = parts[1].strip()
                                # Check if the type is a common type
                                is_common_type = False
                                for common_type, variations in common_types:
                                    if type in variations:
                                        is_common_type = True
                                        type_to_write = common_type
                                        break
                                if not is_common_type and type.endswith('*'):
                                    type_to_write = 'user_defined *'
                                else:
                                    type_to_write = type_to_write if is_common_type else 'user_defined'
                                with open(label_path, "a") as label_file:
                                    label_line = f"VAR{j + 1} {type_to_write}\n"
                                    label_file.write(label_line)
                        if segments[1] == "parameter":
                            pattern = r'typeref:(.*)'
                            match = re.search(pattern, nearest_line_text)
                            if match is None:
                                continue  

                            extracted_text = match.group(1).strip()
                            if extracted_text.startswith("struct"):
                                if extracted_text.endswith("*"):
                                    with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} struct *\n"
                                        label_file.write(label_line)
                                else:
                                    with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} struct\n"
                                        label_file.write(label_line)
                            if extracted_text.startswith("typename"):
                                common_types = [
                                    ("size_t", ["size_t"]),
                                    ("int", ["int", "int32_t","s32","long","long int","signed int","signed long","_int32","__int32"]),
                                    ("char", ["char","int8_t","s8","_int8","__int8"]),
                                    ("float", ["float"]),
                                    ("double", ["double"]),
                                    ("void", ["void"]),
                                    ("bool", ["bool"]),
                                    ("long long", ["long long int", "long long","int64_t","s64","signed long long","_int64","__int64"]),
                                    ("short", ["short","int16_t","s16","_int16","__int16"]),
                                    ("string", ["string"]),
                                    ("unsigned int", ["u32", "unsigned int","unsigned long","unsigned long int","uint32_t","uint"]),
                                    ("unsigned double", ["unsigned double","udouble"]),
                                    ("unsigned long long", ["u64","unsigned long long","unsigned long long int","uint64_t"]),
                                    ("unsigned short", ["u16","unsigned short","uint16_t","ushort"]),
                                    ("unsigned char", ["u8","unsigned char","uint8_t","uchar"]),
                                    ("int *", ["int *", "int32_t *", "s32 *", "long *", "long int *", "signed int *", "signed long *", "_int32 *", "__int32 *"]),
                                    ("char *", ["char *", "int8_t *", "s8 *", "_int8 *", "__int8 *"]),
                                    ("float *", ["float *"]),
                                    ("double *", ["double *"]),
                                    ("void *", ["void *"]),
                                    ("bool *", ["bool *"]),
                                    ("long long *", ["long long int *", "long long *", "int64_t *", "s64 *", "signed long long *", "_int64 *", "__int64 *"]),
                                    ("short *", ["short *", "int16_t *", "s16 *", "_int16 *", "__int16 *"]),
                                    ("string *", ["string *"]),
                                    ("unsigned int *", ["u32 *", "unsigned int *", "unsigned long *", "unsigned long int *", "uint32_t *","uint *"]),
                                    ("unsigned double *", ["unsigned double *,udouble *"]),
                                    ("unsigned long long *", ["u64 *", "unsigned long long *", "unsigned long long int *", "uint64_t *"]),
                                    ("unsigned short *", ["u16 *", "unsigned short *", "uint16_t *,ushort *"]),
                                    ("unsigned char *", ["u8 *", "unsigned char *", "uint8_t *,uchar *"])
                                ]
                                parts = extracted_text.strip().split(':')
                                type = parts[1].strip()

                                # Check if the type is a common type
                                is_common_type = False
                                for common_type, variations in common_types:
                                    if type in variations:
                                        is_common_type = True
                                        type_to_write = common_type
                                        break
                                if not is_common_type and type.endswith('*'):
                                    type_to_write = 'user_defined *'
                                else:
                                    type_to_write = type_to_write if is_common_type else 'user_defined'
                                # Write the type to the label file
                                with open(label_path, "a") as label_file:
                                    label_line = f"VAR{j + 1} {type_to_write}\n"
                                    label_file.write(label_line)
                            if extracted_text.startswith("enum"):
                                parts = extracted_text.strip().split(':')
                                type = parts[1].strip()
                                with open(label_path, "a") as label_file:
                                        label_line = f"VAR{j + 1} {type}\n"
                                        label_file.write(label_line)

                        if segments[1] == "label":
                            with open(label_path, "a") as label_file:
                                label_line = f"VAR{j + 1} label\n"
                                label_file.write(label_line)
                        
                        if segments[1] not in ["label", "parameter", "local", "variable", "member"]:
                            with open(label_path, "a") as label_file:
                                label_line = f"VAR{j + 1} NULL\n"
                                label_file.write(label_line)

                    if not found_match:

                        # if '|' in filename:
                        #     program_name = filename.split("|")[1]
                        #     prefix = program_name.replace("_NEW.txt", "")
                        # else:
                        #     prefix = filename.replace(".txt", "")
                        with open(label_path, "a") as label_file:
                            label_line = f"VAR{j + 1} NULL\n"
                            label_file.write(label_line)







def main():
    args = parse_options()
    map_folder = args.map
    tags_folder = args.tag
    label_folder = args.label
    line_information_folder = args.start_line
    if not os.path.exists(map_folder):
        os.makedirs(map_folder)
    if not os.path.exists(tags_folder):
        os.makedirs(tags_folder)
    if not os.path.exists(label_folder):
        os.makedirs(label_folder)
    if not os.path.exists(line_information_folder):
        os.makedirs(line_information_folder)
    tagging(map_folder, tags_folder, label_folder,line_information_folder)
if __name__ == "__main__":
    main()


