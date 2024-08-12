int (*FUN1(int VAR1))[] { return &VAR2; }
int *FUN2(int VAR1) { return &VAR2[0]; }
int *FUN3(int VAR1) { return  VAR2; }