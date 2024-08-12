void FUN1(int VAR1, int VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    unsigned int VAR7 = 0;
    if (VAR2)
    {
        VAR7 |= VAR8;
        if (VAR3)
            VAR7 |= VAR9;
        if (VAR4)
            VAR7 |= VAR10;
        if ((VAR3 || VAR4) && VAR5)
            VAR7 |= VAR11;
        if (VAR6)
            VAR7 |= VAR12;
        if (FUN2(VAR1, VAR13, VAR7) != 0)
        {
            VAR7 &= ~VAR12;
            if (FUN2(VAR1, VAR13, VAR7) != 0)
            {
                fprintf(VAR14, "", strerror(VAR15))