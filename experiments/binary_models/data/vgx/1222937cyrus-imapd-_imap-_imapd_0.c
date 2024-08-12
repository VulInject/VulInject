static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR3;


if (VAR2 && !VAR6
&& (!(VAR5->VAR7->VAR8 & VAR9) || !FUN2(VAR10))
&& FUN3(VAR2->VAR11))
return 0;

if (!VAR2) {
if (!(VAR5->VAR12 & VAR13))
VAR5->VAR12 |= VAR14;
FUN4(NULL, NULL, VAR5);
return 0;
}
size_t VAR15 = (VAR5->VAR16 ? strlen(VAR5->VAR16) : 0);
const char *VAR17 = VAR2->VAR17;
int VAR18 =
VAR5->VAR16
&& strlen(VAR17) >= VAR15
&& VAR17[VAR15] == VAR19.VAR20
&& !memcmp(VAR5->VAR16, VAR17, VAR15);

VAR21++;


if (VAR18 || (VAR5->VAR16 && !VAR2->VAR22 && !strcmp(VAR5->VAR16, VAR17)))
VAR5->VAR12 |= VAR13;

else if (!(VAR5->VAR12 & VAR13))
VAR5->VAR12 |= VAR14;


if ((VAR5->VAR7->VAR8 & VAR23) &&
((VAR5->VAR7->VAR8 & VAR24) ||
!FUN5(VAR2->VAR25->VAR26)) &&
!FUN6(VAR2->VAR17, VAR5->VAR16)) {

FUN7(VAR2->VAR17, VAR5);
}

if (!FUN4(VAR2->VAR17, VAR2->VAR25, VAR5))
return 0;

if (!VAR2->VAR22)
VAR5->VAR12 |= VAR13 | VAR27;

else if (FUN8(VAR2, VAR5))
VAR5->VAR12 |= VAR28;

return 0;
}