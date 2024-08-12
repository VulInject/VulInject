static VAR1 FUN1(const struct VAR2 *VAR3, u32 VAR4,
int VAR5)
{
umode_t VAR6 = 0444;

switch (VAR4) {
case VAR7:
case VAR8:
case VAR9:
if (VAR5 > 0 && !(VAR3->VAR10 & FUN2(VAR5 - 1)))
VAR6 = 0;
break;
default:
break;
}

return VAR6;
}