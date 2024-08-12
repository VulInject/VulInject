static void FUN1 (unsigned __int32 *VAR1, unsigned __int32 *VAR2, unsigned __int32 *VAR3, unsigned __int32 *VAR4, unsigned __int32 *VAR5)
{
*VAR1 = ~*VAR1;
*VAR3 = ~*VAR3;
*VAR5 = *VAR1;
*VAR1 &= *VAR2;
*VAR3 ^= *VAR1;
*VAR1 |= *VAR4;
*VAR4 ^= *VAR3;
*VAR2 ^= *VAR1;
*VAR1 ^= *VAR5;
*VAR5 |= *VAR2;
*VAR2 ^= *VAR4;
*VAR3 |= *VAR1;
*VAR3 &= *VAR5;
*VAR1 ^= *VAR2;
*VAR2 &= *VAR3;
*VAR2 ^= *VAR1;
*VAR1 &= *VAR3;
*VAR1 ^= *VAR5;
}