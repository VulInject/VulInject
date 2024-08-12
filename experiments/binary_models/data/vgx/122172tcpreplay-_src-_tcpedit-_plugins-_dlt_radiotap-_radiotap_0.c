int
FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int VAR5)
{
int VAR6, VAR7;
VAR3 *VAR8;

VAR6 = FUN2(VAR2, VAR4, VAR5);
if (VAR6 == -1)
return VAR9;

VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
VAR7 = FUN4(VAR2, VAR8, VAR5 - VAR6);
if (VAR7 == -1)
return VAR9;

VAR6 += VAR7;
return VAR6;
}