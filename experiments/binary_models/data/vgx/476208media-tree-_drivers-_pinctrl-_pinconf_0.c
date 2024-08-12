static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR2->private;
const struct VAR6 *VAR7 = VAR5->VAR8->VAR7;
unsigned VAR9 = VAR7->FUN2(VAR5);
unsigned VAR10 = 0;

FUN3(VAR2, "");
FUN3(VAR2, "");

while (VAR10 < VAR9) {
const char *VAR11 = VAR7->FUN4(VAR5, VAR10);

FUN5(VAR2, "", VAR10, VAR11);
FUN6(VAR5, VAR2, VAR10, VAR11);
FUN5(VAR2, "");

VAR10++;
}

return 0;
}