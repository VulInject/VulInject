static int
FUN1(VAR1 *VAR2, int VAR3, uintptr_t VAR4)
{
VAR5 *VAR6 = VAR7;
int VAR8 = 0;
uintptr_t VAR9;
volatile VAR10 *VAR11 =
(volatile VAR10 *)&VAR12[VAR13->VAR14].VAR15;

FUN2(VAR2 == NULL || VAR3 > 0);
FUN2(VAR16 > 0);

if (VAR6->VAR17 == VAR18) {
for (;;) {
struct VAR19 *VAR20 = (struct VAR19 *)(VAR4 + VAR21);
uintptr_t VAR22;

if (VAR4 == 0 || VAR20 == NULL ||
!FUN3((VAR23)VAR20, VAR24))
break;

VAR9 = VAR4;

VAR22 = FUN4(&VAR20->VAR25);
VAR4 = FUN4(&VAR20->VAR26);

if (VAR22 == 0)
break;


if (VAR4 == VAR9 || VAR8++ >= VAR16) {
*VAR11 |= VAR27;
VAR12[VAR13->VAR14].VAR28 = VAR4;
break;
}

if (VAR2 != NULL) {
*VAR2++ = VAR22;
VAR3--;
if (VAR3 == 0)
break;
}
}
} else {

VAR4 = (VAR29)VAR4;

for (;;) {
struct VAR30 *VAR20 = (struct VAR30 *)VAR4;
uint32_t VAR22;

if (VAR4 == 0 ||
!FUN3((VAR23)VAR20, VAR31))
break;

VAR9 = VAR4;

VAR22 = FUN5(&VAR20->VAR25);
VAR4 = FUN5(&VAR20->VAR26);

if (VAR22 == 0)
break;

if (VAR4 == VAR9 || VAR8++ >= VAR16) {
*VAR11 |= VAR27;
VAR12[VAR13->VAR14].VAR28 = VAR4;
break;
}

if (VAR2 != NULL) {
*VAR2++ = VAR22;
VAR3--;
if (VAR3 == 0)
break;
}
}
}

return (VAR8);
}