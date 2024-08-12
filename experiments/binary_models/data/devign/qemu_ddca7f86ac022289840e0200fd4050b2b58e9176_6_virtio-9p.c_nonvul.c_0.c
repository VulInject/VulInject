static void FUN1(void *VAR1)
{
    ssize_t VAR2;
    int32_t VAR3;
    uint64_t VAR4;
    uint32_t VAR5;
    int32_t VAR6 = 0;
    int32_t VAR7 = 0;
    size_t VAR8 = 7;
    VAR9 *VAR10;
    VAR11 *VAR12 = VAR1;
    VAR13 *VAR14 = VAR12->VAR14;
    QEMUIOVector VAR15;
    QEMUIOVector VAR16;
    VAR2 = FUN2(VAR12, VAR8, "", &VAR3, &VAR4, &VAR5);
    if (VAR2 < 0)
    {
        return FUN3(VAR14, VAR12, VAR2);
    }
    VAR8 += VAR2;
    FUN4(&VAR15, VAR12, VAR8, VAR5, true);
    FUN5(VAR12->VAR17, VAR12->VAR18, VAR3, VAR4, VAR5, VAR15.VAR19);
    VAR10 = FUN6(VAR12, VAR3);
    if (VAR10 == NULL)
    {
        VAR2 = -VAR20;
        goto VAR21;
    }
    if (VAR10->VAR22 == VAR23)
    {
        if (VAR10->VAR24.VAR25 == -1)
        {
            VAR2 = -VAR20;
            goto VAR26;
        }
    }
    else if (VAR10->VAR22 == VAR27)
    {
        VAR2 = FUN7(VAR14, VAR12, VAR10, VAR4, VAR5, VAR15.VAR28, VAR15.VAR19);
        goto VAR26;
    }
    else
    {
        VAR2 = -VAR20;
        goto VAR26;
    }
    FUN8(&VAR16, VAR15.VAR19);
    do
    {
        FUN9(&VAR16);
        FUN10(&VAR16, &VAR15, VAR7, VAR15.VAR29 - VAR7);
        if (0)
        {
            FUN11(VAR16.VAR28, VAR16.VAR19);
        }
        do
        {
            VAR6 = FUN12(VAR12, VAR10, VAR16.VAR28, VAR16.VAR19, VAR4);
            if (VAR6 >= 0)
            {
                VAR4 += VAR6;
                VAR7 += VAR6;
            }
        } while (VAR6 == -VAR30 && !VAR12->VAR31);
        if (VAR6 < 0)
        {
            VAR2 = VAR6;
            goto VAR32;
        }
    } while (VAR7 < VAR5 && VAR6 > 0);
    VAR8 = 7;
    VAR2 = FUN13(VAR12, VAR8, "", VAR7);
    if (VAR2 < 0)
    {
        goto VAR26;
    }
    VAR2 += VAR8;
    FUN14(VAR12->VAR17, VAR12->VAR18, VAR7, VAR2);
VAR32:
    FUN15(&VAR16);
VAR26:
    FUN16(VAR12, VAR10);
VAR21:
    FUN15(&VAR15);
    FUN3(VAR14, VAR12, VAR2);
}