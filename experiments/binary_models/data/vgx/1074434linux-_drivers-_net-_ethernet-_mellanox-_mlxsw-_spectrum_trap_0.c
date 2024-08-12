static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2 = FUN2(VAR1->VAR3);
const struct VAR4 *VAR5;
struct VAR6 *VAR7 = VAR1->VAR7;
int VAR8, VAR9;

VAR8 = FUN3(VAR1);
if (VAR8)
return VAR8;

for (VAR9 = 0; VAR9 < VAR7->VAR10; VAR9++) {
VAR5 = &VAR7->VAR11[VAR9];
VAR8 = FUN4(VAR2,
&VAR5->VAR12, 1);
if (VAR8)
goto VAR13;
}

return 0;

VAR13:
for (VAR9--; VAR9 >= 0; VAR9--) {
VAR5 = &VAR7->VAR11[VAR9];
FUN5(VAR2,
&VAR5->VAR12, 1);
}
FUN6(VAR1);
return VAR8;
}