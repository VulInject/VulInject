static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, u32 VAR5,
const char *VAR6, u8 VAR7)
{
struct i2c_board_info VAR8;
struct VAR9 *VAR10 = &VAR2->VAR11;
unsigned short VAR12[2] = { VAR7, VAR13 };

memset(&VAR8, 0, sizeof(struct VAR14));
FUN2(VAR8.VAR6, VAR6, VAR15);


switch (VAR5) {
case VAR16:
VAR10->VAR17 = VAR18;
VAR10->VAR19 = VAR20;
VAR10->VAR6 = VAR21 | VAR22 |
VAR23;
VAR10->VAR24 = VAR2->VAR25;
VAR8.VAR26 = VAR10;
break;
}

return FUN3(VAR4, &VAR8, VAR12, NULL) == NULL ?
-1 : 0;
}