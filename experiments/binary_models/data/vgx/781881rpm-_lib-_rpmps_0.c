void FUN1(rpmps VAR1, rpmProblem VAR2)
{
if (VAR1 == NULL || VAR2 == NULL) return;

if (VAR1->VAR3 == VAR1->VAR4) {
if (VAR1->VAR4)
VAR1->VAR4 *= 2;
else
VAR1->VAR4 = 2;
VAR1->VAR5 = xrealloc(VAR1->VAR5,
VAR1->VAR4 * sizeof(*VAR1->VAR5));
}

VAR1->VAR5[VAR1->VAR3] = FUN2(VAR2);
VAR1->VAR3++;
}