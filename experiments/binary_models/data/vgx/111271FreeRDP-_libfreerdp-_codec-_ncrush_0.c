void FUN1(VAR1* VAR2, BOOL VAR3)
{
FUN2(VAR2);

FUN3(&(VAR2->VAR4), sizeof(VAR2->VAR4));
FUN3(&(VAR2->VAR5), sizeof(VAR2->VAR5));
FUN3(&(VAR2->VAR6), sizeof(VAR2->VAR6));
FUN3(&(VAR2->VAR7), sizeof(VAR2->VAR7));

if (VAR3)
VAR2->VAR8 = VAR2->VAR9 + 1;
else
VAR2->VAR8 = 0;

VAR2->VAR10 = &(VAR2->VAR4[VAR2->VAR8]);
}