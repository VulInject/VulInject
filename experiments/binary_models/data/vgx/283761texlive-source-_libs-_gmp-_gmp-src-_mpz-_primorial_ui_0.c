FUN1 (mpz_ptr VAR1, unsigned long VAR2)
{
FUN2 (VAR2 <= VAR3);

if (VAR2 < 5)
{
FUN3 (VAR1, 1)[0] = (066211 >> (VAR2*3)) & 7;
FUN4 (VAR1) = 1;
}
else
{
VAR4 *VAR5, *VAR6;
mp_size_t VAR7, VAR8;
mp_limb_t VAR9;
VAR10;

VAR7 = VAR2 / VAR11;
VAR7 = VAR7 + (VAR7 >> 1) + 1;
FUN2 (VAR7 >= FUN5 (VAR2));
VAR5 = FUN3 (VAR1, VAR7);
VAR7 = (FUN6 (VAR5, VAR2) + 1) / FUN7 (VAR2) + 1;

VAR12;
VAR6 = FUN8 (VAR7);

VAR8 = 0;

VAR9 = 6;


{
mp_limb_t VAR13;

VAR13 = VAR3 / VAR2;

FUN9 (VAR14, FUN10(5), FUN10 (VAR2), 0, VAR5);
FUN11 (VAR14, VAR9, VAR13, VAR6, VAR8);
VAR15;
}

if (VAR8 != 0)
{
VAR6[VAR8++] = VAR9;
FUN12 (VAR1, VAR6, VAR8);
}
else
{
FUN13 (VAR1)[0] = VAR9;
FUN4 (VAR1) = 1;
}

VAR16;
}
}