static int FUN1(VAR1 *VAR2, const char *VAR3) {
sd_device_action_t VAR4;

assert(VAR2);
assert(VAR3);

VAR4 = FUN2(VAR3);
if (VAR4 < 0)
return VAR4;

return FUN3(VAR2, VAR4);
}