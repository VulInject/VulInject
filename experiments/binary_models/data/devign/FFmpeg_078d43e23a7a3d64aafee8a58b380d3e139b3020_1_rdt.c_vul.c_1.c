FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16 = 1, VAR17;
    AVIOContext VAR18;
    if (!VAR4->VAR19)
        return FUN2(VAR20);
    if (VAR4->VAR21 == 0)
    {
        int VAR22;
        FUN3(&VAR18, VAR12, VAR13, 0, NULL, NULL, NULL, NULL);
        VAR15 = (VAR15 & VAR23) ? 2 : 0;
        VAR17 = FUN4(VAR4->VAR19, &VAR18, VAR6, VAR4->VAR24[VAR6->VAR25], VAR13, VAR8, &VAR16, VAR15, *VAR10);
        VAR22 = FUN5(&VAR18);
        if (VAR17 < 0)
            return VAR17;
        if (VAR17 > 0)
        {
            if (VAR6->VAR26->VAR27 == VAR28)
            {
                memcpy(VAR4->VAR29, VAR12 + VAR22, VAR13 - VAR22);
                VAR4->VAR19->VAR18 = FUN6(VAR4->VAR29, VAR13 - VAR22, 0, NULL, NULL, NULL, NULL);
            }
            goto VAR30;
        }
    }
    else
    {
    VAR30:
        VAR4->VAR21 = FUN7(VAR4->VAR19, VAR4->VAR19->VAR18, VAR6, VAR4->VAR24[VAR6->VAR25], VAR8);
        if (VAR4->VAR21 == 0 && VAR6->VAR26->VAR27 == VAR28)
            FUN8(&VAR4->VAR19->VAR18);
    }
    VAR8->VAR31 = VAR6->VAR25;
    VAR8->VAR32 = *VAR10;
    return VAR4->VAR21 > 0;
}