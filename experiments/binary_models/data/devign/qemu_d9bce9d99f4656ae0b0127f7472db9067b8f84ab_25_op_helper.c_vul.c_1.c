void FUN1(void)
{
    if (!FUN2(((VAR1 ^ VAR2) >> 31) || !((VAR3 ^ VAR2) >> 31)))
    {
        if (VAR2 >> 31)
        {
            VAR3 = VAR4;
        }
        else
        {
            VAR3 = VAR5;
        }
    }
}