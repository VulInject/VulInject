VAR1 *
FUN1(uint_t VAR2, uint_t VAR3, uint64_t VAR4,
pgcnt_t VAR5)
{
VAR1 *VAR6, *VAR7 = NULL;
mfn_t VAR8, VAR9, VAR10;
pfn_t VAR11;
int VAR12, VAR13;
int VAR14;


VAR15:
FUN2(&VAR16);
if (VAR17 == NULL) {
FUN3(&VAR16);
if (!FUN4(VAR3)) {
return (NULL);
}
goto VAR15;
}
VAR18++;

VAR13 = VAR12 = VAR2;
VAR14 = VAR19;
VAR10 = VAR9 = 0;
while (VAR12) {
VAR11 = VAR17[VAR19];
VAR8 = FUN5(VAR11);

if ((VAR9 == 0 || VAR8 == VAR9 + 1) &&
(VAR6 = FUN6(VAR11)) != NULL &&
!((VAR8 & VAR4) < (VAR10 & VAR4))) {
FUN7(VAR6);
FUN8(&VAR7, VAR6);
VAR12--;
if (VAR9 == 0) {
if (VAR5 &&
VAR8 != FUN9(VAR8, VAR5)) {

VAR20++;
FUN10(&VAR7);
VAR12 = VAR13;
VAR10 = VAR9 = 0;
goto VAR21;
}
VAR10 = VAR8;
}
VAR9 = VAR8;
} else {
VAR20++;
FUN10(&VAR7);
VAR12 = VAR13;
VAR10 = VAR9 = 0;
}
VAR21:
if (++VAR19 == VAR22)
VAR19 = 0;
if (VAR19 == VAR14)
break; 
}
FUN3(&VAR16);
if (VAR12) {
VAR23++;

FUN10(&VAR7);
}
return (VAR7);
}