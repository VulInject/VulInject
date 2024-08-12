static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned char VAR7[8];

struct i2c_msg VAR8 = {
.VAR9 = VAR6->VAR9,
.VAR10 = 8,
.VAR7 = VAR7,	
};

VAR7[0] = VAR11;
VAR7[1] = FUN3(VAR4->VAR12);
VAR7[2] = FUN3(VAR4->VAR13);
VAR7[3] = FUN3(VAR4->VAR14);
VAR7[4] = FUN3(VAR4->VAR15);
VAR7[5] = FUN3(VAR4->VAR16);
VAR7[6] = FUN3(VAR4->VAR17 + 1);
VAR7[7] = FUN3(VAR4->VAR18 % 100);


if ((FUN4(VAR6->VAR19, &VAR8, 1)) != 1) {
FUN5(&VAR6->VAR2, "", VAR20);
return -VAR21;
}

return 0;
}