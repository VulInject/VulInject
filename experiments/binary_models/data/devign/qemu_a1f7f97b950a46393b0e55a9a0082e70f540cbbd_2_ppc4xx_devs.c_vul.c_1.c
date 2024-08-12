static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint32_t VAR6, VAR7;
    VAR5 = VAR1;
    VAR6 = 1 << (31 - VAR2);
    FUN2("" VAR8 "" VAR8 "" VAR8 "" VAR8 "", VAR9, VAR2, VAR3, VAR5->VAR10, VAR6, VAR5->VAR10 & VAR6, VAR3 << VAR2);
    if (VAR2 < 0 || VAR2 > 31)
        return;
    VAR7 = VAR5->VAR10;
    if (VAR5->VAR11 & VAR6)
    {
        if (VAR3 == 1)
            VAR5->VAR10 |= VAR6;
    }
    else
    {
        if (VAR3 == 1)
        {
            VAR5->VAR10 |= VAR6;
            VAR5->VAR3 |= VAR6;
        }
        else
        {
            VAR5->VAR10 &= ~VAR6;
            VAR5->VAR3 &= ~VAR6;
        }
    }
    FUN2("" VAR8 ""
            "" VAR8 "",
            VAR9, VAR2, VAR3, VAR5->VAR10, VAR7);
    if (VAR7 != VAR5->VAR10)
        FUN3(VAR5);
}