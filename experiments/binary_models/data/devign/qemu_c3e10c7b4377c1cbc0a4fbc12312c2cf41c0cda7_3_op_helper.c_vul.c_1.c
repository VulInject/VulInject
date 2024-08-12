void FUN1(void)
{
    VAR1 = VAR2;
    VAR2 = ~VAR2 + VAR3;
    if (FUN2(!(((VAR4)~VAR1 ^ VAR5) & ((VAR4)(~VAR1) ^ (VAR4)VAR2) & (1ULL << 63))))
    {
        VAR6 = 0;
    }
    else
    {
        VAR6 = 1;
        VAR7 = 1;
    }
    if (FUN2((VAR4)VAR2 >= (VAR4)~VAR1))
    {
        VAR3 = 0;
    }
    else
    {
        VAR3 = 1;
    }
}