static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
const struct VAR6 *VAR7;
u32 VAR8;

VAR7 = FUN2(VAR3, VAR5->VAR9);

if (FUN3(!VAR7))
return -VAR10;

switch (VAR5->VAR9) {
case VAR11:
case VAR12:
VAR8 = 0x20;
break;
default:
VAR8 = 0x10;
break;
}

if (FUN4(VAR5->VAR13))
VAR8 = 0x80;

return FUN5(VAR5->VAR14, VAR8) * VAR7->VAR15;
}