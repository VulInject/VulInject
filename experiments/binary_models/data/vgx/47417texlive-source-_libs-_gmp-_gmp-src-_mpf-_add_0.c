FUN1 (mpf_ptr VAR1, mpf_srcptr VAR2, mpf_srcptr VAR3)
{
mp_srcptr VAR4, VAR5;
mp_ptr VAR6, VAR7;
mp_size_t VAR8, VAR9, VAR10;
mp_size_t VAR11;
mp_exp_t VAR12;
mp_size_t VAR13;
mp_limb_t VAR14;
int VAR15;
VAR16;

VAR8 = VAR2->VAR17;
VAR9 = VAR3->VAR17;


if (VAR8 == 0)
{
VAR18:
if (VAR1 != VAR3)
FUN2 (VAR1, VAR3);
return;
}
if (VAR9 == 0)
{
VAR3 = VAR2;
goto VAR18;
}


if ((VAR8 ^ VAR9) < 0)
{
__mpf_struct VAR19;
VAR19.VAR17 = -VAR9;
VAR19.VAR20 = VAR3->VAR20;
VAR19.VAR21 = VAR3->VAR21;
FUN3 (VAR1, VAR2, &VAR19);
return;
}

VAR22;


VAR15 = VAR8 < 0;


if (VAR2->VAR20 < VAR3->VAR20)
{
mpf_srcptr VAR23;
VAR23 = VAR2; VAR2 = VAR3; VAR3 = VAR23;
VAR8 = VAR2->VAR17;
VAR9 = VAR3->VAR17;
}

VAR8 = FUN4 (VAR8);
VAR9 = FUN4 (VAR9);
VAR4 = VAR2->VAR21;
VAR5 = VAR3->VAR21;
VAR6 = VAR1->VAR21;
VAR11 = VAR1->VAR24;
VAR12 = VAR2->VAR20;
VAR13 = VAR2->VAR20 - VAR3->VAR20;


if (VAR8 > VAR11)
{
VAR4 += VAR8 - VAR11;
VAR8 = VAR11;
}


if (VAR9 + VAR13 > VAR11)
{
VAR5 += VAR9 + VAR13 - VAR11;
VAR9 = VAR11 - VAR13;
}


while (VAR4[0] == 0)
VAR4++, VAR8--;
while (VAR5[0] == 0)
VAR5++, VAR9--;


VAR7 = FUN5 (VAR11);

if (VAR13 >= VAR11)
{

if (VAR6 != VAR4)
FUN6 (VAR6, VAR4, VAR8);
VAR10 = VAR8;
}
else
{



if (VAR8 > VAR13)
{

if (VAR9 + VAR13 <= VAR8)
{


mp_size_t VAR25;
VAR25 = VAR8 - VAR13 - VAR9;
FUN7 (VAR7, VAR4, VAR25);
VAR14 = FUN8 (VAR7 + VAR25, VAR4 + VAR25, VAR8 - VAR25, VAR5, VAR9);
VAR10 = VAR8;
}
else
{


mp_size_t VAR25;
VAR25 = VAR9 + VAR13 - VAR8;
FUN7 (VAR7, VAR5, VAR25);
VAR14 = FUN8 (VAR7 + VAR25, VAR4, VAR8, VAR5 + VAR25, VAR8 - VAR13);
VAR10 = VAR9 + VAR13;
}
}
else
{


mp_size_t VAR25;
VAR25 = VAR9 + VAR13 - VAR8;
FUN7 (VAR7, VAR5, VAR9);
FUN9 (VAR7 + VAR9, VAR13 - VAR8);
FUN7 (VAR7 + VAR25, VAR4, VAR8);
VAR14 = 0;
VAR10 = VAR25 + VAR8;
}

FUN7 (VAR6, VAR7, VAR10);
VAR6[VAR10] = VAR14;
VAR10 += VAR14;
VAR12 += VAR14;
}

VAR1->VAR17 = VAR15 ? -VAR10 : VAR10;
VAR1->VAR20 = VAR12;
VAR26;
}