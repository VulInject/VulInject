int FUN1(void)
{
void VAR1 *VAR2;
enum ath79_soc_type VAR3 = VAR4;
u32 VAR5, VAR6, VAR7 = 0;
u32 VAR8 = 0, VAR9 = 1;
int VAR10;

VAR2 = FUN2(VAR11, VAR12,
VAR13);

VAR5 = FUN3(VAR2 + VAR14);
VAR6 = VAR5 & VAR15;
switch (VAR6) {
case VAR16:
case VAR17:
VAR7 = VAR5 & VAR18;
VAR8 = VAR5 >> VAR19;
VAR8 &= VAR20;
break;

case VAR21:
VAR9 = 2;


case VAR22:
case VAR23:
case VAR24:
case VAR25:
case VAR26:
case VAR27:
case VAR28:
case VAR29:
VAR8 = VAR5 & VAR30;
break;
default:
VAR8 = VAR5 & VAR20;
break;
}

for (VAR10 = 0; VAR10 < FUN4(VAR31); VAR10++) {
if ((VAR31[VAR10].VAR6 == VAR6) &&
(VAR31[VAR10].VAR7 == VAR7)) {
VAR3 = VAR31[VAR10].VAR3;
break;
}
}

VAR32->VAR33.VAR5 = VAR5;
VAR32->VAR33.VAR3 = VAR3;
VAR32->VAR33.VAR8 = VAR8;
VAR32->VAR33.VAR9 = VAR9;
return 0;
}