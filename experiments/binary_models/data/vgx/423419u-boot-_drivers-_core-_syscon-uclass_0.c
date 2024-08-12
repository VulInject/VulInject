static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);


if (FUN3(VAR2->VAR5) == VAR6)
return 0;


struct VAR7 *VAR8 = FUN4(VAR2);

return FUN5(VAR2, VAR8->VAR9, FUN6(VAR8->VAR9),
&VAR4->VAR10);
return FUN7(FUN8(VAR2), &VAR4->VAR10);
}