VAR1 *FUN1(const VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    if (!VAR3)
        return NULL;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
        return NULL;
    VAR5->VAR6 = &VAR7;
    VAR5->VAR3 = VAR3;
    VAR5->VAR8 = VAR4 ? FUN3(VAR4) : NULL;
    if (VAR3->VAR9)
    {
        VAR5->VAR10 = FUN2(VAR3->VAR9);
        if (!VAR5->VAR10)
            goto VAR11;
    }
    if (VAR3->VAR12)
    {
        *(const VAR13 **)VAR5->VAR10 = VAR3->VAR12;
        FUN4(VAR5->VAR10);
    }
    VAR5->VAR14 = FUN5(VAR3->VAR15);
    if (VAR5->VAR14)
    {
        VAR5->VAR16 = FUN6(sizeof(VAR17) * VAR5->VAR14);
        if (!VAR5->VAR16)
            goto VAR11;
        memcpy(VAR5->VAR16, VAR3->VAR15, sizeof(VAR17) * VAR5->VAR14);
        VAR5->VAR15 = FUN2(sizeof(VAR18 *) * VAR5->VAR14);
        if (!VAR5->VAR15)
            goto VAR11;
    }
    VAR5->VAR19 = FUN5(VAR3->VAR20);
    if (VAR5->VAR19)
    {
        VAR5->VAR21 = FUN6(sizeof(VAR17) * VAR5->VAR19);
        if (!VAR5->VAR21)
            goto VAR11;
        memcpy(VAR5->VAR21, VAR3->VAR20, sizeof(VAR17) * VAR5->VAR19);
        VAR5->VAR20 = FUN2(sizeof(VAR18 *) * VAR5->VAR19);
        if (!VAR5->VAR20)
            goto VAR11;
    }
    VAR5->VAR22 = VAR5->VAR19;
    VAR5->VAR23 = VAR5->VAR14;
    return VAR5;
VAR11:
    FUN7(&VAR5->VAR15);
    FUN7(&VAR5->VAR16);
    VAR5->VAR14 = 0;
    FUN7(&VAR5->VAR20);
    FUN7(&VAR5->VAR21);
    VAR5->VAR19 = 0;
    FUN7(&VAR5->VAR10);
    FUN8(VAR5);
    return NULL;
}