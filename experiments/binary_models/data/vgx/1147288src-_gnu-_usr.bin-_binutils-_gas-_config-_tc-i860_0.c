FUN1 (VAR1 *VAR2, VAR3 *VAR4, segT seg VAR5)
{
char *VAR6;
long VAR7 = *VAR4;
unsigned long VAR8;
valueT VAR9;

VAR6 = VAR2->VAR10->VAR11 + VAR2->VAR12;


VAR8 = FUN2 (VAR6);


VAR9 = VAR2->VAR13;


if (VAR9 & VAR14)
{
if (VAR7 & ~0x1f)
FUN3 (VAR2->VAR15, VAR2->VAR16,
FUN4(""));
if (VAR2->VAR17)
FUN3 (VAR2->VAR15, VAR2->VAR16,
FUN4(""));

VAR8 |= (VAR7 & 0x1f) << 11;
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
else if (VAR9 & VAR21)
{
VAR2->VAR18 = FUN6 (VAR2, &VAR7);


if (VAR2->VAR17)
VAR2->VAR20 = 0;
else
{
VAR8 |= VAR7 & 0xffff;
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
}
else if (VAR9 & VAR22)
FUN7 ();

else if (VAR9 & VAR23)
{
VAR2->VAR18 = FUN6 (VAR2, &VAR7);


if (VAR2->VAR17)
VAR2->VAR20 = 0;
else
{
VAR8 |= VAR7 & 0x7ff;
VAR8 |= (VAR7 & 0xf800) << 5;
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
}
else if (VAR9 & VAR24)
{
if (VAR7 & 0x3)
FUN3 (VAR2->VAR15, VAR2->VAR16,
FUN4(""));

VAR7 = VAR7 >> 2;


if (VAR2->VAR17)
{
VAR2->VAR20 = 0;
VAR2->VAR18 = VAR25;
}
else
{
VAR8 |= (VAR7 & 0x7ff);
VAR8 |= ((VAR7 & 0xf800) << 5);
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
}
else if (VAR9 & VAR26)
{
if (VAR7 & 0x3)
FUN3 (VAR2->VAR15, VAR2->VAR16,
FUN4(""));

VAR7 >>= 2;


if (VAR2->VAR17)
{
VAR2->VAR18 = VAR27;
VAR2->VAR20 = 0;
}
else
{
VAR8 |= (VAR7 & 0x3ffffff);
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
}
else if (VAR9 != VAR28)
{
FUN3 (VAR2->VAR15, VAR2->VAR16,
FUN4(""), (unsigned long) VAR9);
FUN7 ();
}
else
{

if (VAR2->VAR17)
{
VAR2->VAR18 = VAR29;
VAR2->VAR20 = 0;
}
else
{
VAR8 |= (VAR7 & 0xffffffff);
FUN5 (VAR8, VAR6);
VAR2->VAR18 = VAR19;
VAR2->VAR20 = 1;
}
}
}