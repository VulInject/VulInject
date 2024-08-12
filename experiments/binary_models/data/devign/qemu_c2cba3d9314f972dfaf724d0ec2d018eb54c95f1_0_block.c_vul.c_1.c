int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int64_t VAR5, VAR6;
    int VAR7, VAR8, VAR9;
    int VAR10 = 0;
    VAR11 *VAR12;
    char VAR13[1024];
    if (!VAR4)
        return -VAR14;
    if (!VAR2->VAR15)
    {
        return -VAR16;
    }
    if (FUN2(VAR2) || FUN2(VAR2->VAR15))
    {
        return -VAR17;
    }
    VAR8 = VAR2->VAR15->VAR18;
    strncpy(VAR13, VAR2->VAR15->VAR13, sizeof(VAR13));
    VAR9 = VAR2->VAR15->VAR9;
    if (VAR8)
    {
        if (FUN3(VAR2->VAR15, VAR9 | VAR19, NULL))
        {
            return -VAR20;
        }
    }
    VAR6 = FUN4(VAR2) >> VAR21;
    VAR12 = FUN5(VAR22 * VAR23);
    for (VAR5 = 0; VAR5 < VAR6; VAR5 += VAR7)
    {
        if (FUN6(VAR2, VAR5, VAR22, &VAR7))
        {
            if (FUN7(VAR2, VAR5, VAR12, VAR7) != 0)
            {
                VAR10 = -VAR24;
                goto VAR25;
            }
            if (FUN8(VAR2->VAR15, VAR5, VAR12, VAR7) != 0)
            {
                VAR10 = -VAR24;
                goto VAR25;
            }
        }
    }
    if (VAR4->VAR26)
    {
        VAR10 = VAR4->FUN9(VAR2);
        FUN10(VAR2);
    }
    if (VAR2->VAR15)
        FUN10(VAR2->VAR15);
VAR25:
    FUN11(VAR12);
    if (VAR8)
    {
        FUN3(VAR2->VAR15, VAR9 & ~VAR19, NULL);
    }
    return VAR10;
}