static void
FUN1()
{
struct VAR1 *VAR1;
struct VAR2 *VAR3;
extern struct irongate_config VAR4;

VAR3 = &VAR4;
FUN2(VAR3, 0);

VAR1 = (struct VAR1 *)(((VAR5)VAR6) + VAR6->VAR7);

switch (VAR1->VAR8) {
case VAR9: 


{

FUN3(160000000 / VAR10);

if (FUN4(&VAR3->VAR11, 0x3f8, VAR10,
VAR12,
(VAR13 & ~(VAR14 | VAR15)) | VAR16))
FUN5("");

break;
}

case VAR17:


(void) FUN6(&VAR3->VAR11, VAR18, VAR19, 0);

if (FUN7(VAR1->VAR20) ==
VAR21)
FUN8(&VAR3->VAR11, &VAR3->VAR22);
else
FUN9(&VAR3->VAR11, &VAR3->VAR22,
&VAR3->VAR23, FUN10(VAR1->VAR20),
FUN11(VAR1->VAR20), 0);
FUN5("");
break;

default:
FUN12("",
(unsigned long)VAR1->VAR8);
FUN12("",
(unsigned long)VAR1->VAR20);

FUN5("",
(unsigned long)VAR1->VAR8);
}
}