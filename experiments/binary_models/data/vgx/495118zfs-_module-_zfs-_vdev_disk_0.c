static VAR1 *
FUN1(int VAR2)
{
VAR1 *VAR3;
int VAR4;

VAR3 = FUN2(sizeof (VAR1) +
sizeof (struct VAR5 *) * VAR2, VAR6);
if (VAR3) {
FUN3(&VAR3->VAR7, 0);
VAR3->VAR8 = VAR2;
VAR3->VAR9 = 0;

for (VAR4 = 0; VAR4 < VAR3->VAR8; VAR4++)
VAR3->VAR10[VAR4] = NULL;
}

return (VAR3);
}