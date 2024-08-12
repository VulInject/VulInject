FUN1 (mallocPool VAR1, mallocType_ type VAR2,
void *VAR3, mallocSize s VAR2)
{
mallocArea_ VAR4;

if (VAR1 == NULL)
VAR1 = FUN2 ();

assert ((VAR1 == FUN2 ())
|| FUN3 (VAR1, FUN2 ()));

VAR4 = FUN4 (VAR1, VAR3);
assert (VAR4->VAR5 == VAR5);
if ((VAR5 != VAR6) && (VAR5 != VAR7))
assert (VAR4->VAR8 == VAR9);
FUN5 (VAR1, VAR4);
}