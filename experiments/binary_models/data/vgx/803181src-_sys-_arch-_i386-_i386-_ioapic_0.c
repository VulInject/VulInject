void
FUN1(struct VAR1 *VAR2, int VAR3)
{
u_int32_t VAR4;
u_int32_t VAR5 = 0;
int VAR6;

struct VAR7 *VAR8;
struct VAR9 *VAR10;

VAR8 = &VAR2->VAR11[VAR3];
VAR10 = VAR8->VAR12;
VAR4 = (VAR10 == NULL) ? VAR13 : VAR10->VAR14;
VAR6 = (VAR4 & VAR15) >> VAR16;


if ((VAR6 != 0) && (VAR6 != 1))
;
else if (VAR8->VAR17 == NULL) {
VAR4 |= VAR13;
} else {
VAR4 |= (VAR8->VAR18 & 0xff);
VAR4 &= ~VAR15;
VAR4 |= (VAR19 << VAR16);
VAR4 &= ~VAR20;


VAR5 |= (VAR21 << VAR22);


if (VAR8->VAR23 == VAR24)
VAR4 |= VAR25;
else
VAR4 &= ~VAR25;
if (VAR10 != NULL && ((VAR10->VAR26 & 3) == VAR27)) {
if (VAR8->VAR23 == VAR24)
VAR4 |= VAR28;
else
VAR4 &= ~VAR28;
}
}

FUN2(VAR2, FUN3(VAR3), VAR13);
FUN2(VAR2, FUN4(VAR3), VAR5);
FUN2(VAR2, FUN3(VAR3), VAR4);
if (VAR29)
FUN5(VAR2, "", VAR3);
}