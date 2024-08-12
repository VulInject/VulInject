static VAR1 FUN1(VAR2 *VAR3, const char *VAR4,
VAR5 *VAR6, void *VAR7, const apr_size_t VAR8) {

apr_status_t VAR9 = VAR10;
apr_size_t VAR11 = 0;
char VAR12[128];


VAR9 = FUN2(VAR6, VAR7, VAR8, &VAR11);


if (VAR9 != VAR10) {
FUN3(VAR3, "", VAR4,
FUN4(VAR9, VAR12, sizeof(VAR12)));
}


if (VAR11 != VAR8) {
FUN3(VAR3,
""%VAR13\"" VAR14 "" VAR14 "",
VAR4, VAR11, VAR8);
VAR9 = VAR15;
}

return VAR9;
}