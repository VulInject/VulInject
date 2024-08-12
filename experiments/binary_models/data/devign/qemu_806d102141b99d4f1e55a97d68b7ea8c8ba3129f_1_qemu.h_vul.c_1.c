unsigned long FUN1(unsigned long VAR1, unsigned long VAR2, unsigned long VAR3, bool VAR4)
{
    unsigned long VAR5, VAR6;
    int VAR7;
    assert(VAR1 || VAR2);
    if (VAR1 && !VAR2)
    {
        if (FUN2(VAR1))
        {
            return VAR1;
        }
        else
        {
            return (unsigned long)-1;
        }
    }
    VAR5 = VAR1 & VAR8;
    VAR7 = VAR9 | VAR10 | VAR11;
    if (VAR4)
    {
        VAR7 |= VAR12;
    }
    while (1)
    {
        VAR6 = (unsigned long)FUN3((void *)VAR5, VAR2, VAR13, VAR7, -1, 0);
        if (VAR6 == (unsigned long)-1)
        {
            return (unsigned long)-1;
        }
        if ((VAR6 == VAR5) && FUN2(VAR6 - VAR3))
        {
            break;
        }
        FUN4((void *)VAR6, VAR2);
        VAR5 += VAR14;
        if (VAR1 == VAR5)
        {
            return (unsigned long)-1;
        }
    }
    return VAR6;
}