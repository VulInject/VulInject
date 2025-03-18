import os
import json
import time
from openai import AzureOpenAI
from vulsample import Vulnerability
import requests
import re
import csv
import pandas as pd
# from compute_token import count_tokens

AZURE_OPENAI_KEY = "<Your OPENAI Key>"

class LLMAdapter:
    def __init__(self):
        # CWEs IDs and names
        self.cwes = {
            "CWE-119": "Improper Restriction of Operations within the Bounds of a Memory Buffer",
            "CWE-189": "Integer overflow or underflow",
            "CWE-476": "NULL Pointer Dereference",
            "CWE-416": "Use After Free",
            "CWE-399": "Resource Management Errors",
            "CWE-415": "Double Free",
            "CWE-22" : "Improper Limitation of a Pathname to a Restricted Directory ('Path Traversal')",
            "CWE-362": "Race Condition"
        }
        # CWEs definitions from MITRE website
        self.defs = json.loads(open("mitre-cwe-definitions.json", "r", encoding="utf-8").read())

    ############################
    # Step-by-Step Prompts
    ############################

    def run(self, **kwargs):
        stmt_type = kwargs['stmt_type']
        handlers = {
                1: self.handle_funccall,
                2: self.handle_varass,
                3: self.handle_vardef,
                4: self.handle_ctrlstmt
            }
        result = None
        # print(stmt_type)
        if stmt_type == 0 or stmt_type == 5:
            return result
        else:
            handler = handlers.get(stmt_type)
            result = handler(patch_stmt = kwargs["patch_stmt"], cv_dict = kwargs["cv_dict"], slice = kwargs["slice"])

            # print(result)
            if result:
                result = list(set(result))
                return result
            else:
                return result
    
    def chat_4o(self, **kwargs):
        url = "<Your model's URL>"
        headers = {
            "Content-Type": "application/json",
            "api-key": "Your API-KEY"
            } 
        response = requests.post(url, headers=headers, json=kwargs["data"])
        return response.json()["choices"][0]["message"]["content"]

    
    
    def chat(self, **kwargs):
        result = self.chat_4o(data = kwargs["data"])
        return result


    #Role: software engineer
    def prepare_promptCU(self, **kwargs):
        question = kwargs['question']

        system = "You are a software engineer who is good at code understanding"
        data = {
            "messages": [
                {"role":"system","content":system},
                # {"role":"user", "content": prompt_start},
                # {"role":"assistant", "content":"Sure, I'll do my best to help you analyze the vulnerability in the code slice. Please provide me with the code slice and let me know what operations you would like me to perform on it."},
                {"role":"user", "content": question}
            ],
            "max_tokens": 800,
            "temperature": 0.0,
            "frequency_penalty": 0,
            "presence_penalty": 0,
            "top_p": 0.95,
            "stop": None
        }

        return data
    


    def handle_funccall(self, **kwargs):
        slice = kwargs['slice']
        cv_dict = kwargs['cv_dict']
        patch_stmt = kwargs['patch_stmt']

        CWE = []
        question = "Code slice: \"\"\"\n" + slice + "\n\"\"\"\n"
        keywords = {
            1: ['check', 'verify', 'assert'],
            2: ['init'],
            3: ['unref', 'destroy', 'free', 'clear', 'destruct',"close", "release", "delete", "realloc", "unregister", "clean", "del", "uninit"]
        }
        flag = 0
        for index, words in sorted(keywords.items(), key=lambda x:x[0]):
            for word in words:
                if bool(re.search(word, patch_stmt, re.IGNORECASE)):
                    flag = index
        result = ''
        if flag != 3:
            for cv, cv_type in cv_dict.items():
                result = ''
                if cv_type == 0:
                    cv_type = self.gpt_cvtype(slice, cv, patch_stmt)
                if cv_type == 1:
                    question += "Please check whether '" +cv+"' in the '" + patch_stmt + "' is related to memory operations such as read, write or alloc according to the context." 
                    question += "\n\n Do not output your analysis. Just output 'Yes' or 'No'."
                    prompt = self.prepare_promptCU(question = question)
                    # count_tokens(question)
                    result += self.chat(data = prompt)
                    result += "\n"
                    # print('result: ', result)
                    if "Yes" in result:
                        CWE.append("CWE-119")
                elif cv_type == 2:   ## cv is pointer
                    question += "Please check the use of '" + cv + "' aligns with which one of the following scenarios: \n 1. '" +cv+"' in the '" + patch_stmt + "' is related to memory operations such as read, write or alloc according to the context. Delete '" + patch_stmt + "' will lead to buffer overflow. \n 2. '" + patch_stmt + "' is to check whether '" + cv + "' is NULL or not. Delete this statement will lead to null pointer dereference.\n 3. '" + cv+"' in the '" + patch_stmt + "' is released in the preceding code statements and is used in the following code statements, and delete '" + patch_stmt + "' will lead to 'use after free' vulnerability.\n 4. '" + cv + "' is the parameter of a function which is used to release the resource.\n 5. None of the above.\n" 
                    question += "\n\nDo not output your analysis. Just output the corresponding number."
                    prompt = self.prepare_promptCU(question = question)
                    # count_tokens(question)
                    result += self.chat(data = prompt)
                    result += "\n"
                    if "1" in result:
                        CWE.append("CWE-119")
                    elif "2" in result:
                        CWE.append("CWE-476")
                    elif "3" in result:
                        CWE.append("CWE-416")
                    elif "4" in result:
                        CWE.append("CWE-399")
                elif cv_type == 3:  ## cv is boolean
                    question += "Please check the use of '" + cv + "' aligns with which one of the following scenarios: \n 1. '" +cv+ "' serves as the return value of the function. The function is recursive where an improper return value may result in infinite recursion of the function. \n 2. None of the above. \n"
                    question += "\n\nDo not output your analysis. Just output the corresponding number."
                    prompt = self.prepare_promptCU(question = question)
                    result += self.chat(data = prompt)
                    result += "\n"
                    if "1" in result:
                        CWE.append("CWE-399")
                elif cv_type == 4:  ## cv is string
                    question += "Please check whether '"+ cv +"'serves as a function parameter, and the function verifies whether the '"+ cv + "' is a file directory or conducts path sanitization.\n"
                    question += "\n\n Do not output your analysis. Just output 'Yes' or 'No'."
                    prompt = self.prepare_promptCU(question = question)
                    result += self.chat(data = prompt)
                    result += "\n"
                    if "Yes" in result:
                        CWE.append("CWE-22")
        if flag == 3:
            question += "Please check whether deleting '" + patch_stmt + "' will lead to 'resource leak' or 'memory leak'. \n"
            question += "\n Do not output your analysis. Just output 'Yes' or 'No'."
            prompt = self.prepare_promptCU(question = question)
            # tmp = self.chat(data = prompt)
            # print(tmp)
            result += self.chat(data = prompt)
            if "Yes" in result:
                CWE.append("CWE-399")
        return CWE

    def gpt_cvtype(self, slice, cv, patch_stmt):
        question = "Code slice: \"\"\"\n" + slice + "\n\"\"\"\n"
        question += "Please check whether '" + cv +"' in the '" + patch_stmt + "' fits which one of the following types? \n 1. integer \n 2. pointer\n"
        question += "Do not output your analysis. Just output the corresponding number."
        prompt = self.prepare_promptCU(question = question)
        # count_tokens(question)
        
        return self.chat(data = prompt)
    
    def handle_varass(self, **kwargs):
        slice = kwargs['slice']
        cv_dict = kwargs['cv_dict']
        patch_stmt = kwargs['patch_stmt']
        
        question = "Code slice: \"\"\"\n" + slice + "\n\"\"\"\n"
        CWE = []
        for cv, cv_type in cv_dict.items():
            result = ''
            if cv_type == 0:
                cv_type = self.gpt_cvtype(slice, cv, patch_stmt)
            if cv_type == 1:
                question += "Please check whether the variable on the right side of the assignment operator in the '" + patch_stmt +"' includes the keyword 'MAX' or 'MIN'. If not, output 'No'. Otherwise, check whether '" + cv + "' is related to memory operations such as read, write or alloc according to the context. If not, output 'No'. Otherwise, output 'Yes'."
                prompt = self.prepare_promptCU(question = question)
                # count_tokens(question)
                result += self.chat(data = prompt)
                result += "\n"
                if 'Yes' in result:
                    CWE.append("CWE-119")
            elif cv_type == 2:
                question += "Please check whether '" + cv + "' is assigned 'NULL'. If not, output 'No'. Otherwise, check whether '" + cv + "' is released in the preceding code statements and is used in the following code statments. If not, output 'No'. Otherwise, output 'Yes'."
                prompt = self.prepare_promptCU(question = question)
                # count_tokens(question)
                result += self.chat(data = prompt)
                result += "\n"
                if 'Yes' in result:
                    CWE.append("CWE-416")
        return CWE
    
    def handle_vardef(self, **kwargs):
        slice = kwargs['slice']
        cv_dict = kwargs['cv_dict']
        patch_stmt = kwargs['patch_stmt']
        
        question = "Code slice: \"\"\"\n" + slice + "\n\"\"\"\n"
        CWE = []
        for cv, cv_type in cv_dict.items():
            result = ''
            question += "Please check whether '" + cv + "' in the '" + patch_stmt + "' aligns with the following scenarios: \n 1. '" + cv +"' is involved in calculation. \n 2. The value of '" + cv + "' comes from an assignment.\n If none of the above scenarios are present, then output 'No'. Otherwise, output 'Yes'."
            question += "\n\n Do not output your analysis. Just output 'Yes' or 'No'."
            # count_tokens(question)
            prompt = self.prepare_promptCU(question = question)
            result += self.chat(data = prompt)
            result += "\n"
            if 'Yes' in result:
                CWE.append("CWE-189")
        return CWE

    def handle_ctrlstmt(self, **kwargs):
        slice = kwargs['slice']
        cv_dict = kwargs['cv_dict']
        patch_stmt = kwargs['patch_stmt']
        
        question = "Code slice: \"\"\"\n" + slice + "\n\"\"\"\n"
        CWE = []
        for cv, cv_type in cv_dict.items():
            result = ''
            if cv_type == 0:
                cv_type = self.gpt_cvtype(slice, cv, patch_stmt)
            if cv_type == 1:
                question += "Please check whether '" + cv + "' in the '" + patch_stmt + "'aligns with the following scenarios: \n 1. '" + cv + "' is related to memory operations such as read, write, alloc or served as list indices. \n 2. '" + cv + "' is involved in calculations and there may be an interger overflow.\n 3. '" +patch_stmt+ "' pertains to error handling and is associated with resource management.\n 4.None of the above."
                question += "\n\n Do not output any analysis. Output the corresponding number."
                prompt = self.prepare_promptCU(question = question)
                # count_tokens(question)
                result += self.chat(data = prompt)
                result += "\n"
                if '1' in result:
                    CWE.append('CWE-119')
                elif '2' in result:
                    CWE.append('CWE-189')
                elif '3' in result:
                    CWE.append('CWE-399')
            elif cv_type == 2:
                question += "Please check which of the following scenarios is present: \n 1. '" + patch_stmt + "' is checking if '" + cv + "' is equal to 'NULL' and '" + cv + "' in the '" + patch_stmt + "'is referenced in th following context. \n 2. '"+ patch_stmt + "' is checking if '" + cv + "' is equal to 'NULL' and if not, then release the '" + cv + "'\n 3. The utilization of '" +cv+ "' is related to the state of the program. \n 4. The value of '" +cv+ "' is temporarily stored in other variables in subsequent code. \n 5. The context code contain concurrent read/write operations on the same memory space. \n 6. The '" + cv+ "' stores path information, and the '" +patch_stmt +"' checks whether '..', '../', '/', '/..', or '.' exists within the '"+cv+"'. 7.None of the above."
                # question += "Please check whether '" + patch_stmt + "' is checking if '" + cv + "' is equal to 'NULL' and whether '" + cv + "' in the '" + patch_stmt + "'is referenced in th following context. If so, output 'Yes'. Otherwise, output 'No'. \n " 
                # question += "Do not output your analysis. Just output 'Yes' or 'No'."
                question += "\n\n Do not output any analysis. Output the corresponding number."
                prompt = self.prepare_promptCU(question = question)
                # count_tokens(question)
                result += self.chat(data = prompt)
                result += "\n"
                if "1" in result:
                    CWE.append("CWE-476")
                elif "2" in result:
                    CWE.append("CWE-415")
                elif "3" in result:
                    CWE.append("CWE-362")
                elif "4" in result:
                    CWE.append("CWE-362")
                elif "5" in result:
                    CWE.append("CWE-362")
                elif "6" in result:
                    CWE.append("CWE-22")
        return CWE  
    
    


def main():
     programs = os.listdir("/home/VulInject/result/generated_vulnerable_programs")
    #  programs = ["Linux"]
     iter = 0
     for program in programs:
        path = "/home/VulInject/result/generated_vulnerable_programs/" + program + "/match_result/"
        for cfile in os.listdir(path):
            match_results = os.listdir(path + cfile)
            # print(match_results)
            if len(match_results) != 0:
                for match_result in match_results:
                    match_result_path = path + cfile + "/" + match_result +"/"
                    # print(program, cfile, match_result)
                    sample_info = Vulnerability(match_result_path)
                    # modified statements not in the code slice
                    if sample_info.patch_stmt == "":
                        continue
                    model = LLMAdapter()
                    if not os.path.exists(match_result_path + "CWEType" + ".txt"):
                        result = model.run(stmt_type = sample_info.stmt_type, cv_dict = sample_info.cv_dict, patch_stmt = sample_info.patch_stmt, slice = sample_info.slice, model_path = match_result_path)
        
                        if type(result) == list and result != []:
                            with open(match_result_path + "CWEType" + ".txt", "w")as f:
                                for cwe in result:
                                    f.write(cwe+"\n")
                        iter += 1
                        print(iter)

if __name__ == "__main__":
    main()