static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5, VAR6;

VAR6 = 0;
for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
VAR4 = VAR2->VAR8[VAR5].VAR4;
if (VAR4->VAR9 > VAR10 &&
FUN2(VAR4) > 0)
return 0;
if (VAR4->VAR9 <= VAR10 &&
FUN3(VAR4) >
VAR11)
VAR6 = 1;
}
return VAR6 && !VAR2->VAR12;
}