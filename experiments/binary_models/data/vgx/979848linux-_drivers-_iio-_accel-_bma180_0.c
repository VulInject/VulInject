static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
u8 VAR4 = VAR3 ? VAR2->VAR5->VAR6 : 0;
int VAR7 = FUN2(VAR2, VAR2->VAR5->VAR8,
VAR2->VAR5->VAR9, VAR4);

if (VAR7) {
FUN3(&VAR2->VAR10->VAR11, "");
return VAR7;
}
VAR2->VAR12 = VAR3;

return 0;
}