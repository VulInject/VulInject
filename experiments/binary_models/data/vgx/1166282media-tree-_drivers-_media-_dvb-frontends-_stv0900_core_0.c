VAR1 FUN1(struct VAR2 *VAR3, u16 VAR4)
{
int VAR5;
u8 VAR6[] = { FUN2(VAR4), FUN3(VAR4) };
u8 VAR7 = 0;
struct i2c_msg VAR8[] = {
{
.VAR9	= VAR3->VAR10,
.VAR11	= 0,
.VAR7 = VAR6,
.VAR12 = 2,
}, {
.VAR9	= VAR3->VAR10,
.VAR11	= VAR13,
.VAR7 = &VAR7,
.VAR12 = 1,
},
};

VAR5 = FUN4(VAR3->VAR14, VAR8, 2);
if (VAR5 != 2)
FUN5("",
VAR15, VAR5, VAR4);

return VAR7;
}