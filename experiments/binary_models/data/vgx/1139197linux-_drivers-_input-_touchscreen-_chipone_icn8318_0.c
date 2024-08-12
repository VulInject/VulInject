static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
u8 VAR5 = VAR6;
struct i2c_msg VAR7[2] = {
{
.VAR8 = VAR2->VAR8,
.VAR9 = 1,
.VAR10 = &VAR5
},
{
.VAR8 = VAR2->VAR8,
.VAR11 = VAR12,
.VAR9 = sizeof(struct VAR3),
.VAR10 = (VAR13 *)VAR4
}
};

return FUN2(VAR2->VAR14, VAR7, 2);
}