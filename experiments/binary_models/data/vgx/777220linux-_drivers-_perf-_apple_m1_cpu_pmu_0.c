static void FUN1(unsigned int VAR1, u8 VAR2,
bool VAR3, bool VAR4)
{
u64 VAR5, VAR6, VAR7;
int VAR8;

switch (VAR1) {
case 0 ... 7:
VAR6 = FUN2(FUN3(VAR1, VAR9));
VAR7 = FUN2(FUN3(VAR1, VAR10));
break;
case 8 ... 9:
VAR6 = FUN2(FUN3(VAR1 - 8, VAR11));
VAR7 = FUN2(FUN3(VAR1 - 8, VAR12));
break;
default:
FUN4();
}

VAR5 = FUN5(VAR13);

if (VAR3)
VAR5 |= VAR6;
else
VAR5 &= ~VAR6;

if (VAR4)
VAR5 |= VAR7;
else
VAR5 &= ~VAR7;

FUN6(VAR5, VAR13);


switch (VAR1) {
case 0 ... 1:
break;
case 2 ... 5:
VAR8 = (VAR1 - 2) * 8;
VAR5 = FUN5(VAR14);
VAR5 &= ~((VAR15)0xff << VAR8);
VAR5 |= (VAR15)VAR2 << VAR8;
FUN6(VAR5, VAR14);
break;
case 6 ... 9:
VAR8 = (VAR1 - 6) * 8;
VAR5 = FUN5(VAR16);
VAR5 &= ~((VAR15)0xff << VAR8);
VAR5 |= (VAR15)VAR2 << VAR8;
FUN6(VAR5, VAR16);
break;
}
}