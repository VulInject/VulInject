static bool FUN1(struct VAR1 *VAR2, uint8_t VAR3, VAR4 *VAR5)
{
union i2c_smbus_data VAR6;
struct i2c_smbus_ioctl_data VAR7;

VAR7.VAR8 = VAR9;
VAR7.VAR10 = VAR3;
VAR7.VAR11 = VAR12;
VAR7.VAR6 = &VAR6;

if (FUN2(VAR2->VAR13, VAR14, &VAR7) == -1) {
FUN3(VAR15, "",
VAR2->VAR16, VAR2->VAR13, strerror(VAR17));
return false;
}
*VAR5 = VAR6.VAR18;
FUN3(VAR19, "", VAR2->VAR16, VAR3, *VAR5);
return true;
}