FUN1 (mpz_srcptr VAR1, mpz_srcptr VAR2, mpz_srcptr VAR3)
{
mp_size_t  VAR4, VAR5, VAR6, VAR7;
mp_srcptr  VAR8, VAR9, VAR10;
mp_ptr     VAR11;
mp_limb_t  VAR12, VAR13, VAR14, VAR15, VAR16;
int        VAR17;
VAR18;

VAR6 = FUN2(VAR3);
if (FUN3 (VAR6 == 0))
return (FUN4 (VAR1, VAR2) == 0);

VAR6 = FUN5(VAR6);
VAR10 = FUN6(VAR3);

if (FUN7(VAR1) < FUN7(VAR2))
FUN8 (VAR1, VAR2);

VAR4 = FUN2(VAR1);
VAR5 = FUN2(VAR2);
VAR7 = (VAR4 ^ VAR5);

VAR4 = FUN5(VAR4);
VAR8 = FUN6(VAR1);

if (VAR5 == 0)
return FUN9 (VAR8, VAR4, VAR10, VAR6);

VAR5 = FUN5(VAR5);
VAR9 = FUN6(VAR2);

VAR12 = VAR8[0];
VAR13 = VAR9[0];
VAR14 = VAR10[0];


VAR15 = FUN10 (VAR14) & VAR19;
VAR12 = (VAR7 >= 0 ? VAR12 : -VAR12);
if (((VAR12-VAR13) & VAR15) != 0)
return 0;

if (VAR5 == 1)
{
if (VAR6 == 1)
{
VAR20:
if (VAR7 < 0)
FUN11 (VAR13, VAR13, VAR14);

if (FUN12 (VAR4, VAR21))
{
VAR16 = FUN13 (VAR8, VAR4, VAR14);
if (VAR13 < VAR14)
return VAR16 == VAR13;
else
return VAR16 == (VAR13 % VAR14);
}

if ((VAR14 & 1) == 0)
{

unsigned	VAR22;
FUN14 (VAR22, VAR14);
VAR14 >>= VAR22;
}

VAR16 = FUN15 (VAR8, VAR4, VAR14, VAR13);
return VAR16 == 0 || VAR16 == VAR14;
}


if (VAR6 == 2 && VAR14 != 0)
{
mp_limb_t  VAR23 = VAR10[1];

if (VAR23 <= VAR15)
{
unsigned	 VAR22;
FUN14 (VAR22, VAR14);
VAR14 = (VAR14 >> VAR22) | (VAR23 << (VAR24-VAR22));
FUN16 (VAR14);


goto VAR20;
}
}
}

VAR25;
VAR11 = FUN17 (VAR4+1);


if (VAR7 >= 0)
{

if (VAR4 > VAR5 || FUN18 (VAR8, VAR9, VAR4) >= 0)
FUN19 (FUN20 (VAR11, VAR8, VAR4, VAR9, VAR5));
else
FUN19 (FUN21 (VAR11, VAR9, VAR8, VAR4));
FUN22 (VAR11, VAR4);
}
else
{

mp_limb_t  VAR26;
VAR26 = FUN23 (VAR11, VAR8, VAR4, VAR9, VAR5);
VAR11[VAR4] = VAR26;
VAR4 += (VAR26 != 0);
}

VAR17 = FUN9 (VAR11, VAR4, VAR10, VAR6);

VAR27;
return VAR17;
}