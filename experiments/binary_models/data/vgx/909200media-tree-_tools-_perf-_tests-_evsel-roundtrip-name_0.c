int FUN1(int subtest VAR1)
{
int VAR2 = 0, VAR3 = 0;

VAR2 = FUN2(VAR4);
if (VAR2)
VAR3 = VAR2;

VAR2 = FUN3(VAR5,
VAR6 + 1);
if (VAR2)
VAR3 = VAR2;

VAR2 = FUN4();
if (VAR2)
VAR3 = VAR2;

return VAR3;
}