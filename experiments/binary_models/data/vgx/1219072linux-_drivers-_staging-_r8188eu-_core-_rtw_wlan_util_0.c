VAR1 FUN1(struct VAR2 *VAR3, unsigned char *VAR4, int VAR5)
{
u8 VAR6 = 0;
struct VAR7	*VAR8 = &VAR3->VAR9;
struct VAR10	*VAR11 = &VAR8->VAR12;

if (VAR8->VAR13 > 14) {
VAR6 |= VAR14;
} else {
if (VAR11->VAR15)
VAR6 = VAR16;

if (FUN2(VAR4, VAR5))
VAR6 |= VAR17;
else if (FUN3(VAR4, VAR5))
VAR6 |= VAR18;
else
VAR6 |= VAR19;
}
return	VAR6;
}