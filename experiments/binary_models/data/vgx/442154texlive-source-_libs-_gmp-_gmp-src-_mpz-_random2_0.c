void
FUN1 (mpz_ptr VAR1, mp_size_t VAR2)
{
mp_size_t VAR3;
mp_ptr VAR4;

VAR3 = FUN2 (VAR2);
if (VAR3 != 0)
{
VAR4 = FUN3 (VAR1, VAR3);

FUN4 (VAR4, VAR3);
}

FUN5 (VAR1) = VAR2;
}