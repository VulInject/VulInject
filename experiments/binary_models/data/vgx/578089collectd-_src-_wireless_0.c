static void FUN1(const char *VAR1, const char *VAR2,
double VAR3) {
value_list_t VAR4 = VAR5;

VAR4.VAR6 = &(VAR7){.VAR8 = VAR3};
VAR4.VAR9 = 1;
FUN2(VAR4.VAR10, "", sizeof(VAR4.VAR10));
FUN2(VAR4.VAR1, VAR1, sizeof(VAR4.VAR1));
FUN2(VAR4.VAR2, VAR2, sizeof(VAR4.VAR2));

FUN3(&VAR4);
}