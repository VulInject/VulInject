static int FUN1(struct VAR1 *VAR2, u8 VAR3, u8 VAR4,
VAR5 * VAR6, int VAR7)
{
int VAR8, VAR9;
u8 VAR10;
FUN2("", VAR3, VAR4, VAR7);
for (VAR9 = 0; VAR9 < VAR7; VAR9++) {
VAR10 = VAR4 + VAR9;
VAR8 =
FUN3(VAR2,
VAR11,
VAR3, &VAR10, 1);
if (VAR8) {
FUN2("");
return VAR8;
}
VAR6[VAR9] = VAR10;
}
FUN2("");
FUN4(VAR6, VAR7, VAR12);
return 0;
}