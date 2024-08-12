static int
FUN1(struct VAR1 *VAR2,
u8 VAR3, u8 VAR4, u8 VAR5)
{
int VAR6;
u8 VAR7;

VAR6 = FUN2(VAR2, VAR3, &VAR7, sizeof(VAR7));
if (VAR6 < 0)
return VAR6;

VAR7 = ((VAR7 & ~VAR4) | (VAR5 << FUN3(VAR4) & VAR4));

return FUN4(VAR2, VAR3, &VAR7, sizeof(VAR7));
}