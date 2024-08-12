FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    unsigned int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    unsigned VAR11, VAR12;
    struct iovec VAR13[VAR14];
    struct VAR15 *VAR16;
    int VAR17;
    if (FUN2(VAR2->VAR18))
    {
        return NULL;
    }
    if (FUN3(VAR2, VAR4))
    {
        return NULL;
    }
    FUN4();
    VAR11 = VAR12 = 0;
    VAR8 = VAR4->VAR19.VAR20;
    if (VAR4->VAR21 >= VAR4->VAR19.VAR20)
    {
        FUN5(VAR2, "");
        return NULL;
    }
    if (!FUN6(VAR2, VAR4, VAR4->VAR22++, &VAR7))
    {
        return NULL;
    }
    if (FUN7(VAR2, VAR23))
    {
        FUN8(VAR4, VAR4->VAR22);
    }
    VAR6 = VAR7;
    VAR16 = VAR4->VAR19.VAR16;
    if (VAR16[VAR6].VAR24 & VAR25)
    {
        if (VAR16[VAR6].VAR26 % sizeof(struct VAR15))
        {
            FUN5(VAR2, "");
        }
        VAR8 = VAR16[VAR6].VAR26 / sizeof(struct VAR15);
        VAR16 = FUN9(VAR2, VAR16[VAR6].VAR27);
        VAR6 = 0;
    }
    do
    {
        if (VAR16[VAR6].VAR24 & VAR28)
        {
            FUN10(VAR2, &VAR12, VAR13 + VAR11, VAR14 - VAR11, true, VAR16[VAR6].VAR27, VAR16[VAR6].VAR26);
        }
        else
        {
            if (VAR12)
            {
                FUN5(VAR2, "");
                return NULL;
            }
            FUN10(VAR2, &VAR11, VAR13, VAR14, false, VAR16[VAR6].VAR27, VAR16[VAR6].VAR26);
        }
        if ((VAR12 + VAR11) > VAR8)
        {
            FUN5(VAR2, "");
        }
        VAR17 = FUN11(VAR2, VAR16, VAR6, VAR8, &VAR6);
    } while (VAR17 == VAR29);
    if (VAR17 == VAR30)
    {
        return NULL;
    }
    VAR10 = FUN12(VAR5, VAR11, VAR12);
    VAR10->VAR31 = VAR7;
    for (VAR6 = 0; VAR6 < VAR11; VAR6++)
    {
        VAR10->VAR32[VAR6] = VAR13[VAR6];
    }
    for (VAR6 = 0; VAR6 < VAR12; VAR6++)
    {
        VAR10->VAR33[VAR6] = VAR13[VAR11 + VAR6];
    }
    VAR4->VAR21++;
    return VAR10;
}