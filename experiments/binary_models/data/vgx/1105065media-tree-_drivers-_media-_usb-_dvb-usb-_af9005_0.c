int FUN1(struct VAR1 *VAR2, u16 VAR3, u8 VAR4,
u8 VAR5, u8 VAR6)
{
u8 VAR7, VAR8;
int VAR9;
FUN2("", VAR3, VAR4, VAR5, VAR6);
if (VAR4 == 0 && VAR5 == 8)
return FUN3(VAR2, VAR3, VAR6);
VAR9 = FUN4(VAR2, VAR3, &VAR7);
if (VAR9)
return VAR9;
VAR8 = VAR10[VAR5 - 1] << VAR4;
VAR7 = (VAR7 & ~VAR8) | ((VAR6 << VAR4) & VAR8);
return FUN3(VAR2, VAR3, VAR7);

}