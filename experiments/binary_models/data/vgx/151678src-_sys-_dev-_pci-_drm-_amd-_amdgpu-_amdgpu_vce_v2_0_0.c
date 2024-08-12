static int FUN1(void *VAR1)
{
int VAR2, VAR3;
struct VAR4 *VAR5 = (struct VAR4 *)VAR1;

FUN2(VAR5, 10000, 10000);
FUN3(VAR5, true, false);

for (VAR3 = 0; VAR3 < VAR5->VAR6.VAR7; VAR3++) {
VAR2 = FUN4(&VAR5->VAR6.VAR8[VAR3]);
if (VAR2)
return VAR2;
}

FUN5("");

return 0;
}