# VulInject
This is the codebase for the paper "VulInject: Automated Generation of Vulnerable Programs with Vulnerability Type for Learning-based Vulnerability Detection".

# Structure
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
│   └── multiclass_models
├── base_env.yml                            <- Conda base environment configuration file
├── OPENAI_env.yml                          <- Conda OPENAI environment configuration file
├── vulinject_env.yml                       <- Conda vulinject environment configuration file
├── run.sh                                  <- Shell script for the entire project
└── README.md

```

# Get Started
## Prerequisites
Install necessary dependencies before running the project:
### software:
- JAVA (jdk1.8.0_161)
- ant (1.9.14)
- Joern (0.3.1)
- Universal Ctags (6.1.0)
- Copydetect
- Neo4j (2.1.5)

## Setup
This section gives the steps, explainations for getting the project running.
### 1) Clone this repo
``` console
$ git clone https://github.com/VulInject/VulInject.git
```
### 2) Install Prerequisites
You should install prerequisites and add them to the system path.
``` console
export JAVA_HOME=/usr/java/jdk1.8.0_161
export JRE_HOME=/usr/java/jdk1.8.0_161/jre
export CLASSPATH=.:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar:$JRE_HOME/lib
export PATH=$JAVA_HOME/bin:$JRE_HOME/bin:$PATH
export ANT_HOME=/usr/ant/apache-ant-1.9.14
export PATH=$PATH:$ANT_HOME/bin
```

We provide source code of Joern, Ctags, Copydetect and Neo4j in the src folder. You can directly use them.
### 3) Configure Conda
Create three new conda environments.
``` console
conda env new -f base_env.yml OPENAI_env.yml vulinject_env.yml
```
### 4) Configure the project
You should modify paths in the configuration file (```src/get_code_slice/config.json```) to ensure successful code slicing.

# How To Run
1. Put your target programs' repository in ```data/programs```
2. We provide a shell script for you to inject vulnerabilities into the target programs automatically.
``` console
bash run.sh
```
3. Generated vulnerabilities are stored in ```result/generated_vulnerable_programs/\<Your Target program's name\>```

# Dataset
83 vulnerability patterns we extract are present in data/pattern.


