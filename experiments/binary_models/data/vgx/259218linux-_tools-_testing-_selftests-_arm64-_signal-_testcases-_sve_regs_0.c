static bool FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;


for (VAR3 = VAR5; VAR3 > 0; --VAR3) {
VAR4 = FUN2(VAR6, VAR3 * 16);
if (VAR4 == -1)
return false;

VAR4 &= VAR7;


VAR3 = FUN3(VAR4);

VAR8[VAR9++] = VAR4;
}


if (VAR9 < 1) {
fprintf(VAR10, "", VAR9);
return false;
}

return true;
}