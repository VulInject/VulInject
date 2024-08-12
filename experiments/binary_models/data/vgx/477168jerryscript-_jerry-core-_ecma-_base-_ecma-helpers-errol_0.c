FUN1 (double VAR1, 
VAR2 *VAR3, 
VAR4 *VAR5) 
{
double VAR6 = 1.0;
int32_t VAR7 = 1;


ecma_high_prec_t VAR8;

VAR8.VAR9 = VAR1;
VAR8.VAR10 = 0.0;

while (((VAR8.VAR9 > 10.0) || ((VAR8.VAR9 == 10.0) && (VAR8.VAR10 >= 0.0))) && (VAR7 < 308))
{
VAR7++;
FUN2 (&VAR8);
VAR6 /= 10.0;
}

while (((VAR8.VAR9 < 1.0) || ((VAR8.VAR9 == 1.0) && (VAR8.VAR10 < 0.0))) && (VAR7 > -307))
{
VAR7--;
FUN3 (&VAR8);
VAR6 *= 10.0;
}

ecma_high_prec_t VAR11, VAR12;

VAR11.VAR9 = VAR8.VAR9;
VAR11.VAR10 = VAR8.VAR10;

if (FUN4 (VAR1) != VAR13)
{
VAR11.VAR10 += (FUN4 (VAR1) - VAR1) * VAR6 / (2.0 + VAR14);
}

VAR12.VAR9 = VAR8.VAR9;
VAR12.VAR10 = VAR8.VAR10 + (FUN5 (VAR1) - VAR1) * VAR6 / (2.0 + VAR14);

FUN6 (&VAR11);
FUN6 (&VAR12);



while (VAR11.VAR9 > 10.0 || (VAR11.VAR9 == 10.0 && (VAR11.VAR10 >= 0.0)))
{
VAR7++;
FUN2 (&VAR11);
FUN2 (&VAR12);
}

while (VAR11.VAR9 < 1.0 || (VAR11.VAR9 == 1.0 && (VAR11.VAR10 < 0.0)))
{
VAR7--;
FUN3 (&VAR11);
FUN3 (&VAR12);
}



VAR2 *VAR15 = VAR3;

while (VAR11.VAR9 != 0.0 || VAR11.VAR10 != 0.0)
{
uint8_t VAR16 = (VAR17) VAR11.VAR9;

if ((VAR11.VAR9 == VAR16) && (VAR11.VAR10 < 0))
{
VAR16 = (VAR17) (VAR16 - 1u);
}

uint8_t VAR18 = (VAR17) VAR12.VAR9;

if ((VAR12.VAR9 == VAR18) && (VAR12.VAR10 < 0))
{
VAR18 = (VAR17) (VAR18 - 1u);
}

if (VAR18 != VAR16)
{
break;
}

*VAR15++ = (VAR2) ('' + VAR16);

VAR11.VAR9 -= VAR16;
FUN3 (&VAR11);

VAR12.VAR9 -= VAR18;
FUN3 (&VAR12);
}

double VAR19 = (VAR11.VAR9 + VAR12.VAR9) / 2.0 + 0.5;
*VAR15++ = (VAR2) ('' + (VAR17) VAR19);

*VAR5 = VAR7;

return (VAR20) (VAR15 - VAR3);
}