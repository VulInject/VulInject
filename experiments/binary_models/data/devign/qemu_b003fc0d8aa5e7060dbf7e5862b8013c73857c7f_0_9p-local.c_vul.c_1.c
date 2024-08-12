static int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, int VAR5)
{
    int VAR6 = -1;
    if (VAR2->VAR7 & VAR8)
    {
        int VAR9;
        if (VAR5 == VAR10)
        {
            int VAR11;
            VAR11 = FUN2(VAR3, VAR4, VAR12 | VAR13 | VAR14);
            if (VAR11 == -1)
            {
                goto VAR15;
            }
            VAR6 = FUN3(VAR11, VAR16, VAR10);
            FUN4(VAR11);
            if (VAR6 < 0 && VAR17 != VAR18)
            {
                goto VAR15;
            }
        }
        VAR9 = FUN5(VAR3, VAR16);
        VAR6 = FUN3(VAR9, VAR4, 0);
        FUN4(VAR9);
        if (VAR6 < 0 && VAR17 != VAR18)
        {
            goto VAR15;
        }
    }
    VAR6 = FUN3(VAR3, VAR4, VAR5);
VAR15:
    return VAR6;
}