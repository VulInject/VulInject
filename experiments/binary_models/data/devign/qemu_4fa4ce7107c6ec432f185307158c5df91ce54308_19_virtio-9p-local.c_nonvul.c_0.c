static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, VAR7 *VAR8, VAR9 *VAR10)
{
    char *VAR11;
    int VAR12 = -1;
    int VAR13 = -1;
    int VAR14 = 0;
    V9fsString VAR15;
    char *VAR16;
    VAR6 |= VAR17;
    FUN2(&VAR15);
    FUN3(&VAR15, "", VAR4->VAR18, VAR5);
    VAR11 = VAR15.VAR18;
    if (VAR2->VAR19 & VAR20)
    {
        VAR16 = FUN4(VAR2, VAR11);
        VAR12 = open(VAR16, VAR6, VAR21);
        if (VAR12 == -1)
        {
            FUN5(VAR16);
            VAR13 = VAR12;
            goto VAR22;
        }
        VAR8->VAR23 = VAR8->VAR23 | VAR24;
        VAR13 = FUN6(VAR16, VAR8);
        if (VAR13 == -1)
        {
            VAR14 = VAR25;
            goto VAR26;
        }
    }
    else if (VAR2->VAR19 & VAR27)
    {
        VAR16 = FUN4(VAR2, VAR11);
        VAR12 = open(VAR16, VAR6, VAR21);
        if (VAR12 == -1)
        {
            FUN5(VAR16);
            VAR13 = VAR12;
            goto VAR22;
        }
        VAR8->VAR23 = VAR8->VAR23 | VAR24;
        VAR13 = FUN7(VAR2, VAR11, VAR8);
        if (VAR13 == -1)
        {
            VAR14 = VAR25;
            goto VAR26;
        }
    }
    else if ((VAR2->VAR19 & VAR28) || (VAR2->VAR19 & VAR29))
    {
        VAR16 = FUN4(VAR2, VAR11);
        VAR12 = open(VAR16, VAR6, VAR8->VAR23);
        if (VAR12 == -1)
        {
            FUN5(VAR16);
            VAR13 = VAR12;
            goto VAR22;
        }
        VAR13 = FUN8(VAR2, VAR11, VAR8);
        if (VAR13 == -1)
        {
            VAR14 = VAR25;
            goto VAR26;
        }
    }
    VAR13 = VAR12;
    VAR10->VAR12 = VAR12;
    goto VAR22;
VAR26:
    close(VAR12);
    remove(VAR16);
    VAR25 = VAR14;
    FUN5(VAR16);
VAR22:
    FUN9(&VAR15);
    return VAR13;
}