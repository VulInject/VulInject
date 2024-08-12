static void FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, derive_t VAR4) {
value_list_t VAR5 = VAR6;

VAR5.VAR7 = &(VAR8){.VAR9 = VAR4};
VAR5.VAR10 = 1;

FUN2(VAR5.VAR11, VAR12, sizeof(VAR5.VAR11));
FUN3(VAR5.VAR13, sizeof(VAR5.VAR13), "", VAR1);
FUN2(VAR5.VAR2, VAR2, sizeof(VAR5.VAR2));
if (VAR3)
FUN2(VAR5.VAR3, VAR3, sizeof(VAR5.VAR3));

FUN4(&VAR5);
}