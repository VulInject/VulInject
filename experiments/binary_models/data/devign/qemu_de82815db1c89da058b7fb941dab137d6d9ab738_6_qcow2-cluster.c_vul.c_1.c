int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    uint64_t VAR8;
    VAR9 *VAR10;
    int VAR11;
    int VAR12, VAR13;
    VAR8 = FUN2(VAR4, VAR2->VAR14->VAR15 * VAR16);
    VAR10 = FUN3((VAR8 + 7) / 8);
    VAR11 = FUN4(VAR2, VAR4->VAR7, VAR4->VAR17, &VAR10, &VAR8);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    VAR11 = FUN5(VAR2, VAR4->VAR19);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    for (VAR12 = 0; VAR12 < VAR4->VAR20; VAR12++)
    {
        int VAR21 = (VAR4->VAR22[VAR12].VAR17 * sizeof(VAR6) + VAR16 - 1) / VAR16;
        VAR7 = FUN6(VAR7, VAR21 * VAR16);
        VAR11 = FUN7(VAR2->VAR14, VAR4->VAR22[VAR12].VAR23 / VAR16, (void *)VAR7, VAR21);
        if (VAR11 < 0)
        {
            goto VAR18;
        }
        for (VAR13 = 0; VAR13 < VAR4->VAR22[VAR12].VAR17; VAR13++)
        {
            FUN8(&VAR7[VAR13]);
        }
        VAR11 = FUN4(VAR2, VAR7, VAR4->VAR22[VAR12].VAR17, &VAR10, &VAR8);
        if (VAR11 < 0)
        {
            goto VAR18;
        }
    }
    VAR11 = 0;
VAR18:
    FUN9(VAR10);
    FUN9(VAR7);
    return VAR11;
}