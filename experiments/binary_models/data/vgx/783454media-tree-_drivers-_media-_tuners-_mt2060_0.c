static int FUN1(struct VAR1 *VAR2, u8 VAR3, u8 VAR4)
{
u8 VAR5[2] = { VAR3, VAR4 };
struct i2c_msg VAR6 = {
.VAR7 = VAR2->VAR8->VAR9, .VAR10 = 0, .VAR5 = VAR5, .VAR11 = 2
};

if (FUN2(VAR2->VAR12, &VAR6, 1) != 1) {
FUN3(VAR13 "");
return -VAR14;
}
return 0;
}