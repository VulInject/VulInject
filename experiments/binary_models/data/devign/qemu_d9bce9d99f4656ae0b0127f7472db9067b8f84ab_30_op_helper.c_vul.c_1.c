void FUN1(void)
{
    VAR1 = VAR2;
    VAR2 = ~VAR2 + VAR3;
    if (FUN2(!((~VAR1 ^ (-1)) & ((~VAR1) ^ VAR2) & (1 << 31))))
    {
        VAR4 = 0;
    }
    else
    {
        VAR4 = 1;
        VAR5 = 1;
    }
    if (FUN2(VAR2 >= ~VAR1))
    {
        VAR3 = 0;
    }
    else
    {
        VAR3 = 1;
    }
}