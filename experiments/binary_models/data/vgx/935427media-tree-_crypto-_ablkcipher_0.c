static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
unsigned int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
unsigned long VAR8 = FUN3(VAR2);

if (VAR5 < VAR7->VAR9 || VAR5 > VAR7->VAR10) {
FUN4(VAR2, VAR11);
return -VAR12;
}

if ((unsigned long)VAR4 & VAR8)
return FUN5(VAR2, VAR4, VAR5);

return VAR7->FUN1(VAR2, VAR4, VAR5);
}