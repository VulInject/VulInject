FUN1 (struct VAR1 *VAR2,
caddr_t VAR3, struct VAR4 *VAR5)
{
caddr_t VAR6, VAR7 = NULL;
int VAR8;

VAR8 = (FUN2 (VAR9, VAR2) ?
sizeof (struct VAR10) :
sizeof (struct VAR11));
for (VAR6 = FUN3 (VAR2->VAR12) + 4;
VAR6 + VAR8 <= FUN4 (VAR2->VAR12); VAR6 += VAR8)
{
assert (! (FUN2 (VAR13, VAR2) &&
FUN5 (VAR13, VAR5)));

if (FUN2 (VAR13, VAR2) &&
FUN6 (VAR6)
== VAR5->VAR2->VAR12->VAR14)
VAR7 = VAR6;
else if (FUN5 (VAR13, VAR5) &&
FUN7 (VAR15, VAR6) &&
FUN8 (VAR6)
== VAR5->VAR2->VAR12->VAR14 &&
FUN9 (VAR6)
== FUN10 (VAR5->VAR2->VAR12->VAR16))
VAR7 = VAR6;
else
{
if (! FUN7 (VAR17, VAR6) ||
! FUN7 (VAR17, VAR3))
continue;
if (FUN9 (VAR6) !=
FUN11 (VAR3) ||
FUN9 (VAR3) !=
FUN11 (VAR6))
continue;
if (FUN8 (VAR6) !=
VAR5->VAR2->VAR12->VAR14 ||
FUN8 (VAR3) !=
VAR2->VAR12->VAR14)
continue;
VAR7 = VAR6;
}
}

if (FUN12 (VAR18))
FUN13 ("", (VAR7 ? "" : ""));

return VAR7;
}