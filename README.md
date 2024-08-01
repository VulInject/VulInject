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
│       └── ...
└── src
    ├── copydetect                          <- Source code of Copydetect
    ├── ctags                               <- Source code of Ctags
    ├── get_code_slice                      <- Source code for syntax matching, semantic matching and code slicing
    ├── joern-0.3.1                         <- Source code of Joern
    ├── neo4j                               <- Source code of neo4j
    ├── pattern_application                 <- Inject vulnerabilities into programs using patterns
    └── type_labeling                       <- Label the genrated vulnerabilities combing static analysis and the LLM
```

# Get Started
## Prerequisites
Install necessary dependencies before running the project:
### software:
- JAVA (jdk1.8.0_161)
- ant (1.9.14)

## Setup
This section gives the steps, explainations and examples for getting the project running.
##### 1) Clone this repo
``` console
$ git clone https://github.com/VulInject/VulInject.git
```
##### 2) Install Prerequisites
##### 3) Configure the project

