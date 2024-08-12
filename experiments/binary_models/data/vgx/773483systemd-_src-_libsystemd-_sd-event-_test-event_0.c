static int FUN1(VAR1 *VAR2, const struct VAR3 *VAR4, void *VAR5) {
struct VAR6 *VAR7 = FUN2(VAR5);
const char *VAR8;

FUN3(FUN4(VAR2, &VAR8) >= 0);

FUN3(VAR7->VAR9 < 2);
FUN3(FUN5(VAR7->VAR10[VAR7->VAR9], VAR8));
VAR7->VAR9++;

return 1;
}