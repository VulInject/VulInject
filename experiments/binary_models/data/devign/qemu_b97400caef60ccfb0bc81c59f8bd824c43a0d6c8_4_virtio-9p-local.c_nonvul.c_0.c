static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, VAR7 *VAR8)
{
    int VAR9 = -1;
    int VAR10 = 0;
    char *VAR11;
    V9fsString VAR12;
    char VAR13[VAR14];
    FUN2(&VAR12);
    FUN3(&VAR12, "", VAR5->VAR15, VAR6);
    VAR11 = VAR12.VAR15;
    if (VAR2->VAR16 & VAR17)
    {
        int VAR18;
        ssize_t VAR19, VAR20;
        VAR18 = open(FUN4(VAR2, VAR11, VAR13), VAR21 | VAR22 | VAR23, VAR24);
        if (VAR18 == -1)
        {
            VAR9 = VAR18;
            goto VAR25;
        }
        VAR19 = strlen(VAR3);
        do
        {
            VAR20 = write(VAR18, (void *)VAR3, VAR19);
        } while (VAR20 == -1 && VAR26 == VAR27);
        if (VAR20 != VAR19)
        {
            VAR10 = VAR26;
            close(VAR18);
            VAR9 = -1;
            goto VAR28;
        }
        close(VAR18);
        VAR8->VAR29 = VAR8->VAR29 | VAR30;
        VAR9 = FUN5(FUN4(VAR2, VAR11, VAR13), VAR8);
        if (VAR9 == -1)
        {
            VAR10 = VAR26;
            goto VAR28;
        }
    }
    else if ((VAR2->VAR16 & VAR31) || (VAR2->VAR16 & VAR32))
    {
        VAR9 = FUN6(VAR3, FUN4(VAR2, VAR11, VAR13));
        if (VAR9)
        {
            goto VAR25;
        }
        VAR9 = FUN7(FUN4(VAR2, VAR11, VAR13), VAR8->VAR33, VAR8->VAR34);
        if (VAR9 == -1)
        {
            if ((VAR2->VAR16 & VAR35) != VAR32)
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
    remove(FUN4(VAR2, VAR11, VAR13));
    VAR26 = VAR10;
VAR25:
    FUN8(&VAR12);
    return VAR9;
}