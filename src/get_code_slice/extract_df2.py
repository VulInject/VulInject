## coding:utf-8

from joern.all import JoernSteps
from igraph import *
from access_db_operate import *
from slice_op2 import *
from access_db_operate import *
from py2neo.packages.httpstream import http
import json
from optparse import OptionParser

http.socket_timeout = 9999

def read_file(file_name):
    fr = open(file_name, 'r')
    lines = fr.readlines()
    fr.close()
    return lines

def write_to_file(file_name, str_output):
    fw = open(file_name, 'a+')
    fw.write(str_output)
    fw.close()

def not_code_line(slice_line):
    slice_line = slice_line.strip()
    if(slice_line == '------------------------------'):
        return True
    if('@@' in slice_line and slice_line[-1] == '}'):
        return True
    if(slice_line[-1] == ','):
        return True
    if(slice_line[-1] == '+'):
        return True
    if(' cross_layer: ' not in slice_line):
        return True
    
    return False

def write_to_slices_file(slices_content, diff_message, f_add, diff_name):
    flag = False
    kvar = slices_content[0].split(' @@ ')[3]
    
    min_start = 99999999
    for start_line in diff_message.keys():
        min_start = min(int(start_line), min_start)

    for slice_line in slices_content:
        if(slice_line == slices_content[0]):
            slice_line = slice_line.replace('_NEW.c', '_OLD.c')
            
        if(not_code_line(slice_line)):
            f_add.write(slice_line)
            continue
        # print('yes')
        diff_tmp = diff_name.split('_')
        index = 3
        vuln_file = diff_tmp[3]
        while('.c' not in vuln_file):
            index += 1
            vuln_file  = vuln_file + '_' + diff_tmp[index]

        this_file = slice_line.split(' file: ')[-1].strip().split('/')[-1] #get filename
        this_code = slice_line.split(' location: ')[0] #get code content
        this_loc = slice_line.split(' location: ')[-1].split(' cross_layer: ')[0].strip() #get line number
        this_layer = slice_line.split(' cross_layer: ')[-1].split(' file: ')[0].strip() #get cross_layer
        is_add_line = False
        print(vuln_file, this_file.strip())
        print(kvar, this_loc, min_start)
                    
        if(vuln_file == this_file.strip()):#
            # print('yes')                    
            if(kvar == this_loc):
                flag = True
            if(flag == False and int(this_loc) < min_start):
                new_line = slice_line
                # f_add.writ(slice_line + '\n')
            else:
                num_fin = 0
                # print('ok')
                for start_line in diff_message.keys():
                    num_list = diff_message[start_line]
                    medium_tmp = num_list[0]
                    add_tmp = num_list[1]

                    if(int(this_loc) > (int(start_line) + medium_tmp + add_tmp)):
                        num_fin += add_tmp
                    elif(int(this_loc) >= (int(start_line) + medium_tmp)):
                        is_add_line = True
                        break
                            
                # print(num_fin)
                if(is_add_line):
                    continue
                new_loc = int(this_loc) - num_fin
                # print(flag)
                if(flag):
                    # print(slice_line) 
                    new_line = this_code + ' location: ' + str(new_loc) + ' cross_layer: ' + this_layer + ' file: ' + this_file.strip() + '    (key_var lines)\n'
                    flag = False
                else:
                    new_line = this_code + ' location: ' + str(new_loc) + ' cross_layer: ' + this_layer + ' file: ' + this_file + '\n'
        else:
            if(flag == True):
                new_line = this_code + ' location: ' + str(this_loc) + ' cross_layer: ' + this_layer + ' file: ' + this_file.strip() + '    (key_var lines)\n'
                flag = False
            else:
                new_line = slice_line
        f_add.write(new_line)

def ext_diff_funcname2dic(diff_name):
    new_dict = {}
    old_dict = {}

    lines = read_file(diff_name)
    for line in lines:
        if line.startswith("@@"):
            if "(" in line:
                func_name_raw = line.split("(")[0].strip().split(" ")[-1]
            else:
                if '{' in line:
                    func_name_raw = 'struct'
                else:
                    func_name_raw = 'none'

            if func_name_raw.startswith("*") or func_name_raw.startswith("&"):
                func_name= func_name_raw[1:]
            func_name = func_name_raw
            
            # print(line)
            str_new_line = line.split("+")[-1].split(',')[0].strip()
            str_old_line = line[4:].split(" ")[0].strip()
            
            # print(str_new_line)
            # print(str_old_line)
            new_line = int(str_new_line)
            old_line = int(str_old_line)

            new_dict[new_line] = func_name
            old_dict[old_line] = func_name
    
    return old_dict, new_dict

def funcname_for_changeline(line_num, dict):
    line_list = []
    for line_in_dict in dict.keys():
        line_list.append(line_in_dict)
    
    line_list.sort()

    line_res = line_list[0]
    for line in line_list:
        if line_num < line:
            break
        line_res = line
    
    func_name = dict[line_res]

    return func_name

