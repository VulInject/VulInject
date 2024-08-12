static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
int VAR4;
u8 VAR5[1] = { VAR3 };
u8 VAR6[1] = { 0 };
struct i2c_msg VAR7[2] = { { .VAR8 = VAR2->VAR9.VAR10,
.VAR11 = 0,
.VAR12 = VAR5, .VAR13 = 1 },
{ .VAR8 = VAR2->VAR9.VAR10,
.VAR11 = VAR14,
.VAR12 = VAR6, .VAR13 = 1 } };

VAR4 = FUN2(VAR2->VAR15, VAR7, 2);

if (VAR4 != 2) {
FUN3("",
VAR16, VAR3, VAR4);
return VAR4;
}

return VAR6[0];
}