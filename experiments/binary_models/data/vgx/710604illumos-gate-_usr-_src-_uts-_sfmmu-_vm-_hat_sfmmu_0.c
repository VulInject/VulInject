void
FUN1(struct VAR1 *VAR1, caddr_t VAR2, size_t VAR3, pfn_t VAR4,
uint_t VAR5, int VAR6)
{
tte_t VAR7;
struct VAR8 *VAR9 = NULL;
int VAR10 = 0;

FUN2(VAR1 != NULL);

FUN2(!(VAR6 & ~VAR11));
FUN2(!(VAR5 & ~VAR12));
FUN2((VAR1 == VAR13) || FUN3(VAR1->VAR14));
if (VAR3 == 0)
FUN4("");
if (VAR6 & ~VAR11)
FUN5(VAR15, "",
VAR6 & ~VAR11);

if ((VAR1 != VAR13) && FUN6(VAR1->VAR14) &&
(VAR2 < VAR16) && (VAR5 & VAR17) &&
!(VAR6 & VAR18)) {
FUN5(VAR19, ""
"");
VAR5 &= ~VAR17;
}


if (!(VAR6 & VAR20) && FUN7(VAR4)) {
VAR9 = FUN8(VAR4);
if (VAR9 == NULL) {
VAR6 |= VAR20;
} else {
if (FUN9(VAR9)) {
FUN4(""
"",
(void *)VAR9);
}
if (!FUN10(VAR9) && !FUN11(VAR9)) {
FUN4(""
"",
(void *)VAR9);
}
FUN2(VAR3 == VAR21);
}
}

if (VAR1->VAR22)
FUN12(VAR3, VAR1->VAR14, VAR2);

if (VAR6 & VAR20) {
VAR5 |= VAR23;
VAR10 = 1;
}
if (!FUN7(VAR4)) {
VAR5 |= VAR24 | VAR25;
VAR10 = 1;
switch (VAR5 & VAR26) {
case VAR27:
case VAR28:

VAR5 |= VAR29;
break;
case VAR30:
case VAR31:
case VAR32:
break;
default:
FUN4("");
break;
}
}
while (VAR3) {
if (!VAR10) {
FUN13(&VAR7, VAR4, VAR5, VAR33);
(void) FUN14(VAR1, &VAR7, VAR2, &VAR9,
VAR6, VAR34);
VAR3 -= VAR21;
VAR2 += VAR21;
VAR4++;
continue;
}

if ((VAR3 >= VAR35) &&
!((VAR36)VAR2 & VAR37) &&
!(VAR38 & (1 << VAR39)) &&
!(FUN15(VAR4) & VAR37)) {
FUN13(&VAR7, VAR4, VAR5, VAR39);
(void) FUN14(VAR1, &VAR7, VAR2, &VAR9,
VAR6, VAR34);
VAR3 -= VAR35;
VAR2 += VAR35;
VAR4 += VAR35 / VAR21;
} else if ((VAR3 >= VAR40) &&
!((VAR36)VAR2 & VAR41) &&
!(VAR38 & (1 << VAR42)) &&
!(FUN15(VAR4) & VAR41)) {
FUN13(&VAR7, VAR4, VAR5, VAR42);
(void) FUN14(VAR1, &VAR7, VAR2, &VAR9,
VAR6, VAR34);
VAR3 -= VAR40;
VAR2 += VAR40;
VAR4 += VAR40 / VAR21;
} else if ((VAR3 >= VAR43) &&
!((VAR36)VAR2 & VAR44) &&
!(VAR38 & (1 << VAR45)) &&
!(FUN15(VAR4) & VAR44)) {
FUN13(&VAR7, VAR4, VAR5, VAR45);
(void) FUN14(VAR1, &VAR7, VAR2, &VAR9,
VAR6, VAR34);
VAR3 -= VAR43;
VAR2 += VAR43;
VAR4 += VAR43 / VAR21;
} else {
FUN13(&VAR7, VAR4, VAR5, VAR33);
(void) FUN14(VAR1, &VAR7, VAR2, &VAR9,
VAR6, VAR34);
VAR3 -= VAR21;
VAR2 += VAR21;
VAR4++;
}
}


if ((VAR6 & VAR18) == 0) {
FUN16(VAR1, 1);
}
}