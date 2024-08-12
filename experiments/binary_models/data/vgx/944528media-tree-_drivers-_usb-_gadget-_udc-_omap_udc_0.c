static unsigned
FUN1(char *VAR1, u8 VAR2, u8 VAR3,
unsigned VAR4, unsigned VAR5, int VAR6)
{
struct VAR7	*VAR8;
u16		VAR9 = 0;


VAR8 = &VAR10->VAR8[VAR2 & 0xf];
if (VAR2 & VAR11)
VAR8 += 16;


FUN2(VAR8->VAR1[0]);


if (VAR3 == VAR12) {
switch (VAR5) {
case 8:
VAR9 = 0 << 12;
break;
case 16:
VAR9 = 1 << 12;
break;
case 32:
VAR9 = 2 << 12;
break;
case 64:
VAR9 = 3 << 12;
break;
case 128:
VAR9 = 4 << 12;
break;
case 256:
VAR9 = 5 << 12;
break;
case 512:
VAR9 = 6 << 12;
break;
default:
FUN3();
}
VAR9 |= VAR13;
VAR6 = 1;
} else {

if (!VAR14 || FUN4())
VAR6 = 0;

switch (VAR5) {
case 8:
VAR9 = 0 << 12;
break;
case 16:
VAR9 = 1 << 12;
break;
case 32:
VAR9 = 2 << 12;
break;
case 64:
VAR9 = 3 << 12;
break;
default:
FUN3();
}
if (VAR6 && VAR2)
VAR9 |= VAR15;
FUN5(&VAR8->VAR16);
VAR8->VAR16.VAR17 = VAR18;
VAR8->VAR16.VAR19 = (unsigned long) VAR8;
}
if (VAR2)
VAR9 |= VAR20;
FUN2(VAR4 & 0x07);
VAR9 |= VAR4 >> 3;

FUN6("",
VAR1, VAR2, VAR9, VAR5, VAR6 ? "" : "", VAR4);

if (VAR2 & VAR11)
FUN7(VAR9, FUN8(VAR2 & 0xf));
else
FUN7(VAR9, FUN9(VAR2));


VAR4 += VAR5;
if (VAR6)
VAR4 += VAR5;
FUN2(VAR4 > 2048);


FUN2(strlen(VAR1) >= sizeof VAR8->VAR1);
FUN10(VAR8->VAR1, VAR1, sizeof VAR8->VAR1);
FUN11(&VAR8->VAR21);
FUN11(&VAR8->VAR22);
VAR8->VAR23 = VAR2;
VAR8->VAR24 = VAR3;
VAR8->VAR25 = VAR6;
VAR8->VAR10 = VAR10;

switch (VAR3) {
case VAR26:
VAR8->VAR8.VAR27.VAR28 = true;
VAR8->VAR8.VAR27.VAR29 = true;
VAR8->VAR8.VAR27.VAR30 = true;
break;
case VAR12:
VAR8->VAR8.VAR27.VAR31 = true;
break;
case VAR32:
VAR8->VAR8.VAR27.VAR33 = true;
break;
case VAR34:
VAR8->VAR8.VAR27.VAR35 = true;
break;
};

if (VAR2 & VAR11)
VAR8->VAR8.VAR27.VAR29 = true;
else
VAR8->VAR8.VAR27.VAR30 = true;

VAR8->VAR8.VAR1 = VAR8->VAR1;
VAR8->VAR8.VAR36 = &VAR37;
VAR8->VAR38 = VAR5;
FUN12(&VAR8->VAR8, VAR8->VAR38);
FUN13(&VAR8->VAR8.VAR39, &VAR10->VAR40.VAR39);

return VAR4;
}