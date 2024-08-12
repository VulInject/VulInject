bool FUN1(struct VAR1 *VAR2, void *VAR3,
VAR4 *VAR5, VAR6 *VAR7)
{
u16 VAR8;
u64 VAR9;

VAR9 = sizeof(*VAR2);
if ((void *)VAR2 + VAR9 > VAR3)
return false;

VAR8 = VAR2->VAR10;


if (FUN2(FUN3(VAR8) < VAR11, 0))
return false;


if (VAR8 == FUN4(VAR12) ||
VAR8 == FUN4(VAR13)) {
struct VAR14 *VAR14;

VAR14 = (void *)VAR2 + VAR9;
VAR9 += sizeof(*VAR14);
if ((void *)VAR2 + VAR9 > VAR3)
return false;
VAR8 = VAR14->VAR15;
}

if (VAR8 == FUN4(VAR12) ||
VAR8 == FUN4(VAR13)) {
struct VAR14 *VAR14;

VAR14 = (void *)VAR2 + VAR9;
VAR9 += sizeof(*VAR14);
if ((void *)VAR2 + VAR9 > VAR3)
return false;
VAR8 = VAR14->VAR15;
}

*VAR5 = FUN3(VAR8);
*VAR7 = VAR9;
return true;
}