static void FUN1(const char *VAR1, const char *VAR2, gauge_t VAR3) {
value_list_t VAR4 = VAR5;

if (FUN2(VAR6, VAR1) != 0)
return;

VAR4.VAR7 = &(VAR8){.VAR9 = VAR3};
VAR4.VAR10 = 1;
FUN3(VAR4.VAR11, VAR12, sizeof(VAR4.VAR11));
FUN3(VAR4.VAR13, VAR1, sizeof(VAR4.VAR13));
FUN3(VAR4.VAR2, VAR2, sizeof(VAR4.VAR2));

FUN4(&VAR4);
}