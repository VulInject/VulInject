extern int FUN1(List VAR1, List VAR2,
char *VAR3, int VAR4)
{
int VAR5;
qos_char_list_args_t VAR6 = {0};

if (!VAR1) {
FUN2("");
return 0;
}

if (!FUN3(VAR3, "")) {
FUN4(VAR1, xstrdup(""));
return 1;
}

VAR6.VAR4 = VAR4;
VAR6.VAR2 = VAR2;

VAR5 = FUN5(VAR1, VAR3, &VAR6,
VAR7);
if (!VAR5) {
FUN2("");
}

return VAR5;
}