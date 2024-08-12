static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 *VAR6)
{
    int VAR7 = -1;
    int VAR8 = 0;
    if (VAR2->VAR9 == VAR10)
    {
        int VAR11;
        ssize_t VAR12, VAR13;
        VAR11 = open(FUN2(VAR2, VAR4), VAR14 | VAR15 | VAR16, VAR17);
        if (VAR11 == -1)
        {
            return VAR11;
        }
        VAR12 = strlen(VAR3) + 1;
        do
        {
            VAR13 = write(VAR11, (void *)VAR3, VAR12);
        } while (VAR13 == -1 && VAR18 == VAR19);
        if (VAR13 != VAR12)
        {
            VAR8 = VAR18;
            close(VAR11);
            VAR7 = -1;
            goto VAR20;
        }
        close(VAR11);
        VAR6->VAR21 = VAR6->VAR21 | VAR22;
        VAR7 = FUN3(FUN2(VAR2, VAR4), VAR6);
        if (VAR7 == -1)
        {
            VAR8 = VAR18;
            goto VAR20;
        }
    }
    else if ((VAR2->VAR9 == VAR23) || (VAR2->VAR9 == VAR24))
    {
        VAR7 = FUN4(VAR3, FUN2(VAR2, VAR4));
        if (VAR7)
        {
            return VAR7;
        }
        VAR7 = FUN5(FUN2(VAR2, VAR4), VAR6->VAR25, VAR6->VAR26);
        if (VAR7 == -1)
        {
            if (VAR2->VAR9 != VAR24)
            {
                VAR8 = VAR18;
                goto VAR20;
            }
            else
                VAR7 = 0;
        }
    }
    return VAR7;
VAR20:
    remove(FUN2(VAR2, VAR4));
    VAR18 = VAR8;
    return VAR7;
}