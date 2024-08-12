static VAR1 *FUN1(target_ulong VAR2, target_ulong VAR3, uint64_t VAR4)
{
    VAR1 *VAR5, **VAR6;
    int VAR7;
    unsigned int VAR8;
    target_ulong VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    FUN2(&VAR15);
    VAR16 = 0;
    FUN3();
    VAR9 = FUN4(VAR17, VAR2);
    VAR10 = VAR9 & VAR18;
    VAR11 = -1;
    VAR8 = FUN5(VAR9);
    VAR6 = &VAR19[VAR8];
    for (;;)
    {
        VAR5 = *VAR6;
        if (!VAR5)
            goto VAR20;
        if (VAR5->VAR2 == VAR2 && VAR5->VAR21[0] == VAR10 && VAR5->VAR3 == VAR3 && VAR5->VAR4 == VAR4)
        {
            if (VAR5->VAR21[1] != -1)
            {
                VAR12 = (VAR2 & VAR18) + VAR22;
                VAR11 = FUN4(VAR17, VAR12);
                if (VAR5->VAR21[1] == VAR11)
                    goto VAR23;
            }
            else
            {
                goto VAR23;
            }
        }
        VAR6 = &VAR5->VAR24;
    }
VAR20:
    VAR5 = FUN6(VAR2);
    if (!VAR5)
    {
        FUN7(VAR17);
        VAR5 = FUN6(VAR2);
        VAR16 = 1;
    }
    VAR14 = VAR25;
    VAR5->VAR14 = VAR14;
    VAR5->VAR3 = VAR3;
    VAR5->VAR4 = VAR4;
    FUN8(VAR17, VAR5, VAR26, &VAR7);
    VAR25 = (void *)(((unsigned long)VAR25 + VAR7 + VAR27 - 1) & ~(VAR27 - 1));
    VAR12 = (VAR2 + VAR5->VAR28 - 1) & VAR18;
    VAR11 = -1;
    if ((VAR2 & VAR18) != VAR12)
    {
        VAR11 = FUN4(VAR17, VAR12);
    }
    FUN9(VAR5, VAR9, VAR11);
VAR23:
    VAR17->VAR29[FUN10(VAR2)] = VAR5;
    FUN11(&VAR15);
    return VAR5;
}