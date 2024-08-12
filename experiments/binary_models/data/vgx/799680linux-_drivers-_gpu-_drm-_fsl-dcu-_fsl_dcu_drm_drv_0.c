static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

if (!VAR4)
return 0;

VAR5 = FUN3(VAR4->VAR6);
if (VAR5 < 0) {
FUN4(VAR2, "");
return VAR5;
}

if (VAR4->VAR7)
FUN5(VAR4->VAR7);
FUN6(VAR4->VAR8);
FUN7(VAR4->VAR9);

FUN8(VAR4->VAR8);

return 0;
}