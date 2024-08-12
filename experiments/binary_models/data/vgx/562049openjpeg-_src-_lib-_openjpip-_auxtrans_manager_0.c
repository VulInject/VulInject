void FUN1(OPJ_BOOL VAR1, auxtrans_param_t VAR2,
const char VAR3[], void *VAR4, OPJ_SIZE_T VAR5, OPJ_SIZE_T VAR6)
{
VAR7 *VAR8;
unsigned int VAR9;
pthread_t VAR10;
int VAR11;

if (VAR1) {
if (VAR2.VAR12 == -1) {
fprintf(VAR13,
"");
return;
}

VAR8 = FUN2(VAR1, VAR2, VAR3, VAR4, VAR5,
VAR6);

VAR8->VAR14 = (VAR15)FUN3(NULL, 0, &VAR16, VAR8,
0, &VAR9);
if (VAR8->VAR14 == 0) {
fprintf(VAR13, "",
strerror((int)VAR8->VAR14));
}
VAR11 = FUN4(&VAR10, NULL, &VAR16, VAR8);
if (VAR11 != 0) {
fprintf(VAR13, "", strerror(VAR11));
}
} else {
fprintf(VAR13,
"");
}
}