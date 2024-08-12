static unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{

while (VAR3 & VAR4) {

FUN2(VAR3);

if (VAR3 & VAR5)
FUN3();

if (VAR3 & VAR6)
FUN4(VAR2);

if (VAR3 & VAR7)
FUN5(VAR8);

if (VAR3 & (VAR9 | VAR10))
FUN6(VAR2);

if (VAR3 & VAR11)
FUN7(VAR2);


FUN8(VAR2, VAR3);


FUN9();


FUN10();

VAR3 = FUN11();
}


return VAR3;
}