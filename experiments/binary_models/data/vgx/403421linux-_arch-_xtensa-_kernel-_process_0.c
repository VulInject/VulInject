static void FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR2 **VAR4;
unsigned long VAR5;
int VAR6;

VAR4 = FUN2(&VAR7)->VAR4;
VAR5 = FUN3(VAR3->VAR8, VAR8);

for (VAR6 = 0; VAR6 < VAR9; VAR6++) {
if (VAR4[VAR6] == VAR3)
FUN4(VAR3, VAR6);
}
FUN5(VAR5, VAR8);
}