int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
int VAR4;
u8 VAR5 = 0;

if (VAR3 & VAR6)
VAR5 |= VAR7;
if (VAR3 & VAR8)
VAR5 |= VAR9;
if (VAR3 & VAR10)
VAR5 |= VAR11;

VAR4 = FUN2(VAR2, VAR12, VAR5, VAR5);
if (VAR4) {
FUN3(VAR2);
return VAR4;
}

return VAR13;
}