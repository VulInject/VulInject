static int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4, int VAR5)
{
bool VAR6;
int VAR7;

VAR6 = VAR8.VAR9 == false;

if (VAR6) {
VAR7 = FUN2(VAR2);
if (VAR7)
return VAR7;
}

VAR7 = FUN3(VAR4, VAR5);

if (VAR6)
FUN4(VAR2);

return VAR7;
}