def var_preprocess(variable_name):
    query_var = ''
    count = 0
    index = variable_name.find("->")

    for ch in variable_name:
        query_var += ch
        if ch == "&" or ch == ".":
            query_var = query_var[:-1]
            query_var += ' '
            query_var += ch
            query_var += ' '
        if ch == '*':
            query_var = query_var[:-1]
            query_var.strip()
        if index != -1:
            if count == index:
                query_var = query_var[:-1]
                query_var += ' '
                query_var += ch
            elif count == index + 1:
                query_var += ' '
        count += 1
    if "[" in query_var:
        query_var = query_var.split('[')[0] 
    return query_var
    
def query_funcnode_of_file(db, file_name):
    query = 'queryNodeIndex("type:File AND filepath:*%s*").out()' % file_name
    func_nodes = db.runGremlinQuery(query)
    
    if func_nodes == []:
        return []
    return func_nodes

def query_funcnode_fileinfo_by_name(db, func_name):
    query_with_var = 'getFunctionsByName("*%s*").in' % func_name
    try:
        file_info_list = db.runGremlinQuery(query_with_var)
    except:
        return []
    if file_info_list == []:
        print("file_info_list is empty")
        return []
    return file_info_list

def query_funcnode_by_name(db, func_name):
    query_with_var = 'getFunctionsByName("*%s*")' % func_name
    func_node = db.runGremlinQuery(query_with_var)
    if func_node == []:
        return []
    return func_node

def query_node_by_funcid_loc(db, funcid, loc):
    query_with_var = 'queryNodeIndex("functionId:%d AND location:*%s*")' % (funcid, loc)
    node_list = db.runGremlinQuery(query_with_var)
    if node_list == []:
        print("node_list is empty")
        return []
    for node in node_list[:]:
        node_loc = node['location']
        loc_str = node_loc.encode('unicode-escape').decode('string_escape')
        if node['code'] == '':
            node_list.remove(node)
            continue
        if not loc_str.startswith(str(loc)):
            node_list.remove(node)
    return node_list

def query_node_by_var_loc(db, query_var, location):
    query_with_var = 'queryNodeIndex("code:*%s* AND location:*%s*")' % (query_var, location)
    can_nodes = db.runGremlinQuery(query_with_var)
    if can_nodes == []:
        return []
    for node in can_nodes[:]:
        node_loc = node['location']
        loc_str = node_loc.encode('unicode-escape').decode('string_escape')
        if not loc_str.startswith(str(location)):
            can_nodes.remove(node)
    return can_nodes

def query_filename_of_funcid(db, funcid):
    query_with_var = 'g.v(%d).in()' % funcid
    can_nodes = db.runGremlinQuery(query_with_var)
    if can_nodes == []:
        return []
    return can_nodes


'''
Query scheme:
1. Run the func_name command to check whether a function node with the same name exists and output information about the parent node file
2. Check whether the file node exists
3. Then query through funcid and loc of the function node
There are problems:
1. func_name may be inaccurate
'''
def get_startnode_p1(db, func_name, file_name, loc):
    file_info_list = query_funcnode_fileinfo_by_name(db ,func_name)
    print(file_info_list)
    if file_info_list == []:
        return ['2'] #func does not exists

    count = -1
    flag = 0
    for file_info in file_info_list:
        count += 1
        file_path = file_info['filepath']
        #print(file_path)
        if file_name in file_path:
            flag = 1
            break
    
    if flag == 0:
        return ['2'] #func does not exists
    
    node_list = query_funcnode_by_name(db, func_name)
    # print("node_list: ", node_list)
    if node_list == []:
        return ['2'] #func does not exists

    func_node = node_list[count]
    funcid = func_node._id
    
    node_list = query_node_by_funcid_loc(db, funcid, loc)
    
    if node_list == []:
        return ['3'] #no suitable nodes
    
    return node_list[0]


'''
Query scheme:
1. Run the file_name command to check all function nodes in the file
2. Match the funcid and known loc of the preceding node
3. Since the number of lines of code in a file is a unique identifier, startnode can be selected
Problems:
1. The speed is slow
'''
def get_startnode_p2(db, file_name, loc):
    #file_name = "testCode/" + file_name
    func_nodes = query_funcnode_of_file(db, file_name)
    if func_nodes == []:
        return ['1'] #no such file

    funcid = 0
    for node in func_nodes:
        funcid = node._id
        node_list = query_node_by_funcid_loc(db, funcid, loc)
        if node_list != []:
            return node_list[0]

    return ['2'] #no such node


'''
Query scheme:
1. Search through var and loc first
2. Match the file_name of funcid of the preceding node
Problems:
1. var is not always accurate
'''
def get_startnode_p3(db, var, loc, file_name):
    query_var = var_preprocess(var)
    node_list = query_node_by_var_loc(db, query_var, loc)
    if node_list == []:
        return ['2'] 
    for node in node_list:
        funcid = node['functionId']
        file_info_list = query_filename_of_funcid(db, funcid)
        for file_info in file_info_list:
            file_path = file_info['filepath']
            if file_name in file_path:
                return node
    return ['2'] 

