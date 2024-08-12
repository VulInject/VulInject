static VAR1 FUN1(const void *VAR2, enum hwmon_sensor_types VAR3,
u32 VAR4, int VAR5)
{
if (VAR3 == VAR6 && VAR4 == VAR7)
return 0644;

if (VAR3 != VAR8)
return 0;

switch (VAR4) {
case VAR9:
case VAR10:
case VAR11:
return 0444;
case VAR12:
case VAR13:
case VAR14:
case VAR15:
return 0644;
default:
return 0;
}
}

static u32 VAR16[] = {
VAR17 | VAR18,
0
};