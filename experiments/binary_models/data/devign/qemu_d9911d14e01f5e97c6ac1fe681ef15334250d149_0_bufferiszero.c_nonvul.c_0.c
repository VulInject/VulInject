static void FUN1((VAR1)) FUN2(void)
{
    int VAR2 = FUN3(0, NULL);
    int VAR3, VAR4, VAR5, VAR6;
    unsigned VAR7 = 0;
    if (VAR2 >= 1)
    {
        FUN4(1, VAR3, VAR4, VAR5, VAR6);
        if (VAR6 & VAR8)
        {
            VAR7 |= VAR9;
        }
        if (VAR5 & VAR10)
        {
            VAR7 |= VAR11;
        }
        if ((VAR5 & VAR12) && (VAR5 & VAR13) && VAR2 >= 7)
        {
            int VAR14;
            __asm(""
                  : ""(VAR14), ""(VAR6)
                  : ""(0));
            FUN5(7, 0, VAR3, VAR4, VAR5, VAR6);
            if ((VAR14 & 6) == 6 && (VAR4 & VAR15))
            {
                VAR7 |= VAR16;
            }
        }
    }
    VAR17 = VAR7;
    FUN6(VAR7);
}