def get_startnode_sche(db, func_name, file_name, loc, var):
    
    print(func_name, file_name, loc, var)

    startnode_1 = get_startnode_p1(db, func_name, file_name, loc)
    print("startnode_1:")
    print(startnode_1)
    if startnode_1 != ['2'] and startnode_1 != ['3']:
        return startnode_1

    startnode_2 = get_startnode_p2(db, file_name, loc)
    print("startnode_2:")
    print(startnode_2)
    if startnode_2 != ['1'] and startnode_2 != ['2']:
        return startnode_2

    startnode_3 = get_startnode_p3(db, var, loc, file_name)
    print("startnode_3:")
    print(startnode_3)
    if startnode_3 != ['2']:
        return startnode_3

    if startnode_2 == ['1']:
        return ['3'] #no such file
    
    if startnode_1 == ['2']:
        return ['1'] #no such func
    elif startnode_1 == ['3']:
        return ['2'] #no such node 

def err_log(err_filepath,output_str):
    fout = open(err_filepath,'a')
    fout.write(output_str)
    fout.close()        

def get_slice_file_sequence(store_filepath, list_result, count, func_name, startline, filepath_all, var_list):
    list_for_line = []
    statement_line = 0
    vulnline_row = 0
    list_write2file = []
    point_var_list = []
    vulfunc_id = list_result[0] #
    vulfunc_id = vulfunc_id[0]['functionId']
    os.chdir(path_data['start_folder'])
    for node_all in list_result:
        node = node_all[0] #node info
        node_layer = str(node_all[1])
        if((node['filepath'][-5:] == 'OLD.c') or (node['filepath'][-5:] == 'NEW.c')):
            s_tmp = node['filepath'].split('_')
            index = 3
            file_name = s_tmp[3]
            while('.c' not in s_tmp[index]):
                index +=1
            for i in range(4, index + 1):
                file_name += ('_' + s_tmp[i])
        else:
            file_name = node['filepath']

        if node['type'] == 'Function':
            f2 = open(node['filepath'], 'r')
            content = f2.readlines()
            f2.close()
            raw = int(node['location'].split(':')[0])-1
            code = content[raw].strip()

            new_code = ""
            if code.find("#define") != -1:
                list_write2file.append(code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                continue

            while (len(code) >= 1 and code[-1] != ')' and code[-1] != '{'):
                if code.find('{') != -1:
                    index = code.index('{')
                    new_code += code[:index].strip()
                    list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                    break

                else:
                    new_code += code + '\n'
                    raw += 1
                    code = content[raw].strip()
                    #print "raw", raw, code

            else:
                new_code += code
                new_code = new_code.strip()
                if new_code[-1] == '{':
                    new_code = new_code[:-1].strip()
                    list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                    #list_line.append(str(raw+1))
                else:
                    list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                    #list_line.append(str(raw+1))

        elif node['type'] == 'Condition':
            raw = int(node['location'].split(':')[0])-1
            if raw in list_for_line:
                continue
            else:
                #print node['type'], node['code'], node['name']
                f2 = open(node['filepath'], 'r')
                content = f2.readlines()
                f2.close()
                code = content[raw].strip()
                pattern = re.compile("(?:if|while|for|switch)")
                #print code
                res = re.search(pattern, code)
                if res == None:
                    raw = raw - 1
                    code = content[raw].strip()
                    new_code = ""

                    while (code[-1] != ')' and code[-1] != '{'):
                        if code.find('{') != -1:
                            index = code.index('{')
                            new_code += code[:index].strip()
                            list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                            #list_line.append(str(raw+1))
                            list_for_line.append(raw)
                            break

                        else:
                            new_code += code + '\n'
                            list_for_line.append(raw)
                            raw += 1
                            code = content[raw].strip()

                    else:
                        new_code += code
                        new_code = new_code.strip()
                        if new_code[-1] == '{':
                            new_code = new_code[:-1].strip()
                            list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                            #list_line.append(str(raw+1))
                            list_for_line.append(raw)

                        else:
                            list_for_line.append(raw)
                            list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                            #list_line.append(str(raw+1))

                else:
                    res = res.group()
                    if res == '':
                        print filepath_all + ' ' + func_name + " error!"
                        exit()

                    elif res != 'for':
                        new_code = res + ' ( ' + node['code'] + ' ) '
                        list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                        #list_line.append(str(raw+1))

                    else:
                        new_code = ""
                        if code.find(' for ') != -1:
                            code = 'for ' + code.split(' for ')[1]

                        while code != '' and code[-1] != ')' and code[-1] != '{':
                            if code.find('{') != -1:
                                index = code.index('{')
                                new_code += code[:index].strip()
                                list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                                #list_line.append(str(raw+1))
                                list_for_line.append(raw)
                                break

                            elif code[-1] == ';' and code[:-1].count(';') >= 2:
                                new_code += code
                                list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                                #list_line.append(str(raw+1))
                                list_for_line.append(raw)
                                break

                            else:
                                new_code += code + '\n'
                                list_for_line.append(raw)
                                raw += 1
                                code = content[raw].strip()

                        else:
                            new_code += code
                            new_code = new_code.strip()
                            if new_code[-1] == '{':
                                new_code = new_code[:-1].strip()
                                list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                                #list_line.append(str(raw+1))
                                list_for_line.append(raw)

                            else:
                                list_for_line.append(raw)
                                list_write2file.append(new_code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                                #list_line.append(str(raw+1))
        
        elif node['type'] == 'Label':
            f2 = open(node['filepath'], 'r')
            content = f2.readlines()
            f2.close()
            raw = int(node['location'].split(':')[0])-1
            code = content[raw].strip()
            list_write2file.append(code + ' location: ' + str(raw+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
            #list_line.append(str(raw+1))

        elif node['type'] == 'ForInit':
            continue

        elif node['type'] == 'Parameter':
            if((node['functionId'] == vulfunc_id) and ('* ' in node['code'])):#store pointers
                pit_var = node['code'].split('* ')[-1] # int ff_hevc_decode_nal_sps(HEVCContext *s)
                if(pit_var[-1] == ','):
                    pit_var = pit_var[:-1]
                elif(pit_var[-1] == ')'):
                    pit_var = pit_var[:-1]
                point_var_list.append(pit_var)

            if list_result[0][0]['type'] != 'Function':
                row = node['location'].split(':')[0]
                list_write2file.append(node['code'] + ' location: ' + str(row) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                #list_line.append(row)
            else:
                continue

        elif node['type'] == 'IdentifierDeclStatement':
            if((node['functionId'] == vulfunc_id) and ('* ' in node['code'])):#store pointers
                ass_var = node['code'].split(' = ') # BoxBlurContext * s = ctx->priv;    BoxBlurContext * s, linesize    BoxBlurContext * s, * linesize
                if(len(ass_var) > 1):
                    end = len(ass_var) - 1
                else:
                    end = len(ass_var)
                for i in range(end):#a=b=c
                    pit_var = ass_var[i].split('* ')
                    pit_var = [kk for kk in pit_var if kk != '']
                    for j in range(1, len(pit_var)):
                        tmp_var = pit_var[j]
                        if((tmp_var[-1] == ',') or (tmp_var[-1] == ';')):
                            point_var_list.append(tmp_var[:-1].strip())
                        else:
                            point_var_list.append(tmp_var.strip())
                        
            if node['code'].strip().split(' ')[0] == "undef":
                f2 = open(node['filepath'], 'r')
                content = f2.readlines()
                f2.close()
                raw = int(node['location'].split(':')[0])-1
                code1 = content[raw].strip()
                list_code2 = node['code'].strip().split(' ')
                i = 0
                while i < len(list_code2):
                    if code1.find(list_code2[i]) != -1:
                        del list_code2[i]
                    else:
                        break
                code2 = ' '.join(list_code2)

                list_write2file.append(code1 + ' location: ' + str(raw+1) + '\n' + code2 + ' location: ' + str(raw+2) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')

            else:
                list_write2file.append(node['code'] + ' location: ' + node['location'].split(':')[0] + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')

        elif node['type'] == 'ExpressionStatement':
            row = int(node['location'].split(':')[0])-1
            if row in list_for_line:
                continue

            if node['code'] in ['\n', '\t', ' ', '']:
                list_write2file.append(node['code'] + ' location: ' + str(row+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                #list_line.append(row+1)
            elif node['code'].strip()[-1] != ';':
                list_write2file.append(node['code'] + '; location: ' + str(row+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                #list_line.append(row+1)
            else:
                list_write2file.append(node['code'] + ' location: ' + str(row+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                #list_line.append(row+1)

        elif node['type'] == "Statement":
            row = node['location'].split(':')[0]
            list_write2file.append(node['code'] + ' location: ' + str(row) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
            #list_line.append(row+1)

        else:         
            #print node['name'], node['code'], node['type'], node['filepath']
            if node['location'] == None:
                continue
            f2 = open(node['filepath'], 'r')
            content = f2.readlines()
            f2.close()
            row = int(node['location'].split(':')[0])-1
            code = content[row].strip()
            if row in list_for_line:
                continue

            else:
                list_write2file.append(node['code'] + ' location: ' + str(row+1) + ' cross_layer: ' + node_layer + ' file: ' + file_name + '\n')
                #list_line.append(str(row+1))

    f = open(store_filepath, 'a')
    # f.write(str(count) + ' ' + filepath_all + ' ' + func_name + ' ' + startline + ' ' + str(var_list) + ' ' + '{')
    f.write(str(count) + ' @@ ' + filepath_all + ' @@ ' + func_name + ' @@ ' + startline + ' @@ ' + str(var_list) + ' @@ ' + '{')
    for i in point_var_list:
        if(i == point_var_list[-1]): # 
            f.write(str(i))
        else:
            f.write(str(i) + ', ')
    f.write('}' + '\n')

    for wb in list_write2file:
        f.write(wb)
    f.write('------------------------------' + '\n')     
    f.close()

def read_cv_output(cv_out_filepath, old_fix):
    startnode_info_all = {}
    f = open(cv_out_filepath ,'r')
    text_lines = f.readlines()
    # print(text_lines)
    file_list = []
    this_file = []
    res_filname = []
    line_flag = 0
    
    if text_lines == '':
        return
    if text_lines[0] == '\n':
        test_lines = text_lines[1:]
    for line in text_lines:
        if line == '==============================================================\n': #a diff end
            line_flag = 1
            file_list.append(this_file) #this_file contains the content of one diff
            this_file = []
        else:
            if line_flag == 1 and line == '\n':
                line_flag = 0
            else:
                this_file.append(line)

    for _file in file_list:
        flag = 0
        startnode_info_diff = {}
        if len(_file) < 3: #no content
            # file_name_tmp = _file[0].split("/")[-1].split('.diff')[0]
            # res_filname.append(file_name_tmp.split('_')[-2])
            file_name_tmp = _file[0].rstrip("\n")    ###store match file name（pattern|program
            res_filname.append(file_name_tmp + old_fix)
            
            
            startnode_info_diff.setdefault(file_name_tmp,[]).append('')
        else:
            # file_name_tmp = _file[0].split("/")[-1].split('.diff')[0]
            # res_filname.append(file_name_tmp.split('_')[-2]) 
            file_name_tmp = _file[0].rstrip("\n")  ###store match file name（pattern|program
            res_filname.append(file_name_tmp + old_fix)
            
            hunk_list = []
            this_hunk = []
            for conseq in _file[2:]: 
                if conseq == '\n': 
                    hunk_list.append(this_hunk)
                    this_hunk = []
                else:
                    if(conseq.strip()[-6:] == 'Delete'):
                        flag = 1 #If the Delete statement is found during the traversal, the file before the patch is parsed and the flag is set to 1 accordingly
                    if(conseq.strip()[-7:] == 'Replace'):
                        flag = 1
                    this_hunk.append(conseq)
            flag = 0 #######just parse patched file
            # print(hunk_list)
            for hunk in hunk_list: #
                if(len(hunk) == 4):
                    line_cv_dict = {}
                    if hunk[2].split(' file')[0].split(" ")[-1] == 'old':
                        if(flag == 1):#have deleted lines
                            file_name = file_name_tmp.split("|")[1].rstrip("\n")  + old_fix
                            start_line = hunk[2].split("#")[-1].split('\n')[0]
                            print(file_name, start_line)
                            cv_result = re.findall(r"\'([^\']*)\'",hunk[3])
                        else:
                            cv_result = []
                    else:
                        if(flag == 0):
                            file_name = file_name_tmp.split("|")[1].rstrip("\n")  + old_fix
                            #tf = open('./no_delete.txt', 'w+')
                            #print >> tf, file_name
                            start_line = hunk[2].split("#")[-1].split('\n')[0]
                            # print(file_name, start_line)
                            cv_result = re.findall(r"\'([^\']*)\'", hunk[3])
                        else:
                            cv_result = []
                    if(cv_result != []):
                        for var in cv_result:
                            variable_name = var
                            line_cv_dict.setdefault(start_line,[]).append(variable_name)

                        startnode_info_diff.setdefault(file_name,[]).append(line_cv_dict)

                elif(len(hunk) == 5):#Replace type
                    line_cv_dict = {}
                    if(flag == 1):
                        file_name = file_name_tmp.split("|")[1].rstrip("\n")  + old_fix
                        start_line = hunk[2].split("#")[-1].split('\n')[0]
                    elif(flag == 0):
                        file_name = file_name_tmp.split("|")[1].rstrip("\n")  + old_fix
                        start_line = hunk[3].split("#")[-1].split('\n')[0]

                    cv_result = re.findall(r"\'([^\']*)\'",hunk[4])
                    if(cv_result != []):
                        for var in cv_result:
                            variable_name = var
                            line_cv_dict.setdefault(start_line,[]).append(variable_name)

                        startnode_info_diff.setdefault(file_name,[]).append(line_cv_dict)
                else:
                    line_cv_dict_old = {}
                    file_name_old = file_name_tmp + "_OLD" + old_fix

                    start_line_old = hunk[2].split("#")[-1].split('\n')[0]
                    # print(file_name_old, start_line_old)
                    
                    cv_result = re.findall(r"\'([^\']*)\'",hunk[4])
                    if(cv_result != []):
                        for var in cv_result:
                            variable_name = var
                            line_cv_dict_old.setdefault(start_line_old,[]).append(variable_name)

                        startnode_info_diff.setdefault(file_name_old,[]).append(line_cv_dict_old)

        startnode_info_all.setdefault(file_name_tmp,[]).append(startnode_info_diff)

    f.close()
    # print(res_filname)
    return startnode_info_all, res_filname

def record_out_file(path_info, to_query):
    with open(path_info, 'r') as r:
        lines = r.readlines()
        for line in lines:
            if to_query in line:
                path = line.split(to_query)[-1].strip()
                return path

def check_step1_output(diff_count, startnode_info_step1, diff_name, slice_store_filepath, startnode_debug_path, sliceres_anatmp):
    str_out = ''
    flag = 0
    print(startnode_info_step1)

    diff_count = str(diff_count)
    write_to_file(slice_store_filepath, diff_name+':\n')
    write_to_file(startnode_debug_path, diff_name+':\n')
    write_to_file(sliceres_anatmp, diff_name+':\n')

    for op in startnode_info_step1[diff_name]:
        for k in op.keys():
            if op[k] == '' or op[k] == ['']:
                str_out = '\tErr_step1 : NO CV Got from Step1\n'
                flag  = 1
            else:
                str_out = str_out + '\t' + k + ' ' + str(op[k]) + '\n'
    write_to_file(slice_store_filepath, str_out)
    write_to_file(startnode_debug_path, str_out)
    write_to_file(sliceres_anatmp, str_out)
    
    if flag == 1:
        write_to_file(slice_store_filepath, '====================================================\n\n')
        write_to_file(startnode_debug_path, '====================================================\n\n')
        write_to_file(sliceres_anatmp, '====================================================\n\n')
        return -1
    else:
        return 0
        
def check_startnode(startnode, file_name, func_name, cv, startnode_res_path):
    output_str = ''
    if startnode == ['1']: #no func
        if func_name == 'none':
            output_str = '\t\tERR_4:\t' + file_name + '   diff function name is error: ' + func_name + '  ( ' + cv + ' )\n'
        elif func_name == 'struct':
            output_str = '\t\tERR_4:\t' + file_name + '   diff function name is STRUCT: ' + func_name + '  ( ' + cv + ' )\n'
        else:
            output_str = '\t\tERR_2:\t' + file_name + '  Joern has not parsed this FuncNode: ' + func_name + '  ( ' + cv + ' )\n'
    elif startnode == ['2']: #no node
        output_str = '\t\tERR_3:\t' + file_name + '  Joern has not parsed this StatementNode: ' + cv  + '  ( ' + func_name + ' )\n'
    else: #no file
        output_str = '\t\tERR_1.1:\t' + file_name + ' Joern has not parsed this file.\n'
    write_to_file(startnode_res_path, output_str)

def check_startnode_debug_file(startnode_debug_path):
    if not os.path.exists(startnode_debug_path):
        return 0
    lines = read_file(startnode_debug_path)
    if lines == []:
        return 0
    else:
        return int(lines[-1])

def find_code_in_vuln(code, vuln_content, vul_func):
    print('code:')
    print(code)
    code = code.strip()
    location = 0
    flag = 0
    for vul_line in vuln_content:
        location += 1
        vul_line = vul_line.strip().replace(' ', '')
        vul_func = vul_func.strip().replace(' ', '')
        if(vul_line.find(vul_func) > -1):#match func definition
            flag = 1
        
        if(flag == 0):
            continue
        if(vul_line[-1] == '{'):
            vul_line = vul_line[:-1]
            
        if(code == vul_line):
            return location
        elif((code.find(vul_line) > -1) and (vul_line[-1] == ',')):#
            return location
        #code = code.strip().replace(' ', '')
    return 0

def create_result_folder(cve, software):
    init_path = path_data['all_test_code']['all_slice_path'] + software + '/' + cve
    if(not os.path.exists(init_path)):
        os.makedirs(init_path)
    return init_path + '/' + 'slices.txt'


def main(software, file):
    j = JoernSteps()
    j.connectToDatabase()
    
    f = open('./config.json')   
    path_data = json.load(f)
    #os.chdir(path_data["work_dir"])

    line_cv_dict = {}
    file_dict = {}

    # step1_out_filepath = path_data['step1_output']['step1_output_tmp_txt']
    match_path = path_data['all_test_code']['match_path']
    ####该路径之后需要换成相对路径 
    # cv_out_filepath = match_path + "ffmpeg/match_result/CVE-2015-8662_CWE-119_75422280fbcdfbe9dc56bde5525b4d8b280f1bc5_jpeg2000dwt.c_1.2.c|id3v2enc/cv.txt"
    cv_out_filepath = match_path + software + '/match_result/' + file.split("|")[1] + "/" + file + '/cv.txt'

    err_filepath = path_data['error_rec']['step2_err_filepath']
    slice_store_filepath = path_data['step2_output']['record_tmp_slice'] #
    startnode_debug_path = path_data['step2_output']['startnode_debug_path'] #

    sliceres_anatmp = path_data['step2_output']['sliceres_anatmp']
    sliceres_anall = path_data['step2_output']['sliceres_anall']
    old_fix = '.c'  ####

    
    startnode_info_cv, res_filname= read_cv_output(cv_out_filepath, old_fix)
    cnt = check_startnode_debug_file(sliceres_anall)

    diff_count = 0

    program_c_path = match_path + software + "/c_origin"

    for match_name in startnode_info_cv.keys(): #for each diff file
        count = 1
        diff_cv_flag = 0
        cve_num = match_name.split('_CWE')[0].split('_NVD')[0]
        
        c_path = program_c_path + "/" + match_name.split("|")[1]+".c"
        store_filepath = match_path + software + "/match_result/" + match_name.split("|")[1] +"/"+ match_name + "/slice.txt"
        if os.path.exists(store_filepath):
            try:
                os.remove(store_filepath)
                print("slice.txt has been deleted ")
            except OSError as e:
                print("somthing error")


        diff_count += 1

        step1_checkres = check_step1_output(diff_count, startnode_info_cv, match_name, slice_store_filepath, startnode_debug_path, sliceres_anatmp)#记录step1没有提取出变量的情况, 并写入文件头
        if step1_checkres == -1:
            continue

        file_line_cv_list = startnode_info_cv[match_name]
        print("file_line_cv_list: ")
        print(file_line_cv_list)
        
        for file_cv_dic in file_line_cv_list:
            
            for file_name in file_cv_dic.keys():
                cnt += 1
                line_list = []
                code_store_file = file_name.split('_CWE')[0].split("_NVD")[0]
                line_cv_list = file_cv_dic[file_name]
                node_critical_variable = {}
                node_variable_pairs_all = []
                start_node_info = {} 
                starnode_checkres_list = []
                func_name_list = []

                src_path = c_path
            
                if not os.path.exists(src_path):
                    output_str = '\t\t[!ERR_0:\t No such File:  ' + file_name + ']\n----------------------------------------\n'
                    write_to_file(sliceres_anatmp, output_str)
                    continue
                funcname_id = {}
                for line_cv in line_cv_list[:]: 
                    if line_cv == '' or line_cv == {}:
                        line_cv_list.remove(line_cv)
                print('line_cv_list: ')
                print(line_cv_list)
                for line_cv in line_cv_list:
                    
                    line = int(line_cv.keys()[0])
                    # print(line)
                    line_list.append(line)
                    cvlist_for_this_line = line_cv.values()[0]
                    print(cvlist_for_this_line)

                    #####need to know function name
                    lineinfo_path = match_path + software +"/match_result/" + match_name.split("|")[1] +"/"+match_name +"/line_information.txt"
                    
                    func_name = match_name.split("|")[2]
                    if func_name not in func_name_list:
                        func_name_list.append(func_name)
                    
                    print(func_name_list, func_name)

                    for cv in cvlist_for_this_line: #
                        startnode = get_startnode_sche(j, func_name, file_name, line, cv)
                        print("startnode: ")
                        print(startnode)
                        if startnode == ['1'] or startnode == ['2'] or startnode == ['3']:
                            print(startnode)
                            print("continue")
                            check_startnode(startnode, file_name, func_name, cv, startnode_debug_path) #
                            starnode_checkres_list.append(startnode)
                            continue

                        node_id = startnode._id
                        node_type = startnode['type']
                        funcid = startnode['functionId']

                        funcname_id[funcid] = func_name
                        if node_type != [] and node_id != [] and funcid != []:
                            if node_id not in list(start_node_info.keys()):   
                                start_node_info.setdefault(node_id,[]).append(node_type)
                                start_node_info.setdefault(node_id,[]).append(funcid)
                            start_node_info.setdefault(node_id,[]).append(cv)
                print("start_node_info: ")
                print(start_node_info)
                
                if start_node_info == {}: 
                    output_str = ''
                    func_str = ''
                    for func in func_name_list:
                        func_str += func
                        func_str += ' '
                    if ['3'] in starnode_checkres_list: 
                        output_str = '\t[ !ERR_step2.1:\t Joern has not parse this File ]\t' + file_name + '\n'
                    elif ['1'] in starnode_checkres_list:
                        output_str = '\t[ !ERR_step2.2:\t Joern has not parse this Function Node ]\t' + file_name + '\t' + func_str + '\n'
                    elif ['2'] in starnode_checkres_list:
                        output_str = '\t[ !ERR_step2.3:\t Joern has not parse the Statament Node ]\t' + file_name + '\n'
                    write_to_file(sliceres_anatmp, output_str)
                    continue
                diff_cv_flag = 1
                
                 
                for node_id in start_node_info.keys():
                    var_list = []
                    node_type = start_node_info[node_id][0]
                    func_id = start_node_info[node_id][1]
                    varlist_for_node = start_node_info[node_id][2:]
                    print '=============== Start to Extract DataFlow ==============='
                    for var in varlist_for_node:
                        var_list.append(var)

                    #try to cross function
                    pdg = getFuncPDGById('testCode', func_id)
                    if(pdg == False):
                        print("Can't find vulnerable function's PDG!")
                        continue
                                        
                    list_startnode = []
                    startline = ''
                    startline_path = ''

                    for node in pdg.vs:
                        if(node['name'] ==  str(node_id)): 
                            list_startnode.append(node)
                    if(list_startnode == []):
                        print("Can't find startnode in PDG!")
                        continue

                    print("list_startnode: ", list_startnode)


                    startline = list_startnode[0]['location'].split(':')[0]
                    startline_path = list_startnode[0]['filepath']

                    list_startnode_tmp = []
                    if((node_type == 'Condition') or (node_type == 'ForStatement') or (node_type == 'ForInit')):
                        
                        for var in var_list: 
                            print('CV: ', var)
                            idenfitierDecl = backward_to_decl(j, list_startnode[0], var)
                            if(idenfitierDecl != []):
                                print("This cv's declaration line:   " + idenfitierDecl[0]['location'])
                                print("This cv's declaration code:   " + idenfitierDecl[0]['code'])
                                
                            for idc in idenfitierDecl:
                                list_startnode_tmp.append(idc)
                    
                    if(is_just_function_call(list_startnode[0])):
                        # TODO
                        para_node = []
                        cvs = []
                        current_funcname = isFuncCall(list_startnode[0])[0]
                        
                        current_pdg = getFuncPDGByNameAndtestID(current_funcname, 'testCode')
                        if(current_pdg == False):
                            print("Can't find called function's PDG!")
                            cvs_tmp = get_call_var(list_startnode[0]['code'].strip(), 1) 
                            for cc in cvs_tmp:
                                cvs.append(cc[0])
                        else:
                            for current_node in current_pdg.vs:
                                if(current_node['type'] == 'Parameter'):
                                    para_node.append(current_node)
                            cvs = get_cv(para_node, list_startnode[0])
                        for cvvvv in cvs:
                            idenDecl = backward_to_decl(j, list_startnode[0], cvvvv)

                            for ide in idenDecl:
                                if(ide not in list_startnode_tmp):
                                    list_startnode_tmp.append(ide)

                    
                  
                    results_back = program_slice_backwards(pdg, list_startnode, 1) #backward slice
                    vul_start = []
                    for node_back in results_back:
                        if(node_back[0]['type'] == 'Parameter'):
                            vul_start.append(node_back[0])
                        if(node_back[0]['name'] == str(node_id)):
                            results_back.remove(node_back)
                    
                    # if list_startnode_tmp is not empty, forward slice
                    results_for = []
                    print("list_startnode_tmp",list_startnode_tmp)
                    if(list_startnode_tmp != []):
                        can_append = False
                        results_for_tmp = program_slice_forward(pdg, list_startnode_tmp, 1)
                        # print('results_for_tmp:')
                        # print(results_for_tmp)
                        for node_tmp in results_for_tmp:
                            if(node_tmp[0]['name'] == list_startnode[0]['name']):
                                can_append = True
                            if(can_append):
                                results_for.append(node_tmp)
                        
                    else:
                        results_for = program_slice_forward(pdg, list_startnode, 1) #

        #             #decuplicate
                    for node_back in results_back:
                        for node_for in results_for:
                            if(node_back[0]['name'] == node_for[0]['name']):
                                results_back.remove(node_back)
                    
                    layer = 3
                    cnt = 1
                    testID = 'testCode'
                    not_scan_func_list = []
                    function_name = funcname_id[func_id]
                    all_result = []
                    
                    
                    list_to_crossfunc_for, not_scan_func_list = return_cross_func(results_for, testID, 1, results_for, not_scan_func_list, function_name, layer, 1)

                    
                    #If the sink point is not found, it is returned to the line that called the function and sliced down again
                    list_return_for = process_return_func(j, vul_start, list_startnode[0], testID, layer, function_name, cnt, 1)
                    if(list_return_for != []):
                        for func_slice in list_return_for:
                            if((results_back + list_to_crossfunc_for + func_slice) in all_result):
                                continue
                            all_result.append(results_back + list_to_crossfunc_for + func_slice)
                    else:
                        all_result.append(results_back + list_to_crossfunc_for)

                    
                    if(all_result == []):
                        fout = open('error.txt', 'a')
                        fout.write(function_name + ' ' + str(func_id) + ' found nothing!\n')
                        fout.close()
                    else:
                        for _list in all_result:
                            get_slice_file_sequence(store_filepath, _list, count,function_name, startline, startline_path, var_list)
                            count +=1


parser = OptionParser()
(options, args) = parser.parse_args()
if(len(args) != 2):
    print('Missing parameters! Please add software name and file name.')
main(args[0], args[1])