int FUN1(VAR1 **VAR2, const char* VAR3, int VAR4) {
VAR1 *VAR5;


VAR5 = (VAR1*)FUN2(sizeof(VAR1));
if (!VAR5) {
FUN3("");
goto VAR6;
}
VAR5->VAR7 = NULL;

VAR5->VAR8.VAR9 = (char*)FUN2((VAR4+1) * sizeof(char));
if (!VAR5->VAR8.VAR9) {
FUN3("");
goto VAR6;
}

memcpy(VAR5->VAR8.VAR9, VAR3, VAR4);
VAR5->VAR8.VAR9[VAR4] = '';
VAR5->VAR8.VAR4 = VAR4;

if (!*VAR2) {
*VAR2 = VAR5;
} else {
VAR1 *VAR10 = *VAR2;
while (VAR10->VAR7)
VAR10 = VAR10->VAR7;
VAR10->VAR7 = VAR5;
}

return 0;

VAR6:
if (VAR5)
FUN4(VAR5);
return -1;
}