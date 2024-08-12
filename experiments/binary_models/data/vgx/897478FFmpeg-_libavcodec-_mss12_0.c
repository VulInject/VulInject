static void FUN1(VAR1 *VAR2)
{
int VAR3, VAR4;

if (!VAR2->VAR5)
for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
VAR2->VAR7[VAR3] = VAR3;
else {
VAR2->VAR7[0] = 1;
VAR2->VAR7[1] = 2;
VAR2->VAR7[2] = 4;
}

FUN2(&VAR2->VAR8);
FUN2(&VAR2->VAR9);

for (VAR3 = 0; VAR3 < 15; VAR3++)
for (VAR4 = 0; VAR4 < 4; VAR4++)
FUN2(&VAR2->VAR10[VAR3][VAR4]);
}