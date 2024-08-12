static int FUN1(struct VAR1 *VAR2,
u8 VAR3, struct VAR4 *VAR5, int VAR6)
{
int VAR7, VAR8;

for (VAR7 = 0; VAR7 < VAR6; VAR7++) {
VAR8 = FUN2(VAR2, VAR3, VAR5[VAR7].VAR9,
VAR5[VAR7].VAR10);
if (VAR8 < 0)
return VAR8;
}
return 0;
}