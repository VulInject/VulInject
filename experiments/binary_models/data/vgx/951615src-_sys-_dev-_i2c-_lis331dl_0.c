void
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5 = VAR3->VAR6;
int VAR7;

FUN2(VAR3->VAR8, 0);
for (VAR7 = 0; VAR7 < VAR9; VAR7++)
VAR5[VAR7].VAR10 = (VAR11)FUN3(VAR3, VAR12[VAR7].VAR13);
FUN4(VAR3->VAR8, 0);
}