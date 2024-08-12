void
FUN1(void)
{
int VAR1;

fprintf(VAR2, "");
for (VAR1 = 0; VAR1 < VAR3; VAR1++) {
if (VAR4[VAR1] || VAR5[VAR1]) {
fprintf(VAR2, "", VAR1);
if (VAR4[VAR1] == 1)
fprintf(VAR2, "");
else if (VAR4[VAR1] > 1)
fprintf(VAR2, "",
VAR4[VAR1]);
if (VAR4[VAR1] && VAR5[VAR1])
fprintf(VAR2, "");
if (VAR5[VAR1] == 1)
fprintf(VAR2, "");
else if (VAR5[VAR1] > 1)
fprintf(VAR2, "",
VAR5[VAR1]);
fprintf(VAR2, "");
}
}
}