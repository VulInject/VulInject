FUN1 (mpfr_ptr VAR1, uintmax_t VAR2, intmax_t VAR3, mpfr_rnd_t VAR4)
{
int VAR5, VAR6;
mp_size_t VAR7, VAR8;
mp_limb_t VAR9;
mp_limb_t VAR10[VAR11];
mpfr_t VAR12;
unsigned long VAR13 = sizeof(VAR14) * VAR15;
unsigned long VAR16 = VAR17 % VAR13;


if (VAR2 == 0)
{
FUN2(VAR1);
FUN3(VAR1);
FUN4(0);
}


if (FUN5(VAR3 >= VAR18))
return FUN6 (VAR1, VAR4, VAR19);

FUN7 (sizeof(VAR14) % sizeof(VAR20) == 0);


FUN8 (VAR10, VAR12, VAR13);

VAR8 = VAR11;
if (VAR11 == 1)
{
VAR9 = VAR2;
FUN9(VAR5, VAR9);

VAR10[0] = VAR9 << VAR5;
}
else
{
mp_size_t VAR21;

for (VAR7 = 0; VAR7 < VAR8; VAR7++, VAR2 >>= VAR16)
VAR10[VAR7] = VAR2; 


do
{
FUN10 (VAR8 > 0);
VAR9 = VAR10[--VAR8];
}
while (VAR9 == 0);
VAR8++;
VAR21 = FUN11 (VAR10) - VAR8;
FUN9(VAR5, VAR9);


if (FUN12 (VAR5 != 0))
FUN13 (VAR10+VAR21, VAR10, VAR8, VAR5);  
else if (VAR21 != 0)
FUN14 (VAR10+VAR21, VAR10, VAR8);    
if (VAR21 != 0)
{
if (VAR21 == 1)
VAR10[0] = VAR22;
else
FUN15 (VAR10, VAR21);   
}
}
VAR3 += VAR8 * VAR17 - VAR5;    
FUN10 (FUN16(VAR10[FUN11 (VAR10) - 1]) != 0);

FUN17 (VAR6, VAR1, VAR10, VAR13, VAR4, VAR19, VAR3++);


if (FUN5(VAR3 < VAR23))
{

if (VAR4 == VAR24 &&
(VAR3 + 1 < VAR23 ||
(FUN18 (VAR1) && VAR6 >= 0)))
VAR4 = VAR25;
return FUN19 (VAR1, VAR4, VAR19);
}
if (FUN5(VAR3 > VAR18))
return FUN6 (VAR1, VAR4, VAR19);

FUN20 (VAR1, VAR19);
FUN21 (VAR1, VAR3);
FUN4 (VAR6);
}