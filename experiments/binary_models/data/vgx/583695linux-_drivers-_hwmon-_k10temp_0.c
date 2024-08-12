static int FUN1(struct VAR1 *VAR2, enum hwmon_sensor_types VAR3,
u32 VAR4, int VAR5, long *VAR6)
{
switch (VAR3) {
case VAR7:
return FUN2(VAR2, VAR4, VAR5, VAR6);
default:
return -VAR8;
}
}