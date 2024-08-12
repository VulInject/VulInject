static int FUN1(struct VAR1 *VAR1, VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1->VAR6;
int VAR7, VAR8;

*VAR3 = 0;
for (VAR8 = 0; VAR8 < 8; VAR8++) {
VAR7 = FUN2(VAR5->VAR9[VAR8]);
if (VAR7 < 0)
return VAR7;
if (VAR7)
*VAR3 |= FUN3(VAR8);
}

return 0;
}