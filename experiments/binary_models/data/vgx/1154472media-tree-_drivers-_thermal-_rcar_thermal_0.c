static int FUN1(struct VAR1 *VAR2,
int VAR3, enum thermal_trip_type VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6);

switch (VAR4) {
case VAR9:

FUN4(VAR8, "");
break;
default:
break;
}

return 0;
}

static const struct thermal_zone_of_device_ops VAR10 = {
.VAR11	= VAR12,
};