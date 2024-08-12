}
FUN1(VAR1);


int
FUN2(const struct VAR2 *VAR3, int VAR4)
{
int VAR5, VAR6 = 0;

for (VAR5 = 0; VAR5 < VAR4; VAR5++, VAR3++) {
if (VAR3->VAR6)
VAR6 += FUN3(VAR3->VAR6);
else if (VAR7[VAR3->VAR8])
VAR6 += FUN3(VAR7[VAR3->VAR8]);
}

return VAR6;
}