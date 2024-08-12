int FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4;
u16 VAR5[VAR6];
struct i2c_msg VAR7[1] = {
{
.VAR8 = VAR2->VAR9->VAR8,
.VAR10 = sizeof(VAR11) * VAR6,
.VAR5 = (void *)VAR5
},
};

for (VAR4 = 0; VAR4 < VAR6; VAR4++)
VAR5[VAR4] = FUN2(VAR2->VAR12[FUN3(VAR4)]);

if (FUN4(VAR2->VAR9->VAR13, VAR7, 1) != 1)
return -VAR14;

return 0;
}