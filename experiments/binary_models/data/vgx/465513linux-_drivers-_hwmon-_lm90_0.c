static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
bool VAR6 = (VAR2->VAR7 & VAR8) &&
(VAR5->VAR7 & VAR9);
int VAR10;

if (VAR6) {
VAR10 = FUN3(VAR2, VAR3);
if (VAR10)
return VAR10;
return FUN4(VAR2);
}
return FUN5(VAR2, VAR3);
}