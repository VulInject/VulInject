static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6) {
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 = FUN3(VAR5);
int VAR11 = VAR10->VAR12;
return sprintf(VAR6, "", FUN4(VAR8->VAR13[VAR11], VAR11));
}