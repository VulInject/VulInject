static int FUN1(void *VAR1)
{
int VAR2;
struct VAR3 *VAR4 = (struct VAR3 *)VAR1;


FUN2(&VAR4->VAR5.VAR6);

if (VAR4->VAR7.VAR8) {
FUN3(VAR4, false);
} else {
FUN4(VAR4, 0, 0);

FUN5(VAR4, VAR9,
VAR10);
FUN6(VAR4, VAR9,
VAR11);
}

VAR2 = FUN7(VAR4);
if (VAR2)
return VAR2;

return FUN8(VAR4);
}