static int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
unsigned int VAR5;
struct VAR6 *VAR7 = &VAR2->VAR8.VAR9.VAR10;
struct VAR11 *VAR12 = &VAR2->VAR8.VAR13->VAR12;
struct VAR14 *VAR15 = VAR12->VAR15;

for (VAR5 = 0; VAR5 <= 8; VAR5++)
VAR4[VAR5] = FUN2(VAR15, 0x100220 + (VAR5 * 4));


VAR7->VAR16 = 0x10;
FUN3(VAR17) = (VAR4[3] & 0xff) + 1;

switch (VAR2->VAR8.VAR18) {
case VAR19:
FUN3(VAR20) = FUN3(VAR17) - 1;
break;
case VAR21:
FUN3(VAR20) = ((VAR4[2] & 0xff000000) >> 24) + 1;
break;
default:
return -VAR22;
}

FUN3(VAR23) = ((VAR4[1] >> 24) & 0xff) - 1 - FUN3(VAR20);

return 0;
}