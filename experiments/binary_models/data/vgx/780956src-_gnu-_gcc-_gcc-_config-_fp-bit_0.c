FUN1 (VAR1 * VAR2,
VAR1 * VAR3)
{
fractype VAR4;
fractype VAR5;
fractype VAR6;
fractype VAR7;

if (FUN2 (VAR2))
{
return VAR2;
}
if (FUN2 (VAR3))
{
return VAR3;
}

VAR2->VAR8 = VAR2->VAR8 ^ VAR3->VAR8;

if (FUN3 (VAR2) || FUN4 (VAR2))
{
if (VAR2->class == VAR3->class)
return FUN5 ();
return VAR2;
}

if (FUN3 (VAR3))
{
VAR2->VAR9.VAR10 = 0;
VAR2->VAR11 = 0;
return VAR2;
}
if (FUN4 (VAR3))
{
VAR2->class = VAR12;
return VAR2;
}


{


VAR2->VAR11 = VAR2->VAR11 - VAR3->VAR11;
VAR5 = VAR2->VAR9.VAR10;
VAR6 = VAR3->VAR9.VAR10;

if (VAR5 < VAR6)
{

VAR5 *= 2;
VAR2->VAR11--;
}
VAR4 = VAR13;
VAR7 = 0;

while (VAR4)
{
if (VAR5 >= VAR6)
{
VAR7 |= VAR4;
VAR5 -= VAR6;
}
VAR4 >>= 1;
VAR5 *= 2;
}

if (!VAR14 && (VAR7 & VAR15) == VAR16)
{
if (VAR7 & (1 << VAR17))
{

}
else if (VAR5)
{

VAR7 += VAR18 + 1;


VAR7 &= ~(VAR19) VAR15;
}
}

VAR2->VAR9.VAR10 = VAR7;
return (VAR2);
}
}