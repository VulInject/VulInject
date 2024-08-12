static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5, VAR6;

if (!VAR4->VAR7)
return FUN3(VAR2, 0);

for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++) {
VAR6 = FUN3(VAR2, VAR5 + 1);
if (VAR6)
goto VAR9;
}
return 0;

VAR9:
FUN4(VAR2);
return VAR6;
}