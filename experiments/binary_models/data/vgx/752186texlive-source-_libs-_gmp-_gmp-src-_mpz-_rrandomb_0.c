void
FUN1 (mpz_ptr VAR1, gmp_randstate_t VAR2, mp_bitcnt_t VAR3)
{
mp_size_t VAR4;
mp_ptr VAR5;

VAR4 = FUN2 (VAR3);
if (VAR3 != 0)
{
VAR5 = FUN3 (VAR1, VAR4);
FUN4 (VAR5, VAR2, VAR3);
}

FUN5(VAR1) = VAR4;
}