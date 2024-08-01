# -*- coding: UTF-8 -*-
import re
import os

match_path = "/home/VulInject/result/generated_vulnerable_programs/"

program_list = os.listdir(match_path)
# program_list = ['Tcpdump', 'Wireshark', 'Radare2']
for program in program_list:
    for c_origin in os.listdir(match_path + program +"/match_result/"):
        match_results_list = os.listdir(match_path + program + "/match_result/"+c_origin)
        for match_result in match_results_list:
            cve_num = match_result.split("_")[0]
            pattern_path = "/home/VulInject/data/pattern/" + cve_num
            with open(pattern_path +"/cv.txt", "r")as cv_file:          #get pattern's cv info
                patch_infos = cv_file.readlines()
            target_cv = open(match_path + program + "/match_result/"+c_origin +"/"+ match_result +"/cv.txt", mode = 'w+') #store cv info of target programs
            
            pattern_map = {}
            target_map = {}
            with open(pattern_path +"/map.txt", "r")as map_file:
                pattern_map_list = map_file.readlines()             ##get pattern variables' mapping info
            with open(match_path + program + "/match_result/"+c_origin +"/"+ match_result +"/map.txt", "r")as map_file:
                target_map_list = map_file.readlines()              ##get mapping info of target programs
            for  i in pattern_map_list:
                nor_before = i.split(":")[1].rstrip("\n").lstrip(" ")
                nor_after = i.split(":")[0]
                pattern_map[nor_before] = nor_after
            for i in target_map_list:
                nor_after = i.split(":")[0]
                nor_before = i.split(",")[0].split(" ")[1]
                lineinfo = i.split(":")[2].rstrip("\n").lstrip(" ").split(", ")
                target_map[nor_after]=[nor_before, lineinfo]
            # print(target_map)
            patch_block = []  
            this_block = []
            block_flag = 0
            
            ##Replace the pattern cv content
            for line in patch_infos:
                if line == '\n': #one patch block end
                    # if block_flag == 0:
                    this_block.append(line)
                    block_flag = 1
                    patch_block.append(this_block) 
                    this_block = []
                    # elif block_flag == 1:
                    #     block_flag = 0
                elif line != '==============================================================\n' and line != "=======================patch type===========================\n":
                    this_block.append(line)
            #写入cv.txt头
            print(match_result, file = target_cv)
            print("=======================patch type===========================", file = target_cv)
            with open(match_path + program + "/match_result/"+c_origin +"/"+ match_result +"/line_information.txt", "r")as line_file:
                start_line = line_file.readlines()[0]      #get start line info
            if bool(target_map):
                for block in patch_block:
                    if "Add" in block[0]:
                        cv_list = re.findall(r"'(.*?)'", block[-2])
                        print(match_result)
                        print(cv_list)
                        # regular expression to find variable name candidates
                        rx_var = re.compile(r'\b([_A-Za-z]\w*)\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()')
                        token_list = []
                        for cv in cv_list:
                            token_list_tmp = rx_var.findall(cv)     ## x->y will be tokenized as VAR1->VAR2, thus store each token to token_list
                            token_list.extend(token_list_tmp)
                        token_list = list(set(token_list))
                        nor_token_list = []
                        for token in token_list:
                            if token in pattern_map:
                                nor_token = pattern_map[token]
                                block[3] = re.sub(r'\b' + re.escape(token) + r'\b', nor_token, block[3])
                                nor_token_list.append(nor_token)
                        print(nor_token_list, target_map)
                        for nor_token in nor_token_list:
                            if nor_token in target_map:
                                target_token = target_map[nor_token][0]
                                block[3] = block[3].replace(nor_token, target_token)
                                target_line_num = target_map[nor_token][1][0]
                                target_map[nor_token][1] = target_map[nor_token][1][1:]  
                                # print(target_map)
                        patch_line_num = block[2].split("#")[1].rstrip("\n")
                        block[2] = block[2].replace(patch_line_num, str(int(target_line_num)+int(start_line)-1)) # attention! -1
                        for content in block:
                            print(content[:-1], file = target_cv)
                    elif "Replace" in block[0]:
                        cv_list = re.findall(r"'(.*?)'", block[-2])
                        # print(match_result)
                        # print(cv_list)
                        # regular expression to find variable name candidates
                        rx_var = re.compile(r'\b([_A-Za-z]\w*)\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()')
                        token_list = []
                        for cv in cv_list:
                            token_list_tmp = rx_var.findall(cv)     ## x->y will be tokenized as VAR1->VAR2, thus store each token to token_list
                            token_list.extend(token_list_tmp)
                        token_list = list(set(token_list))
                        nor_token_list = []
                        for token in token_list:
                            if token in pattern_map:
                                nor_token = pattern_map[token]
                                print(token, nor_token)
                                block[4] = re.sub(r'\b' + re.escape(token) + r'\b', nor_token, block[4])
                                print(block[4])
                                nor_token_list.append(nor_token)
                        for nor_token in nor_token_list:
                            if nor_token in target_map:
                                target_token = target_map[nor_token][0]
                                block[4] = block[4].replace(nor_token, target_token)
                                print(target_map)
                                target_line_num = target_map[nor_token][1][0]
                                target_map[nor_token][1] = target_map[nor_token][1][1:]  
                                # print(target_map)
                        patch_line_num = block[2].split("#")[1].rstrip("\n")
                        # print(int(target_line_num)+int(start_line)-1)
                        block[3] = block[3].replace(patch_line_num, str(int(target_line_num)+int(start_line)-1)) 
                        block[2] = block[2].replace(patch_line_num, str(int(target_line_num)+int(start_line)-1)) 
                        for content in block:
                            print(content[:-1], file = target_cv)
                print("==============================================================", file = target_cv)
            else:
                print("==============================================================", file = target_cv)
                



        
