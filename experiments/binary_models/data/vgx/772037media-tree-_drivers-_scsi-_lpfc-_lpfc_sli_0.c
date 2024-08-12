void FUN1(struct VAR1 *VAR2)
{
uint32_t VAR3 *VAR4;
uint32_t VAR3 *VAR5;
volatile uint32_t VAR6;
uint32_t VAR7, VAR8, VAR9;
int  VAR10;
uint8_t VAR11;

FUN2(&VAR2->VAR12);

FUN3(VAR2->VAR13, VAR14, &VAR11);
if (VAR11 != 0x80 ||
(FUN4(VAR2->VAR15.VAR16.VAR17) != VAR18 &&
FUN4(VAR2->VAR15.VAR16.VAR17) != VAR19))
return;


VAR4 = VAR2->VAR20;


if (FUN5(VAR2->VAR21, &VAR7))
return;
FUN6((VAR7 & ~VAR22), VAR2->VAR21);
FUN7(VAR2->VAR21); 
VAR2->VAR23 |= VAR24;

if (FUN5(VAR2->VAR25, &VAR8))
return;
if (VAR8 & VAR26) {

FUN6(VAR26, VAR2->VAR25);
VAR2->VAR27->VAR28 = 1;
}

VAR6 = 0;
((VAR29 *)&VAR6)->VAR30 = VAR31;
((VAR29 *)&VAR6)->VAR32 = VAR33;

FUN6(VAR34, (VAR4 + 1));
VAR5 = VAR2->VAR20;
FUN6(VAR6, VAR5);

for (VAR10 = 0; VAR10 < 50; VAR10++) {
if (FUN5((VAR4 + 1), &VAR9))
return;
if (VAR9 != ~(VAR34))
FUN8(1);
else
break;
}
VAR9 = 0;
if (FUN5((VAR4 + 1), &VAR9))
return;
if (VAR9  != ~(VAR34)) {
if (VAR2->VAR35.VAR36 & VAR37 ||
VAR2->VAR27->VAR28)
goto VAR38;
else
goto VAR39;
}

((VAR29 *)&VAR6)->VAR32 = VAR40;
VAR9 = 0;
for (VAR10 = 0; VAR10 < 500; VAR10++) {
if (FUN5(VAR4, &VAR9))
return;
if (VAR9 != VAR6)
FUN8(1);
else
break;
}

VAR39:

while (++VAR10 < 500) {
if (FUN5(VAR2->VAR25, &VAR8))
return;
if (!(VAR8 & VAR26))
FUN8(1);
else
break;
}

if (FUN7(VAR2->VAR25) & VAR26) {
FUN6(VAR26, VAR2->VAR25);
VAR2->VAR27->VAR28 = 1;
}

VAR38:
VAR2->VAR23 &= ~VAR24;
FUN6(VAR7, VAR2->VAR21);
FUN7(VAR2->VAR21); 
}