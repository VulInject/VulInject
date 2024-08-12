int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR4->VAR6 = 0;
FUN3(VAR7, &VAR4->VAR8);
FUN4(VAR4->VAR2, true);


FUN5(VAR4);

FUN6(VAR4);

VAR5 = FUN7(VAR4);
if (VAR5) {
FUN8(VAR2, "", VAR5);
return VAR5;
}

if (VAR2->VAR9)
FUN9(VAR4);

return 0;
}