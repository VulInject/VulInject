import os
import re
import ast

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
                    ("unsigned int", ["u32", "unsigned int","unsigned long","unsigned long int","uint32_t"]),
                    ("unsigned double", ["unsigned double"]),
                    ("unsigned long long", ["u64","unsigned long long","unsigned long long int","uint64_t"]),
                    ("unsigned short", ["u16","unsigned short","uint16_t", "ushort"]),
                    ("unsigned char", ["u8","unsigned char","uint8_t"]),
                    ("int *", ["int *", "int32_t *", "s32 *", "long *", "long int *", "signed int *", "signed long *", "_int32 *", "__int32 *"]),
                    ("char *", ["char *", "int8_t *", "s8 *", "_int8 *", "__int8 *"]),
                    ("float *", ["float *"]),
                    ("double *", ["double *"]),
                    ("void *", ["void *"]),
                    ("bool *", ["bool *"]),
                    ("long long *", ["long long int *", "long long *", "int64_t *", "s64 *", "signed long long *", "_int64 *", "__int64 *"]),
                    ("short *", ["short *", "int16_t *", "s16 *", "_int16 *", "__int16 *"]),
                    ("string *", ["string *"]),
                    ("unsigned int *", ["u32 *", "unsigned int *", "unsigned long *", "unsigned long int *", "uint32_t *"]),
                    ("unsigned double *", ["unsigned double *"]),
                    ("unsigned long long *", ["u64 *", "unsigned long long *", "unsigned long long int *", "uint64_t *"]),
                    ("unsigned short *", ["u16 *", "unsigned short *", "uint16_t *"]),
                    ("unsigned char *", ["u8 *", "unsigned char *", "uint8_t *"])
                ]

class Vulnerability:
    def __init__(self, path):
        self.slice, self.patch_stmt = self.get_slice(path)
        self.stmt_type = self.get_stmttype(self.patch_stmt)
        self.cv_dict = self.get_cv(path)
        
    
    def get_slice(self, path):
        slice_path = path + "slice.txt"
        with open(slice_path, "r")as slicefile:
            slice_content = slicefile.readlines()
        location = slice_content[0].split("@@")[3].strip()
        flag = 0
        code_slice = ''
        match_patch = ''
        for content in slice_content[1:]:
            if flag == 0:
                code_slice += (content.split("location: ")[0]+"\n")
                if "location: "+location in content:
                    match_patch = content.split("location: ")[0]+"\n"
                    flag =1
                    after_patch_num =0
            else:
                if after_patch_num<=20:
                    if "------------------------------" in content:
                        break
                    else:
                        code_slice += (content.split("location: ")[0]+"\n")
                        after_patch_num += 1
        return code_slice, match_patch

    def get_stmttype(self, stmt):
        func_call_flag = 0
        var_ass_flag = 0
        var_def_flag = 0
        ctrl_stmt_flag = 0

        func_call_pattern = r'\b\w+\s*\([^)]*\)'
        var_ass_pattern = r'\b\w+\s*(?:->\s*\w+\s*)?=\s*.+;'

        if bool(re.match(func_call_pattern, stmt)):
            func_call_flag = 1
        if bool(re.match(var_ass_pattern, stmt)):
            var_ass_flag = 1
        type_list = []
        for type_set in common_types:
            type_list.extend(type_set[1])
        if any(stmt.startswith(dt) for dt in type_list):
            var_def_flag = 1
        if "if" in stmt or "while" in stmt or "for" in stmt or "do" in stmt or "switch" in stmt or "case" in stmt or "else" in stmt:
            ctrl_stmt_flag = 1

        # print(func_call_flag, var_ass_flag, var_def_flag, ctrl_stmt_flag)
        if func_call_flag == 0 and var_ass_flag == 0 and var_def_flag == 0 and ctrl_stmt_flag == 0:
            return 0
        elif func_call_flag == 1 and var_ass_flag == 0 and var_def_flag == 0 and ctrl_stmt_flag ==0:
            return 1
        elif func_call_flag == 0 and var_ass_flag == 1 and var_def_flag == 0 and ctrl_stmt_flag ==0:
            return 2
        elif func_call_flag == 0 and var_ass_flag == 0 and var_def_flag == 1 and ctrl_stmt_flag ==0:
            return 3
        elif func_call_flag == 0 and var_ass_flag == 0 and var_def_flag == 0 and ctrl_stmt_flag ==1:
            return 4
        else:
            return 5

    
    def get_cv(self, path):
        integer_flag = 0
        pointer_flag = 0
        type_path = path + "type.txt"
        map_path = path + "map.txt"
        slice_path = path + "slice.txt"
        with open(type_path, "r")as typefile:
            type_content = typefile.readlines()
        with open(map_path, "r")as mapfile:
            map_content = mapfile.readlines()
        with open(slice_path, "r")as slicefile:
            slice_content = slicefile.readlines()
        cv_list = ast.literal_eval(slice_content[0].split(" @@ ")[4])
        # print("cv list: ", cv_list)
        cv_dict = {}
        for cv in cv_list:
            if "*" in cv:
                if cv.split("*")[0] == "":
                    cv = cv.split("*")[-1].strip()
            if "&" in cv:
                cv = cv.split("&")[-1].strip()
            if "->" in cv:
                cv = cv.split("->")[-1].strip()
            if "." in cv:
                cv = cv.split(".")[-1].strip()
            if "[" in cv:
                cv = cv.split("[")[0].strip()
            
            for line in map_content:
                # print(line)
                var_name = line.split(": ")[1].split(", ")[0].strip()
                if cv == var_name:
                    id = line.split(": ")[0].strip()
                    for l in type_content:
                        if id in l:
                            if "*" in l:
                                pointer_flag = 1
                            else:
                                special_type = ["string", "void", "bool", "enum", "label", "struct"]
                                flag = 0
                                for t in special_type:
                                    if t in l:
                                        flag = 1
                                if "string" in l or "char" in l:
                                    flag = 4
                                    string_flag = 1
                                if "bool" in l:
                                    flag = 3
                                    bool_flag = 1
                                if flag == 0:
                                    integer_flag = 1
            if integer_flag:
                cv_dict[cv] = 1
            elif pointer_flag:
                cv_dict[cv] = 2
            elif bool_flag:
                cv_dict[cv] = 3
            elif string_flag:
                cv_dict[cv] = 4
            else:
                cv_dict[cv] = 0
        
        # print(cv_dict)
        return cv_dict