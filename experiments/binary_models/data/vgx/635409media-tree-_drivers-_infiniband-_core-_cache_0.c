static int FUN1(struct VAR1 *VAR2)
{
u8 VAR3;
struct VAR4 *VAR5;
int VAR6 = 0;

for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++) {
u8 VAR8 = VAR3 + FUN2(VAR2);

VAR5 =
FUN3(
VAR2->VAR9[VAR8].VAR10);
if (!VAR5) {
VAR6 = -VAR11;
goto VAR12;
}

VAR6 = FUN4(VAR2,
VAR3 + FUN2(VAR2),
VAR5);
if (VAR6)
goto VAR12;
VAR2->VAR13.VAR14[VAR3].VAR15 = VAR5;
}

return 0;

VAR12:
for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++) {
VAR5 = VAR2->VAR13.VAR14[VAR3].VAR15;

FUN5(VAR2, VAR3 + FUN2(VAR2),
VAR5);
FUN6(VAR5);
}

return VAR6;
}