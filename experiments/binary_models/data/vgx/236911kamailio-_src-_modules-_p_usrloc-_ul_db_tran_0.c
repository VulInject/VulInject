static int FUN1(VAR1 * VAR2, VAR3 * VAR4) {
int VAR5 = 0;
str VAR6;
if(VAR4) {
if(VAR2->FUN2(VAR4, &VAR7, NULL) < 0) {
FUN3(""
"");
VAR5++;
}
VAR6.VAR8  = VAR9;
VAR6.VAR10 = strlen(VAR9);
if(VAR2->FUN2(VAR4, &VAR6, NULL) < 0) {
FUN3(""
"");
VAR5++;
}
if(VAR2->FUN2(VAR4, &VAR11, NULL) < 0) {
FUN3(""
"");
VAR5++;
}
} else {
FUN3("");
return -1;
}
if(VAR5 > 0) {
return -1;
}
return 0;
}