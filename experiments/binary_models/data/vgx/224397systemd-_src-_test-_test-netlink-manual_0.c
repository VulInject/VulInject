static int FUN1(const char *VAR1) {
FUN2(VAR2) struct VAR3 *VAR4 = NULL;
FUN2(VAR5) struct VAR6 *VAR7 = NULL;
struct VAR6 *VAR8;
int VAR9;

VAR4 = FUN3(NULL, NULL);
if (!VAR4)
return FUN4();

VAR9 = FUN5(VAR4, VAR1, &VAR7);
if (VAR9 < 0)
return VAR9;

FUN6(VAR8, VAR7) {
FUN2(VAR10) struct VAR11 *VAR12 = NULL;

VAR12 = FUN7(VAR8);

VAR9 = FUN8(VAR12, 0, NULL, NULL, NULL, NULL);
if (VAR9 > 0)
VAR9 = -VAR13;
}

return VAR9;
}