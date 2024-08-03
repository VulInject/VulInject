## -*- coding: utf-8 -*-
from tqdm import tqdm
import os
import shutil
import sys
import json
from joern.all import JoernSteps
from optparse import OptionParser

command_joern = './joern testCode'
command_cfg = 'python get_cfg_relation.py'
command_pdg = 'python complete_PDG.py'
command_call = 'python access_db_operate.py'
command_slice = 'python extract_df2.py'
neo4j_start = './neo4j start-no-wait'
neo4j_stop = './neo4j stop'

f = open('./config.json')
path_data = json.load(f)

joern_fold = path_data["graph_db"]["testCode"]
slice_testCode = path_data["joern"]["testCode"]
cv_out_filepath = path_data['cv_output']['cv_output_tmp_txt']

#delete files in this two folder
def delete_file():
    os.chdir(path_data["joern"]["joern_exe"])
    if(os.path.exists('.joernIndex')):
        os.system('chmod +777 .joernIndex')
        shutil.rmtree('.joernIndex')
    print('delete .joernIndex')
    if(os.path.exists('testCode')):
        shutil.rmtree('testCode')
    if not (os.path.exists('testCode')):
        os.mkdir('testCode')
    
    os.chdir(path_data["start_folder"])
    shutil.rmtree(path_data["start_folder"] + 'testCode')
    os.mkdir('testCode')
    
    #delete folders in cfg/pdg/dict
    cfg_path = path_data['graph_db']['cfg_db'] + '/testCode'
    pdg_path = path_data['graph_db']['pdg_db'] + '/testCode'
    dic_path = path_data['graph_db']['dict_call2cfgNodeId_funcID'] + '/testCode'
    if(os.path.exists(cfg_path)):
        shutil.rmtree(cfg_path)
    if(os.path.exists(pdg_path)):
        shutil.rmtree(pdg_path)
    if(os.path.exists(dic_path)):
        shutil.rmtree(dic_path)
        

def move_to(software, origin_c):
    os.chdir(path_data['start_folder'])
    target_program_path = path_data['all_test_code']['match_path'] + software + "/c_origin"
    ###only focus on added lines
    shutil.copy(target_program_path +  '/' + origin_c, slice_testCode)

    for j in os.listdir(slice_testCode):
        shutil.copy(slice_testCode + '/' + j, path_data["start_folder"] + 'testCode')
    

def execute_joern(software, c_origin):
    origin_c = c_origin + ".c"
    delete_file() #delete files in joern/.joernIndex、/source2slices/testCode
    move_to(software, origin_c) 

    #stop neo4j
    os.chdir(path_data["neo4j"])
    os.system(neo4j_stop)

    os.chdir(path_data["joern"]["joern_exe"])
    os.system(command_joern)
    print('joern is over')
    #restart neo4j
    os.chdir(path_data["neo4j"])
    os.system(neo4j_start)
    os.system('sleep 15s')
    os.chdir(path_data["exec_folder"])
    command_cfg = 'python get_cfg_relation.py'
    command_pdg = 'python complete_PDG.py'
    command_call = 'python access_db_operate.py'
    # command_slice = 'python extract_df2.py ' + software + " '" + file + "'"
    os.system(command_cfg)
    os.system(command_pdg)
    os.system(command_call)
    # os.system(command_slice)

def main(software):
    data_path = path_data['all_test_code']['match_path'] + software + "/c_origin"
    match_result_path = "/home/VulInject/result/generated_vulnerable_programs/" + software +"/match_result"
    for c_origin in sorted(os.listdir(match_result_path)):
        files = sorted(os.listdir(match_result_path + "/" + c_origin))
        execute_joern(software, c_origin)
        for file in files:
            command_slice = 'python extract_df2.py ' + software + " '" + file + "'"
            os.system(command_slice)
 
if __name__ == '__main__':
    for program in os.listdir("/home/VulInject/result/generated_vulnerable_programs/"):
        main(program)
            

