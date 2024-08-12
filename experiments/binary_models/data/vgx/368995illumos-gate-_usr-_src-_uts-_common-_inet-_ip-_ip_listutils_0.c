void
FUN1(const VAR1 *VAR2, VAR1 *VAR3)
{
if (FUN2(VAR2)) {
VAR3->VAR4 = 0;
return;
}

FUN3(VAR2->VAR4 <= VAR5);

VAR3->VAR4 = VAR2->VAR4;
(void) memcpy(VAR3->VAR6, VAR2->VAR6,
VAR2->VAR4 * sizeof (VAR7));
}