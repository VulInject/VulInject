static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = FUN2(VAR2);
struct VAR3 *VAR6 = VAR5->VAR7.VAR4;
int VAR8, VAR9;

for (VAR9 = 0; VAR9 < VAR10; VAR9++) {
VAR8 = FUN3(VAR5,
VAR11,
VAR9, 0,
VAR4->VAR12[VAR9], 0);
if (VAR8) {
FUN4(VAR2, "", VAR9);
goto VAR13;
}
}

memcpy(VAR5->VAR7.VAR4, VAR4, sizeof(*VAR4));

return 0;

VAR13:
for (VAR9--; VAR9 >= 0; VAR9--)
FUN3(VAR5,
VAR11,
VAR9, 0,
VAR6->VAR12[VAR9], 0);
return VAR8;
}