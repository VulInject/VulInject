int
FUN1(
struct VAR1		*VAR2,
const struct VAR3	*VAR4,
VAR5			*VAR6,
enum xfs_ag_resv_type		VAR7)
{
struct xfs_alloc_arg		VAR8 = {0};
xfs_agblock_t			VAR9;
int				VAR10;

switch (VAR7) {
case VAR11:
case VAR12:
VAR10 = FUN2(VAR2->VAR13.VAR14, VAR2->VAR15,
VAR2->VAR13.VAR16, &VAR9, 1);
if (VAR10)
return VAR10;
if (VAR9 == VAR17)
return -VAR18;
FUN3(VAR2->VAR19, VAR2->VAR13.VAR14, VAR9, 1, false);
*VAR6 = FUN4(VAR2->VAR19, VAR2->VAR13.VAR14->VAR20, VAR9);
if (VAR7 == VAR12)
FUN5(VAR2->VAR19, VAR2->VAR13.VAR14->VAR20);
return 0;
default:
break;
}

VAR8.VAR15 = VAR2->VAR15;
VAR8.VAR19 = VAR2->VAR19;
VAR8.VAR4 = *VAR4;
VAR8.VAR6 = FUN4(VAR8.VAR19, VAR2->VAR13.VAR14->VAR20, 0);
VAR8.VAR21 = 1;
VAR8.VAR22 = 1;
VAR8.VAR23 = 1;
VAR8.VAR24 = VAR25;
VAR8.VAR7 = VAR7;

VAR10 = FUN6(&VAR8);
if (VAR10)
return VAR10;
if (VAR8.VAR6 == VAR26)
return -VAR18;
FUN7(VAR8.VAR27 == 1);
*VAR6 = VAR8.VAR6;

return 0;
}