static int FUN1(VAR1 *VAR2, ulong VAR3, ulong VAR4)
{
volatile VAR5 *VAR6 = (volatile VAR5 *) VAR3;
ulong VAR7;
int VAR8 = VAR9;
int VAR10, VAR11;
int VAR12;
ulong VAR13;


VAR7 = *VAR6;
if ((VAR7 & VAR4) != VAR4)
return VAR14;




VAR10 = FUN2();
FUN3();
VAR11 = FUN4();

VAR15 = VAR16;
VAR17 = VAR18;
VAR15 = VAR19;
*VAR6 = VAR4;


VAR13 = FUN5(0);


VAR12 = 0;
do {
VAR7 = *VAR6;


if (FUN5(VAR13) > 1000) {
VAR12 = VAR20 | VAR21;
break;
}
if (!VAR12 && ((VAR7 & 0x80) == (VAR4 & 0x80)))
VAR12 = VAR22;

} while (!VAR12);

*VAR6 = VAR23;

if (VAR12 == VAR20 || *VAR6 != VAR4)
VAR8 = VAR24;

if (VAR11)
FUN6();

if (VAR10)
FUN7();

return VAR8;
}