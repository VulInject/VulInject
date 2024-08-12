VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
u32 VAR6;
char *VAR7;
GF_Err VAR8;

if (!VAR3 || !VAR5 || !VAR5->VAR9) return VAR10;


if (VAR5->VAR9 > VAR3->VAR9) return VAR10;

VAR8 = FUN2(VAR3, VAR5, (unsigned char **) &VAR7, &VAR6);
if (!VAR8) {
FUN3(VAR11, VAR12, ("", VAR7));

VAR8 = FUN4(VAR3, VAR7, VAR6);
}
if (VAR7) FUN5(VAR7);
return VAR8;
}