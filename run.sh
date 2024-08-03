#!/bin/bash

source /root/miniconda3/etc/profile.d/conda.sh

## syntax and semantic matching
conda activate vulinject
bash /home/VulInject/src/get_code_slice/match.sh

conda activate base
## extract critical variables' info
python /home/VulInject/src/get_code_slice/cv_map.py

### get code_slice
python /home/VulInject/src/get_code_slice/get_slice.py

### apply patterns to generate vulnerabilities
python /home/VulInject/src/pattern_application/injection.py

### label the generated vulnerabilities
conda activate OPENAI
python /home/VulInject/src/type_labeling/LLM.py
