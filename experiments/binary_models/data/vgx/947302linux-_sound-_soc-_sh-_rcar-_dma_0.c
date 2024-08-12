static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6, struct VAR5 *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = FUN3(VAR9);
struct VAR12 *VAR13;


VAR13 = FUN4(VAR2, VAR6, VAR7);
if (FUN5(VAR13)) {

if (FUN6(VAR13) == -VAR14)
return FUN6(VAR13);


return -VAR15;
}


VAR2->VAR16 = VAR13->VAR17->VAR18;

FUN7(VAR13);

VAR11->VAR19++;

return 0;
}