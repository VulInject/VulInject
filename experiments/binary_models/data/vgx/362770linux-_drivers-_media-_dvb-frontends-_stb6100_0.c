static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
u8 VAR4[VAR5];

struct i2c_msg VAR6 = {
.VAR7	= VAR2->VAR8->VAR9 + VAR3,
.VAR10	= VAR11,
.VAR12	= VAR4,
.VAR13	= 1
};

FUN2(VAR2->VAR14, &VAR6, 1);

if (FUN3(VAR3 >= VAR5)) {
FUN4(VAR15, VAR16, 1, "", VAR3);
return -VAR17;
}
if (FUN3(VAR15 > VAR18)) {
FUN4(VAR15, VAR18, 1, "", VAR2->VAR8->VAR9);
FUN4(VAR15, VAR18, 1, "", VAR19[VAR3], VAR4[0]);
}

return (unsigned int)VAR4[0];
}