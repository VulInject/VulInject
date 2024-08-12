void FUN1(void)
{
    VAR1 = VAR2;
    VAR2 += VAR3 + (-1);
    if (FUN2(!((VAR4)VAR1 & ((VAR4)VAR1 ^ (VAR4)VAR2) & (1ULL << 63))))
    {
        VAR5 = 0;
    }
    else
    {
        VAR6 = 1;
        VAR5 = 1;
    }
    if (FUN2(VAR1 != 0))
        VAR3 = 1;
}