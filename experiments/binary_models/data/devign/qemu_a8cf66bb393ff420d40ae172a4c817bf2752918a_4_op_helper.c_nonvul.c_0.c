void FUN1(void)
{
    uint32_t VAR1;
    uint32_t VAR2;
    uint32_t VAR3;
    uint32_t VAR4 = 0;
    VAR1 = VAR5->VAR6 & 0x80000000;
    VAR2 = VAR5->VAR7 & 0x80000000;
    VAR3 = VAR5->VAR8;
    if ((VAR3 & 0x80000000L) != 0L)
    {
        VAR4 |= VAR9;
        if (!VAR1 && !VAR2)
            VAR4 |= VAR10;
        else if (VAR1 & VAR2)
            VAR4 |= VAR11;
    }
    else
    {
        if (VAR3 == 0L)
            VAR4 |= VAR12;
        if (VAR1 & VAR2)
            VAR4 |= VAR10;
        if (VAR2 | VAR1)
            VAR4 |= VAR11;
    }
    FUN2(VAR4);
}