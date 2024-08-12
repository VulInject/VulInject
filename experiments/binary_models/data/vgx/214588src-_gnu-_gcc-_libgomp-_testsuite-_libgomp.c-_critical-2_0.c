int main()
{
int VAR1[VAR2];
int VAR3;
int VAR4;

{
VAR3 = FUN1 ();

for (VAR4 = 0; VAR4 < VAR2; VAR4++)
VAR1[VAR4] = 0;

for (VAR4 = 0; VAR4 < VAR2; VAR4++)
VAR1[VAR4] += 1;
}

for (VAR4 = 0; VAR4 < VAR2; VAR4++)
if (VAR1[VAR4] != VAR3)
FUN2 ();

return 0;
}