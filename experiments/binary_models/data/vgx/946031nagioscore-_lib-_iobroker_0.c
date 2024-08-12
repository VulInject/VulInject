void FUN1(VAR1 *VAR2, int VAR3)
{
int VAR4;
int (*VAR5)(VAR1 *, int) = VAR6;

if (!VAR2)
return;

if (VAR3 & VAR7) {
VAR5 = VAR8;
}

if (VAR2->VAR9 >= 0)
close(VAR2->VAR9);
if (VAR2->VAR10)
free(VAR2->VAR10);

if (!VAR2->VAR11)
return;

for (VAR4 = 0; VAR4 < VAR2->VAR12; VAR4++) {
if (VAR2->VAR11[VAR4] == NULL)
continue;
FUN2(VAR2, VAR4);
}
free(VAR2->VAR11);
VAR2->VAR11 = NULL;
free(VAR2->VAR13);
close(VAR2->VAR9);
free(VAR2);
}