static VAR1
FUN1(VAR2 *VAR3, mrb_value VAR4)
{
char VAR5[VAR6], VAR7[VAR8];
char VAR9[VAR8 + VAR6];
const char *VAR10;
char *VAR11;
size_t VAR12;
FUN2(VAR3, "", &VAR10);
VAR11 = FUN3(VAR10, -1);
_splitpath(VAR11, VAR7, VAR5, NULL, NULL);
snprintf(VAR9, VAR8 + VAR6, "", VAR7, VAR5);
FUN4(VAR11);
VAR12 = strlen(VAR9);
if (VAR12 == 0) {
strncpy(VAR9, "", 2);  
} else if (VAR12 > 1) {
VAR12--;
while (VAR12 > 0 && (VAR9[VAR12] == '' || VAR9[VAR12] == '')) {
VAR9[VAR12] = '';  
VAR12--;
}
}
return FUN5(VAR3, VAR9);
char *VAR5, *VAR11;
mrb_value VAR13;
FUN2(VAR3, "", &VAR13);
VAR11 = FUN3(FUN6(VAR3, VAR13), -1);

if ((VAR5 = FUN7(VAR11)) == NULL) {
FUN4(VAR11);
FUN8(VAR3, "");
}
FUN4(VAR11);
return FUN5(VAR3, VAR5);
}