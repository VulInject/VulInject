void
FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
int VAR4, VAR5, VAR6;

FUN2("");
while (VAR2->VAR7 != VAR2->VAR8)
VAR2 = VAR2->VAR9;
VAR3 = VAR2;
do {
if ((VAR3->VAR10&(VAR11|VAR12)) == VAR12)
FUN3("");
} while ((VAR3 = VAR3->VAR9) != VAR2);

VAR3 = VAR2;
VAR6 = FUN4(FUN5(VAR13));
for (;;) {
VAR4 = 0;
do
VAR4 |= VAR3->VAR10;
while ((VAR3 = (VAR3->VAR9)) != VAR2);
if ((VAR4 & VAR12) == 0)
break;

if (FUN6() > 0)
FUN7();	
}
(void) FUN8(VAR6);
if (VAR14 > 0)			
(void) FUN9(VAR15, VAR16,  (char *)&VAR14);
if ((VAR4&(VAR17|VAR18|VAR19)) ||
!FUN10(VAR20->VAR21, VAR3->VAR22->VAR21)) {
if (VAR4&VAR18)
FUN3("");
(void) FUN11(VAR2, VAR23|VAR24);
}
if ((VAR4&(VAR25|VAR18)) && VAR26 &&
(!VAR27 || !FUN10(VAR27, VAR28 ))) {
if ((VAR4 & VAR18) == 0)
FUN12(VAR2);
FUN13(0);

}
VAR5 = 0;
VAR3 = VAR2;
do {
if (VAR3->VAR29)
VAR5 = VAR3->VAR10 & (VAR17|VAR25) ?
VAR3->VAR29 | VAR30 : VAR3->VAR29;
} while ((VAR3 = VAR3->VAR9) != VAR2);
FUN14(VAR31 , FUN15(VAR5));
if (VAR5 && VAR32)
FUN16();
FUN12(VAR2);
}