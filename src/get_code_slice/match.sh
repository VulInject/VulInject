#!/bin/bash

# Parameters
#PROJECT_URL=""
PROJECT_DIR="vim"
C_CPP_FILES_DIR="${PROJECT_DIR}_c"
CTAGS_DIR="${PROJECT_DIR}_tags"
PATCH_DIR_1="/home/VulInject/data/pattern_for_syn_matching_shard1"
PATCH_DIR_2="/home/VulInject/data/pattern_for_syn_matching_shard2"
NORMALIZED_PATCH_DIR="/home/VulInject/data/pattern_for_sem_matching"
MATCH_CONTENT_DIR="${PROJECT_DIR}_match_content"
MATCH_LINES_DIR="${PROJECT_DIR}_match_content_line_information"
NORMALIZED_CONTENT_DIR="normalized_${PROJECT_DIR}_content"
SYMBOL_MAP_DIR="${PROJECT_DIR}_match_content_var_fun_map"
LABELS_OUTPUT_DIR="${PROJECT_DIR}_match_content_label"
MATCH_RESULT_DIR="/home/VulInject/result/generated_vulnerable_programs/${PROJECT_DIR}/match_result"
C_RESULT_DIR="/home/VulInject/result/generated_vulnerable_programs/${PROJECT_DIR}/c_origin"
#1. git clone
#2. Collect .c .cpp files
python3 /home/VulInject/src/get_code_slice/collect_c_cpp_files.py -i $PROJECT_DIR -o $C_CPP_FILES_DIR

# # # 3. Generate ctags
python3 /home/VulInject/src/get_code_slice/ctags_gen.py -i $C_CPP_FILES_DIR -o $CTAGS_DIR

# # # 4. Store match content and line numbers
python3 /home/VulInject/src/get_code_slice/extract_match.py --program $C_CPP_FILES_DIR --pattern $PATCH_DIR_1 --tags $CTAGS_DIR --o1 $MATCH_CONTENT_DIR --o2 $MATCH_LINES_DIR
python3 /home/VulInject/src/get_code_slice/extract_match1.py --program $C_CPP_FILES_DIR --pattern $PATCH_DIR_2 --tags $CTAGS_DIR --o1 $MATCH_CONTENT_DIR --o2 $MATCH_LINES_DIR

# 5. Normalize match content
python3 /home/VulInject/src/get_code_slice/normalization.py -i $MATCH_CONTENT_DIR -o $NORMALIZED_CONTENT_DIR -l $SYMBOL_MAP_DIR

# 6. Generate tags
python3 /home/VulInject/src/get_code_slice/tagging.py -m $SYMBOL_MAP_DIR -t $CTAGS_DIR -l $LABELS_OUTPUT_DIR -s $MATCH_LINES_DIR

# 7. Match normalized content with normalized patch
python3 /home/VulInject/src/get_code_slice/match.py -p1 $NORMALIZED_CONTENT_DIR -p2 $NORMALIZED_PATCH_DIR -p3 $SYMBOL_MAP_DIR -p4 $MATCH_LINES_DIR -p5 $LABELS_OUTPUT_DIR -p6 $MATCH_CONTENT_DIR -p7 $MATCH_RESULT_DIR

cp -r $C_CPP_FILES_DIR $C_RESULT_DIR