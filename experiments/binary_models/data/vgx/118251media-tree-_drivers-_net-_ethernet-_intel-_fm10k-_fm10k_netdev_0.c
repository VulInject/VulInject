static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4 = 0;

for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {
VAR4 = FUN2(VAR2->VAR6[VAR3]);
if (!VAR4)
continue;

FUN3(VAR2, VAR7, VAR2->VAR8,
"", VAR3);
goto VAR9;
}

return 0;
VAR9:

while (VAR3--)
FUN4(VAR2->VAR6[VAR3]);
return VAR4;
}