static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR5)
{
const char *VAR6 = FUN2(VAR5);
struct VAR7 *VAR8 = FUN3(VAR5, "");

if (FUN4(VAR5, "")) {

return;
}

if (!VAR8) {
VAR8 = FUN3(VAR5, "");
if (VAR8 && !VAR8->VAR9.VAR10)
VAR8 = NULL;
}

if (VAR8) {
if (!VAR6[0])
FUN5(VAR2, VAR4, VAR5, "");
} else {
if (VAR6[0])
FUN5(VAR2, VAR4, VAR5, "");
}
}