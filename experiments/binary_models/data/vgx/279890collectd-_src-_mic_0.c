static void FUN1(int VAR1, const char *VAR2,
U32 VAR3) {
value_list_t VAR4 = VAR5;


FUN2("", VAR3,
((VAR6)VAR3) * 1024.0);

VAR4.VAR7 = &(VAR8){.VAR9 = ((VAR6)VAR3) * 1024.0};
VAR4.VAR10 = 1;

strncpy(VAR4.VAR11, "", sizeof(VAR4.VAR11));
FUN3(VAR4.VAR12, sizeof(VAR4.VAR12), "", VAR1);
strncpy(VAR4.VAR13, "", sizeof(VAR4.VAR13));
strncpy(VAR4.VAR2, VAR2, sizeof(VAR4.VAR2));

FUN4(&VAR4);
}