void FUN1(void)
{
    if (VAR1 > VAR2)
    {
        VAR3 = VAR4;
        VAR4 = VAR5 - VAR4;
        if (((~VAR3) ^ VAR5 ^ (-1)) & ((~VAR3) ^ VAR4) & (1 << 31))
        {
            VAR6 = 1;
            VAR7 = 1;
        }
        else
        {
            VAR7 = 0;
        }
    }
    else
    {
        VAR4 = 0;
        VAR7 = 0;
    }
}