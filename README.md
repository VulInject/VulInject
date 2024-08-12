# VulInject
This is the codebase for the paper "VulInject: Automated Generation of Vulnerable Programs with Vulnerability Type for Learning-based Vulnerability Detection".

## Structure
```
VulInject
├── data                                    
│   ├── pattern                             <- Vulnerability Pattern            
│   └── programs                            <- Benign programs' source code
|       |—— vim
|       └── ...
├── result
│   └── generated_vulnerable_programs       <- Gnerated vulnerable programs' information
│       ├── vim
│       │   ├── c_origin                    <- Original C files 
│       │   ├── c_vul                       <- Generated vulnerable C files
│       │   └── match_result                <- Detailed vulnerability infomation including critical variables info, CVE type, vulnerable code slice, modified statements lines info
│       └── ...
├── src
|   ├── copydetect                          <- Source code of Copydetect
|   ├── ctags                               <- Source code of Ctags
|   ├── get_code_slice                      <- Source code for syntax matching, semantic matching and code slicing
|   │   ├── match.sh                        <- Shell script for syntax matching and semantic matching
|   │   ├── get_slice.py                    <- Generate code slices
|   │   └── ...
|   ├── joern-0.3.1                         <- Source code of Joern
|   ├── neo4j                               <- Source code of neo4j
|   ├── pattern_application                 
|   │   └── injection.py                    <- Inject vulnerabilities into programs using patterns
|   └── type_labeling                       
|       ├── LLM.py                          <- Vulnerability type labeling using ChatGPT
|       ├── vulsample.py                    <- Module for extracting patch statements type and critival variables type
|       └── ...
├── experiments
|   ├── binary_models
|   |   └── data                            <- data for binary model training and test
│   └── multiclass_models
|       └── data                            <- data for multiclass model training and test
├── base_env.yml                            <- Conda base environment configuration file
├── OPENAI_env.yml                          <- Conda OPENAI environment configuration file
├── vulinject_env.yml                       <- Conda vulinject environment configuration file
├── run.sh                                  <- Shell script for the entire project
└── README.md

```

## Get Started
### Prerequisites
Install necessary dependencies before running the project:
- JAVA (jdk1.8.0_161)
- ant (1.9.14)
- Joern (0.3.1)
- Universal Ctags (6.1.0)
- Copydetect
- Neo4j (2.1.5)

### Setup
This section gives the steps, explainations for getting the project running.
#### 1) Clone this repo
``` console
$ git clone https://github.com/VulInject/VulInject.git
```
#### 2) Install Prerequisites
You should install prerequisites and add them to the system path.
``` console
export JAVA_HOME=/usr/java/jdk1.8.0_161
export JRE_HOME=/usr/java/jdk1.8.0_161/jre
export CLASSPATH=.:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar:$JRE_HOME/lib
export PATH=$JAVA_HOME/bin:$JRE_HOME/bin:$PATH
export ANT_HOME=/usr/ant/apache-ant-1.9.14
export PATH=$PATH:$ANT_HOME/bin
```

We provide source code of Joern, Ctags, Copydetect, and Neo4j in the src folder. You can directly use them.
#### 3) Configure Conda
Create three new conda environments.
``` console
conda env create -f base_env.yml
conda env create -f OPENAI_env.yml 
conda env create -f vulinject_env.yml 
```
#### 4) Configure the project
You should modify paths in the configuration file (```src/get_code_slice/config.json```) to ensure successful code slicing.

## How To Run
### Vulnerability Generation
1. Put your target programs' repository in ```data/programs```
2. We provide a shell script for you to inject vulnerabilities into the target programs automatically.
``` console
bash run.sh
```
3. Generated vulnerabilities are stored in ```result/generated_vulnerable_programs/<Your Target program's name>```

## Downstream Tasks Evaluation

### Models
For binary models, we use VulCNN, VulBERTa, LineVul and Devign. For multiclass models, we use PDBERT, VulBERTa and Vulexplainer.

You can directly use the open-source versions of these models for experiments. 

We will release Docker images later for you to reproduce the experimental results in our paper.

### Dataset
- 83 vulnerability patterns we extract are present in ```data/pattern```.
- Datasets for binary and multiclass vulnerability detection models' training, validating and testing are present in ```experiments/binary_models/data``` and ```experiments/multiclass_models/data```, respectively.
- Data in ```experiments/binary_models/data/vgx``` contains vulnerable and non-vulnerable files. ```sard``` and ```vulinject``` only contain vulnerable files. To compare the generated vulnerabilities, you need to extract the non-vulnerable files from ```vgx``` and combine them with data from ```sard``` and ```vulinejct```.
- ```experiments/multiclass_models/data/vulinject_2882_train.json``` already contains data in ```experiments/multiclass_models/data/baseline_train.json```. Thus, you can directly use this training set to train models and use ```experiments/multiclass_models/data/test.json``` to test. The same applies to ```experiments/multiclass_models/data/vulinject_8140_train.json``` and ```experiments/multiclass_models/data/sard_2882_train.json```.


