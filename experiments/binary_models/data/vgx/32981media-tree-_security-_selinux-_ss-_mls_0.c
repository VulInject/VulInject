int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR1 *VAR5)
{
if (VAR6.VAR7) {
struct VAR8 *VAR9 = &(VAR2->VAR10.VAR11[0]);
struct VAR8 *VAR12 = &(VAR2->VAR10.VAR11[1]);
struct VAR8 *VAR13 = &(VAR4->VAR10.VAR11[0]);
struct VAR8 *VAR14 = &(VAR4->VAR10.VAR11[1]);
struct VAR8 *VAR15 = &(VAR4->VAR16);
struct VAR8 *VAR17 = &(VAR5->VAR10.VAR11[0]);
struct VAR8 *VAR18 = &(VAR5->VAR10.VAR11[1]);


if (FUN2(VAR15, VAR9, VAR12))
*VAR17 = *VAR15;
else if (FUN2(VAR9, VAR15, VAR14))
*VAR17 = *VAR9;
else if (FUN2(VAR12, VAR13, VAR15))
*VAR17 = *VAR13;
else
return -VAR19;


if (FUN3(VAR14, VAR12))
*VAR18 = *VAR12;
else if (FUN3(VAR12, VAR14))
*VAR18 = *VAR14;
else
return -VAR19;
}

return 0;
}