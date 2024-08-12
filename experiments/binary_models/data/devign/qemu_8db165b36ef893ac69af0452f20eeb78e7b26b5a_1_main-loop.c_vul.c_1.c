static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        VAR10 *VAR11 = &FUN2(VAR2, VAR10, VAR8);
        int VAR12 = VAR11->VAR12;
        int VAR13 = 0;
        if (FUN3(VAR12, VAR5))
        {
            VAR13 |= VAR14 | VAR15 | VAR16;
        }
        if (FUN3(VAR12, VAR6))
        {
            VAR13 |= VAR17 | VAR16;
        }
        if (FUN3(VAR12, VAR7))
        {
            VAR13 |= VAR18;
        }
        VAR11->VAR13 = VAR13 & VAR11->VAR19;
    }
}