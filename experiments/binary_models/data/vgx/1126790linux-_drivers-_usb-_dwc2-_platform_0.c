static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5);
int VAR6 = 0;

if (VAR2->VAR7) {
FUN3(VAR2->VAR7);
} else if (VAR2->VAR8 && VAR2->VAR8->VAR9) {
VAR6 = VAR2->VAR8->FUN4(VAR4, VAR2->VAR8->VAR10);
} else {
VAR6 = FUN5(VAR2->VAR11);
if (VAR6 == 0)
VAR6 = FUN4(VAR2->VAR11);
}
if (VAR6)
return VAR6;

if (VAR2->VAR12)
FUN6(VAR2->VAR12);

return 0;
}