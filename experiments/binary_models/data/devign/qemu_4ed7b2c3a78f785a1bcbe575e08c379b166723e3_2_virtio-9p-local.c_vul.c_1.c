static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, VAR7 *VAR8)
{
    int VAR9 = -1;
    int VAR10 = 0;
    char *VAR11;
    V9fsString VAR12;
    char *VAR13;
    FUN2(&VAR12);
    FUN3(&VAR12, "", VAR5->VAR14, VAR6);
    VAR11 = VAR12.VAR14;
    if (VAR2->VAR15 & VAR16)
    {
        int VAR17;
        ssize_t VAR18, VAR19;
        VAR13 = FUN4(VAR2, VAR11);
        VAR17 = open(VAR13, VAR20 | VAR21 | VAR22 | VAR23, VAR24);
        if (VAR17 == -1)
        {
            FUN5(VAR13);
            VAR9 = VAR17;
            goto VAR25;
        }
        VAR18 = strlen(VAR3);
        do
        {
            VAR19 = write(VAR17, (void *)VAR3, VAR18);
        } while (VAR19 == -1 && VAR26 == VAR27);
        if (VAR19 != VAR18)
        {
            VAR10 = VAR26;
            close(VAR17);
            VAR9 = -1;
            goto VAR28;
        }
        close(VAR17);
        VAR8->VAR29 = VAR8->VAR29 | VAR30;
        VAR9 = FUN6(VAR13, VAR8);
        if (VAR9 == -1)
        {
            VAR10 = VAR26;
            goto VAR28;
        }
    }
    else if (VAR2->VAR15 & VAR31)
    {
        int VAR17;
        ssize_t VAR18, VAR19;
        VAR13 = FUN4(VAR2, VAR11);
        VAR17 = open(VAR13, VAR20 | VAR21 | VAR22 | VAR23, VAR24);
        if (VAR17 == -1)
        {
            FUN5(VAR13);
            VAR9 = VAR17;
            goto VAR25;
        }
        VAR18 = strlen(VAR3);
        do
        {
            VAR19 = write(VAR17, (void *)VAR3, VAR18);
        } while (VAR19 == -1 && VAR26 == VAR27);
        if (VAR19 != VAR18)
        {
            VAR10 = VAR26;
            close(VAR17);
            VAR9 = -1;
            goto VAR28;
        }
        close(VAR17);
        VAR8->VAR29 = VAR8->VAR29 | VAR30;
        VAR9 = FUN7(VAR2, VAR11, VAR8);
        if (VAR9 == -1)
        {
            VAR10 = VAR26;
            goto VAR28;
        }
    }
    else if ((VAR2->VAR15 & VAR32) || (VAR2->VAR15 & VAR33))
    {
        VAR13 = FUN4(VAR2, VAR11);
        VAR9 = FUN8(VAR3, VAR13);
        if (VAR9)
        {
            FUN5(VAR13);
            goto VAR25;
        }
        VAR9 = FUN9(VAR13, VAR8->VAR34, VAR8->VAR35);
        if (VAR9 == -1)
        {
            if ((VAR2->VAR15 & VAR36) != VAR33)
            {
                VAR10 = VAR26;
                goto VAR28;
            }
            else
                VAR9 = 0;
        }
    }
    goto VAR25;
VAR28:
    remove(VAR13);
    VAR26 = VAR10;
    FUN5(VAR13);
VAR25:
    FUN10(&VAR12);
    return VAR9;
}