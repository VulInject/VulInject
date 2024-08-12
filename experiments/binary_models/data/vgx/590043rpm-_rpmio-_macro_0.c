static void FUN1(MacroBuf VAR1, char VAR2)
{
if (VAR1->VAR3 < 1) {
VAR1->VAR4 = xrealloc(VAR1->VAR4, VAR1->VAR5 + VAR6 + 1);
VAR1->VAR3 += VAR6;
}
VAR1->VAR4[VAR1->VAR5++] = VAR2;
VAR1->VAR4[VAR1->VAR5] = '';
VAR1->VAR3--;
}