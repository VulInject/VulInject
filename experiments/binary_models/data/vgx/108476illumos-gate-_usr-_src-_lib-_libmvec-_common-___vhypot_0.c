void
FUN1(int VAR1, double * restrict VAR2, int VAR3, double * restrict VAR4,
int VAR5, double * restrict VAR6, int VAR7)
{
int		VAR8, VAR9, VAR10, VAR11, VAR12;
double		VAR13, VAR14, VAR15, VAR16;
double		VAR17 = 0;
double		VAR18, VAR19, VAR20;
double		*VAR21, *VAR22, *VAR23;
int		VAR24;
double		VAR25 = ((double*)VAR26)[0];		
double		VAR27 = ((double*)VAR26)[1];	
double		VAR28 = ((double*)VAR26)[2];	

while (VAR1 > 1)
{
VAR24 = 0;
VAR21 = VAR2;
VAR22 = VAR4;
VAR23 = VAR6;
VAR8 = FUN2(VAR2);
VAR10 = FUN2(VAR4);
for (; VAR1 > 1 ; VAR1--)
{
VAR2 += VAR3;
VAR8 &= 0x7fffffff;
VAR10 &= 0x7fffffff;

if (VAR8 >= 0x7fe00000)	
{
VAR12 = VAR10 - VAR8;
VAR11 = VAR12 >> 31;
VAR11 = VAR10 - (VAR12 & VAR11);
VAR11 &= 0x7ff00000;
VAR18 = *(VAR2 - VAR3);
VAR19 = *VAR4;
VAR18 = FUN3(VAR18);
VAR19 = FUN3(VAR19);
if (VAR11 >= 0x7ff00000)	
{
int VAR29 = FUN4((VAR2 - VAR3));
int VAR30 = FUN4(VAR4);
if (VAR8 == 0x7ff00000 && VAR29 == 0) VAR20 = VAR18 == VAR19 ? VAR19 : VAR18;
else if (VAR10 == 0x7ff00000 && VAR30 == 0) VAR20 = VAR18 == VAR19 ? VAR18 : VAR19;
else VAR20 = VAR18 + VAR19;
FUN5 (VAR20)
}
else
{
VAR11 = VAR12 >> 31;
if (((VAR12 ^ VAR11) - VAR11) < 0x03600000)	
{
VAR18 *= VAR27;
VAR19 *= VAR27;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR16 = VAR19 - VAR15;
VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6 (VAR20);

VAR20 = VAR28 * VAR20;
FUN5 (VAR20)
}
else FUN5 (VAR18 + VAR19)
}
}
if (VAR10 >= 0x7fe00000)	
{
VAR12 = VAR10 - VAR8;
VAR11 = VAR12 >> 31;
VAR11 = VAR10 - (VAR12 & VAR11);
VAR11 &= 0x7ff00000;
VAR18 = *(VAR2 - VAR3);
VAR19 = *VAR4;
VAR18 = FUN3(VAR18);
VAR19 = FUN3(VAR19);
if (VAR11 >= 0x7ff00000)	
{
int VAR29 = FUN4((VAR2 - VAR3));
int VAR30 = FUN4(VAR4);
if (VAR8 == 0x7ff00000 && VAR29 == 0) VAR20 = VAR18 == VAR19 ? VAR19 : VAR18;
else if (VAR10 == 0x7ff00000 && VAR30 == 0) VAR20 = VAR18 == VAR19 ? VAR18 : VAR19;
else VAR20 = VAR18 + VAR19;
FUN5 (VAR20)
}
else
{
VAR11 = VAR12 >> 31;
if (((VAR12 ^ VAR11) - VAR11) < 0x03600000)	
{
VAR18 *= VAR27;
VAR19 *= VAR27;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR16 = VAR19 - VAR15;
VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6 (VAR20);

VAR20 = VAR28 * VAR20;
FUN5 (VAR20)
}
else FUN5 (VAR18 + VAR19)
}
}

VAR9 = FUN2(VAR2);

if (VAR8 < 0x00100000 && VAR10 < 0x00100000)	
{
VAR18 = *(VAR2 - VAR3);
VAR19 = *VAR4;

VAR18 *= VAR28;
VAR19 *= VAR28;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR16 = VAR19 - VAR15;
VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6(VAR20);

VAR20 = VAR27 * VAR20;
FUN5 (VAR20)
}

VAR8 = VAR9;
VAR4 += VAR5;
VAR6 += VAR7;
VAR24++;
VAR10 = FUN2(VAR4);
}
if (VAR24 > 0)
FUN7 (VAR24, VAR21, VAR3, VAR22, VAR5, VAR23, VAR7);
}

if (VAR1 > 0)
{
VAR18 = *VAR2;
VAR19 = *VAR4;
VAR8 = FUN2(VAR2);
VAR10 = FUN2(VAR4);

VAR8 &= 0x7fffffff;
VAR10 &= 0x7fffffff;

VAR12 = VAR10 - VAR8;
VAR11 = VAR12 >> 31;
VAR11 = VAR10 - (VAR12 & VAR11);
VAR11 &= 0x7ff00000;

if (VAR11 >= 0x7fe00000)	
{
VAR18 = FUN3(VAR18);
VAR19 = FUN3(VAR19);
if (VAR11 >= 0x7ff00000)	
{
int VAR29 = FUN4(VAR2);
int VAR30 = FUN4(VAR4);
if (VAR8 == 0x7ff00000 && VAR29 == 0) VAR20 = VAR18 == VAR19 ? VAR19 : VAR18;
else if (VAR10 == 0x7ff00000 && VAR30 == 0) VAR20 = VAR18 == VAR19 ? VAR18 : VAR19;
else VAR20 = VAR18 + VAR19;
*VAR6 = VAR20;
return;
}
else
{
VAR11 = VAR12 >> 31;
if (((VAR12 ^ VAR11) - VAR11) < 0x03600000)	
{
VAR18 *= VAR27;
VAR19 *= VAR27;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR16 = VAR19 - VAR15;
VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6 (VAR20);

VAR20 = VAR28 * VAR20;
*VAR6 = VAR20;
return;
}
else
{
*VAR6 = VAR18 + VAR19;
return;
}
}
}

if (VAR11 < 0x00100000)	
{
VAR18 *= VAR28;
VAR19 *= VAR28;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR16 = VAR19 - VAR15;
VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6(VAR20);

VAR20 = VAR27 * VAR20;
*VAR6 = VAR20;
return;
}

FUN2(&VAR17) = (0x7fe00000 - VAR11);

VAR18 *= VAR17;
VAR19 *= VAR17;

VAR13 = (VAR18 + VAR25) - VAR25;
VAR15 = (VAR19 + VAR25) - VAR25;
VAR14 = VAR18 - VAR13;
VAR16 = VAR19 - VAR15;

VAR20 = (VAR13 * VAR13 + VAR15 * VAR15);
VAR20 += ((VAR18 + VAR13) * VAR14 + (VAR19 + VAR15) * VAR16);

VAR20 = FUN6(VAR20);

FUN2(&VAR17) = VAR11;

VAR20 = VAR17 * VAR20;
*VAR6 = VAR20;
}
}