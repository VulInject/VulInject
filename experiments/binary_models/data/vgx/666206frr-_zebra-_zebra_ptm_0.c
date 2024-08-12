void FUN1(void)
{
char VAR1[64];

memset(&VAR2, 0, sizeof(VAR2));

VAR2.VAR3 = calloc(1, VAR4);
if (!VAR2.VAR3) {
FUN2("", VAR5);
return;
}

VAR2.VAR6 = calloc(1, VAR7);
if (!VAR2.VAR6) {
FUN2("", VAR5);
free(VAR2.VAR3);
return;
}

VAR2.VAR8 = FUN3();
FUN4();

snprintf(VAR1, sizeof(VAR1), "", VAR9);
VAR10 = FUN5(VAR1, NULL, VAR11,
VAR11);
VAR2.VAR12 = FUN6(0);

VAR2.VAR13 = VAR14;

VAR2.VAR15 = -1;

FUN7(VAR16, VAR17);
}