static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2, struct VAR7, VAR2);
v4l2_std_id VAR9;

if (VAR6->VAR10 != VAR11)
return -VAR12;

switch (VAR6->VAR13) {
case VAR14:
case VAR15:
VAR6->VAR16.VAR17 = 0;
VAR6->VAR16.VAR18 = 0;
VAR6->VAR16.VAR19 = VAR20;


if (VAR8->VAR21 == VAR22)
VAR9 = FUN3(VAR2);
else
VAR9 = VAR8->VAR21;
if (VAR9 & VAR23)
VAR6->VAR16.VAR24 = VAR25;
else
VAR6->VAR16.VAR24 = VAR26;
return 0;
case VAR27:
VAR6->VAR16 = VAR8->VAR28;
return 0;
default:
return -VAR12;
}
}