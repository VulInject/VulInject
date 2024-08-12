static int FUN1(struct VAR1 *VAR2,
unsigned char VAR3)
{
int VAR4;
unsigned short VAR5;
unsigned short VAR6;
unsigned char VAR7;
struct VAR8 *VAR8 = VAR2->VAR8;

if (VAR3 > VAR9)
return -VAR10;

FUN2(&VAR2->VAR11);


VAR7 = VAR12[VAR3] | VAR13;

VAR4 = FUN3(VAR8, VAR14, VAR7);
if (VAR4 < 0)
goto VAR15;


if (!FUN4(&VAR2->VAR16,
FUN5(500))) {
FUN6(VAR8->VAR17,
"");
VAR4 = -VAR18;
goto VAR15;
}

VAR4 = FUN7(VAR8, VAR19);
if (VAR4 < 0)
goto VAR15;

VAR5 = (unsigned short)VAR4;
VAR6 = VAR5 << 2;

VAR4 = FUN7(VAR8, VAR20);
if (VAR4 < 0)
goto VAR15;

VAR5 = (unsigned short)(VAR4 & VAR21);
VAR6 |= VAR5;

VAR4 = VAR6;

VAR15:
FUN8(&VAR2->VAR11);
return VAR4;
}