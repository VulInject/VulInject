static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
unsigned long VAR6, VAR7;
unsigned int VAR8;

FUN2(&VAR5->VAR9, VAR7);

VAR6 = VAR5->VAR10;


FUN3(VAR5->VAR11,
&VAR5->VAR12,
&VAR5->VAR13,
&VAR5->VAR10);

FUN4(VAR14, "",
VAR6, VAR5->VAR10, VAR5->VAR12, VAR5->VAR13);

VAR8 = 0;

if (VAR5->VAR15.VAR16 == VAR17 &&
VAR5->VAR10 == VAR18) {
VAR5->VAR19 = VAR20;
FUN5(VAR5, VAR21);

VAR8 |= VAR22;

VAR6 = VAR5->VAR10;
}


if (VAR5->VAR7 & VAR23) {
(void) FUN6(VAR5, VAR5->VAR13);
goto VAR24;
}


if (VAR5->VAR19 == VAR20) {
VAR25:
if (VAR5->VAR10 != VAR6) {
unsigned int VAR26 = VAR27;

if (VAR5->VAR10 == VAR18)
VAR26 = VAR22;

VAR8 |= VAR26;
}
if (VAR5->VAR12 != VAR5->VAR13)
VAR8 |= VAR28;

goto VAR24;
}

if (VAR5->VAR10 != VAR6)
goto VAR24;

while (VAR5->VAR12 != VAR5->VAR13) {
struct VAR29 *VAR30;
unsigned long new;
int VAR31;

VAR30 = VAR5->VAR32 + (VAR5->VAR12 / VAR33);

switch (VAR30->VAR34) {
case VAR35:
VAR31 = FUN7(VAR5, VAR30);
if (VAR31 > 0)
VAR8 |= VAR31;
break;

case VAR36:
VAR8 |= VAR28;
VAR31 = 0;
break;

case VAR37:
VAR31 = FUN8(VAR5, VAR30);
break;

default:
VAR31 = FUN9(VAR5);
break;
}

if (VAR31 < 0)
break;

new = VAR5->VAR12;
new += VAR33;
if (new == (VAR5->VAR38 * VAR33))
new = 0;
VAR5->VAR12 = new;

VAR31 = FUN6(VAR5, new);
if (VAR31 < 0) {
(void) FUN9(VAR5);
break;
}
if (VAR5->VAR19 == VAR20)
goto VAR25;
}

VAR24:
FUN10(&VAR5->VAR9, VAR7);

FUN11(VAR5, VAR8);

return VAR39;
}