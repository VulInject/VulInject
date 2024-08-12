static int FUN1(struct VAR1 *VAR2, const u32 VAR3, long *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;
u8 VAR8 = 12; 
s64 VAR9 = 0;

switch (VAR3) {
case VAR10:
VAR7 = FUN3(VAR6, VAR11,
VAR12, 3, &VAR9);
VAR8 = 3;
break;
case VAR13:
VAR7 = FUN3(VAR6, VAR14,
VAR12, 2, &VAR9);
break;
case VAR15:
VAR7 = FUN3(VAR6, VAR16,
VAR12, 2, &VAR9);
break;
case VAR17:
return FUN4(VAR6, VAR18,
VAR19, VAR4);
case VAR20:
return FUN4(VAR6, VAR18,
VAR21, VAR4);
case VAR22:
VAR7 = FUN3(VAR6, VAR23,
VAR24, 2, &VAR9);
break;
case VAR25:
VAR7 = FUN3(VAR6, VAR26,
VAR24, 2, &VAR9);
break;
default:
return -VAR27;
}

if (VAR7)
return VAR7;

*VAR4 = VAR9 * VAR8;

return 0;
}