static int FUN1(void *VAR1, unsigned int VAR2,
void *VAR3, size_t VAR4)
{
struct VAR5 *VAR6 = VAR1;
int VAR7;
u8 VAR8[2];
struct i2c_msg VAR9[] = {
{
.VAR8	= VAR6->VAR10->VAR8,
.VAR11	= 0,
.VAR12	= sizeof(VAR8),
.VAR13	= VAR8
}, {
.VAR8	= VAR6->VAR10->VAR8,
.VAR11	= VAR14,
.VAR13	= VAR3
}
};


VAR7 = FUN2(&VAR6->VAR15->VAR16);
if (VAR7)
return VAR7;


VAR8[0] = VAR2 >> 8;
VAR8[1] = VAR2;
VAR9[1].VAR12 = VAR4;
VAR7 = FUN3(VAR6->VAR10->VAR17, VAR9, FUN4(VAR9));

FUN5(&VAR6->VAR15->VAR16);

if (VAR7 != FUN4(VAR9)) {
FUN6(&VAR6->VAR10->VAR18,
"", VAR7);
return VAR7 < 0 ? VAR7 : -VAR19;
}

return 0;
}