static bool FUN1(char *VAR1, size_t VAR2, int VAR3, const char *VAR4, bool VAR5, bool *VAR6) {

if(*VAR1 && VAR5 == *VAR6) {
return false;
}


*VAR6 = VAR5;

priority_disp_t VAR7 = FUN2(VAR3);
const char *VAR8 = "", *VAR9 = "", *VAR10 = "";

if(VAR5) {
VAR8 = VAR11[VAR7.VAR8];
VAR9 = VAR11[VAR12];
VAR10 = VAR11[VAR13];
}

const char *VAR14 = FUN3();
snprintf(VAR1, VAR2, "", VAR10, VAR14, VAR8, VAR7.VAR15, VAR9, VAR4);
return true;
}