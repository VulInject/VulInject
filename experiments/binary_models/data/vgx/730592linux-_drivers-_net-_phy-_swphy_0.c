}
FUN1(VAR1);


int FUN2(int VAR2, const struct VAR3 *VAR4)
{
int VAR5, VAR6;
u16 VAR7 = VAR8;
u16 VAR9 = 0;
u16 VAR10 = 0;
u16 VAR11 = 0;

if (VAR2 > VAR12)
return -1;

VAR5 = FUN3(VAR4->VAR13);
if (FUN4(VAR5 < 0))
return 0;

VAR6 = VAR4->VAR14 ? VAR15 : VAR16;

VAR7 |= VAR13[VAR5].VAR7 & VAR14[VAR6].VAR7;
VAR9 |= VAR13[VAR5].VAR9 & VAR14[VAR6].VAR9;

if (VAR4->VAR17) {
VAR7 |= VAR18 | VAR19;

VAR11   |= VAR13[VAR5].VAR11   & VAR14[VAR6].VAR11;
VAR10 |= VAR13[VAR5].VAR10 & VAR14[VAR6].VAR10;

if (VAR4->VAR20)
VAR11 |= VAR21;

if (VAR4->VAR22)
VAR11 |= VAR23;
}

switch (VAR2) {
case VAR24:
return VAR25;
case VAR26:
return VAR7;
case VAR27:
case VAR28:
return 0;
case VAR29:
return VAR11;
case VAR30:
return VAR10;
case VAR31:
return VAR9;


case VAR32:
case VAR33:
return -1;

default:
return 0xffff;
}
}