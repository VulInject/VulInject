static int FUN1(struct VAR1 *VAR2, u16 VAR3, u8 VAR4)
{
struct i2c_msg VAR5;
struct {
u16 VAR3;
u8 VAR4;
} __packed VAR6;
int VAR7;

VAR3 = FUN2(VAR3);

VAR6.VAR3 = VAR3;
VAR6.VAR4 = VAR4;

VAR5.VAR8	= VAR2->VAR8;
VAR5.VAR9	= 0;
VAR5.VAR10		= 3;
VAR5.VAR6		= (VAR11 *)&VAR6;

VAR7 = FUN3(VAR2->VAR12, &VAR5, 1);
if (VAR7 < 0) {
FUN4(&VAR2->VAR13, "", VAR3);
return VAR7;
}

return 0;
}