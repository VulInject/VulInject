void
FUN1(void)
{
int VAR1, VAR2, VAR3;

for(VAR1 = VAR2 = VAR3 = 0; VAR3 < VAR4; VAR3++) {
if (FUN2(VAR3))
VAR2++;
else if (VAR5[VAR3] != 0)
continue;
else
VAR1++;
}
(void) fprintf(VAR6, "", VAR1, 2 * VAR2);

(void) fprintf(VAR6, "", 2 * VAR1 + 2 * VAR2 + 2);
}