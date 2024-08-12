static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = NULL;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR11 = &VAR4->VAR6;


VAR4->VAR12 = FUN3(VAR2);
if (VAR4->VAR12 == VAR13) {
FUN4("");
return -VAR14;
}
VAR6 = (struct VAR5 *)FUN5(VAR4->VAR12);
VAR6 = (struct VAR5 *)VAR4->VAR12;
VAR8 = (struct VAR7 *)(&VAR6->VAR15);
VAR10 = (struct VAR9 *)
((void *)VAR8 + FUN6(FUN7(&VAR8->VAR16)));

VAR11->VAR17 = FUN8();

if (FUN9(VAR4, VAR6, VAR8, VAR10) < 0)
return -VAR14;

FUN4("",
(void *)VAR8, (void *)VAR10,
FUN6(FUN7(&VAR8->VAR16)));

return FUN10(VAR2, VAR8, VAR10, &VAR18, 0, VAR19);
}