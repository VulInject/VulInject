import os
import re

##inject vulnerability according to the pattern

processed_diff_path = "/home/VulInject/data/pattern/"
result_path = "/home/VulInject/result/generated_vulnerable_programs/"
programs = os.listdir(result_path)
print(programs)
# programs = ["Linux"]
for program in programs:
    match_result_path = result_path + program + "/match_result/" 
    program_file_path = result_path + program + "/c_origin/"
    cfiles = os.listdir(match_result_path)
    vul_program_path = result_path + program + "/c_vul/"
    if not (os.path.exists(vul_program_path)):
        os.mkdir(vul_program_path)

    for cfile in cfiles:
        match_results = os.listdir(match_result_path + cfile)
        for match_result in match_results:
            # print(match_result)
            line_number = []   #store the relative line number
            map_dict = {}  #store variable mappings
            c_file = match_result.split("|")[1] + ".c" #get orginal c file
            flag = 1
            if "_unbracked" in match_result:
                match_result_tmp = match_result.replace("_unbracked", "")
                pattern_file = re.sub(r'\.c$', '.diff.pattern', match_result_tmp.split("|")[0]) 
                flag = 0
            if "_bracked" in match_result:
                match_result_tmp = match_result.replace("_bracked", "")
                pattern_file = re.sub(r'\.c$', '.diff.pattern', match_result_tmp.split("|")[0]) 
                flag = 0
            if flag ==1:
                pattern_file = re.sub(r'\.c$', '.diff.pattern', match_result.split("|")[0]) #get pattern file name
            cvenum = pattern_file.split("_")[0] #
            # print(c_file, pattern_file, cvenum)
            pattern_path = processed_diff_path + cvenum + "/" + pattern_file
            c_path = program_file_path + c_file
            line_path = match_result_path + cfile + "/" + match_result +"/line_information.txt"
            with open(c_path, "r") as program_file:
                program_content = program_file.readlines()  #get file content
            with open(line_path, "r") as line_file:
                line_info = line_file.readlines()
                line_start = int(line_info[0].rstrip("\n"))    #get start line num
                line_end = int(line_info[1])    #get end line num
            with open(match_result_path + cfile + "/" + match_result +"/map.txt", "r") as map_file:
                map_info = map_file.readlines()
            for item in map_info:
                match = re.search(r'Lines: (\d+)', item)
                if match:
                    line_number.append(match.group(1))
                match = re.match(r'(\w+): (\w+),', item)
                if match:
                    key, value = match.groups()
                    map_dict[key] = value
            program_content_before = program_content[:line_start-1]
            program_content_after = program_content[line_end:]
            modified_content = []  #store vulnerable code statements
            try:
                with open(pattern_path, "r") as pattern:
                    pattern_content = pattern.read()
            except Exception as e:
                print(e)
            delete_pattern = re.compile(r'^[-]{1}[^-].*$', re.MULTILINE)  #get deleted lines in pattern
            delete_lines = delete_pattern.findall(pattern_content)
            #if deleted lines exist
            if delete_lines:          
                nor_pattern = re.compile(r'\b(?:FUN\d+|VAR\d+|STR\d+|CHAR\d+)\b')   #find all normalized variables
                for delete_line in delete_lines:
                    delete_line = delete_line[1:]
                    identifiers = nor_pattern.findall(delete_line)
                    for identifier in identifiers:
                        if identifier in map_dict:
                            delete_line = delete_line.replace(identifier, str(map_dict[identifier]))
                        else:
                            print(match_result)
                    modified_content.append(delete_line+"\n")
                modified_c = program_content_before + modified_content + program_content_after
            #if not
            else:
                modified_c = program_content_before + program_content_after
            with open(vul_program_path+match_result+".c", "w") as vul_file:
                for item in modified_c:
                    vul_file.write(item)



    


