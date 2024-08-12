void FUN1(void)
{
    if (FUN2(((VAR1 ^ VAR2) >> 31) || !((VAR3 ^ VAR2) >> 31)))
    {
        VAR4 = 0;
    }
    else
    {
        VAR4 = 1;
        VAR5 = 1;
    }
}