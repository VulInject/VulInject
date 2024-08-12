static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6)
{
    int VAR7 = -1;
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        VAR10 *VAR11 = &FUN2(VAR2, VAR10, VAR8);
        int VAR12 = VAR11->VAR12;
        int VAR13 = VAR11->VAR13;
        if (VAR13 & (VAR14 | VAR15 | VAR16))
        {
            FUN3(VAR12, VAR4);
            VAR7 = FUN4(VAR7, VAR12);
        }
        if (VAR13 & (VAR17 | VAR16))
        {
            FUN3(VAR12, VAR5);
            VAR7 = FUN4(VAR7, VAR12);
        }
        if (VAR13 & VAR18)
        {
            FUN3(VAR12, VAR6);
            VAR7 = FUN4(VAR7, VAR12);
        }
    }
    return VAR7;
}