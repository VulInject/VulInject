int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR6->VAR9;
struct VAR10 *VAR11 = VAR6->VAR12;
struct VAR13 *VAR14;
u_int8_t VAR15;

VAR14 = FUN3(VAR4, struct VAR13 *);

if (FUN4(VAR14->VAR16) == VAR17) {
if (VAR4->VAR18.VAR19 < (sizeof(*VAR14) + sizeof(VAR15)))
return (-1);

FUN5(VAR4, sizeof(*VAR14), sizeof(VAR15), &VAR15);
switch (VAR15) {
case VAR20:
case VAR21:
FUN6(&VAR6->VAR22, VAR4);
FUN7(VAR23, &VAR8->VAR24);
return (1);
}
}



if ((VAR6->VAR25 & VAR26) == 0 ||
VAR11 == NULL || VAR11 != VAR8->VAR27) {
FUN8(VAR4);
return (-1);
}


return (0);
}