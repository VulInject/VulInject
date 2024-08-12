static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR3 *VAR6, const char *VAR7)
{
    int VAR8;
    int VAR9, VAR10;
    VAR9 = FUN2(VAR2, VAR4->VAR11);
    if (VAR9 == -1)
    {
        return -1;
    }
    VAR10 = FUN2(VAR2, VAR6->VAR11);
    if (VAR10 == -1)
    {
        FUN3(VAR9);
        return -1;
    }
    VAR8 = FUN4(VAR9, VAR5, VAR10, VAR7);
    if (VAR8 < 0)
    {
        goto VAR12;
    }
    if (VAR2->VAR13 & VAR14)
    {
        int VAR15, VAR16;
        VAR8 = FUN5(VAR10, VAR17, 0700);
        if (VAR8 < 0 && VAR18 != VAR19)
        {
            goto VAR20;
        }
        VAR15 = FUN6(VAR9, VAR17, VAR21 | VAR22 | VAR23);
        if (VAR15 == -1)
        {
            goto VAR24;
        }
        VAR16 = FUN6(VAR10, VAR17, VAR21 | VAR22 | VAR23);
        if (VAR16 == -1)
        {
            FUN3(VAR15);
            goto VAR24;
        }
        VAR8 = FUN4(VAR15, VAR5, VAR16, VAR7);
        FUN3(VAR16);
        FUN3(VAR15);
        if (VAR8 < 0 && VAR18 != VAR25)
        {
            goto VAR20;
        }
        VAR8 = 0;
    }
    goto VAR12;
VAR24:
    VAR8 = -1;
VAR20:
    FUN7(VAR10, VAR7, VAR9, VAR5);
VAR12:
    FUN3(VAR10);
    FUN3(VAR9);
    return VAR8;
}