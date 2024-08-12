static VAR1 *FUN1(void)
{
VAR1 *VAR2;
int VAR3;

VAR2 = FUN2(VAR4, sizeof(VAR1), VAR5);
if (!VAR2)
return NULL;

for (VAR3 = 0; VAR3 < VAR4; VAR3++) {
if (!FUN3(&VAR2[VAR3], VAR5))
goto VAR6;
}

return VAR2;

VAR6:
while (--VAR3 >= 0)
FUN4(VAR2[VAR3]);
FUN5(VAR2);
return NULL;
}