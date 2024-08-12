VAR1 FUN1(void) {
char VAR2[1024];
sds VAR3 = FUN2();

while(1) {
int VAR4 = read(FUN3(stdin),VAR2,1024);

if (VAR4 == 0) break;
else if (VAR4 == -1) {
FUN4("");
FUN5(1);
}
VAR3 = FUN6(VAR3,VAR2,VAR4);
}
return VAR3;
}