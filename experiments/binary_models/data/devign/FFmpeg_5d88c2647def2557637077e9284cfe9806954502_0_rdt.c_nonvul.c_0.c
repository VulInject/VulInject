FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, const VAR9 *VAR10, int VAR11, int VAR12)
{
    int VAR13 = 1, VAR14;
    ByteIOContext VAR15;
    if (VAR2->VAR16 == 0)
    {
        int VAR17;
        FUN2(&VAR15, VAR10, VAR11, 0, NULL, NULL, NULL, NULL);
        VAR12 = (VAR12 & VAR18) ? 2 : 0;
        VAR14 = FUN3(VAR2->VAR19, &VAR15, VAR4, VAR2->VAR20[0], VAR11, VAR6, &VAR13, &VAR12, VAR8);
        VAR17 = FUN4(&VAR15);
        if (VAR14 < 0)
            return VAR14;
        VAR2->VAR16 = VAR14;
        if (VAR2->VAR16 > 0 && VAR4->VAR21->VAR22 == VAR23)
        {
            memcpy(VAR2->VAR24, VAR10 + VAR17, VAR11 - VAR17);
            VAR2->VAR19->VAR15 = FUN5(VAR2->VAR24, VAR11 - VAR17, 0, NULL, NULL, NULL, NULL);
        }
    }
    else
    {
        FUN6(VAR2->VAR19, VAR2->VAR19->VAR15, VAR4, VAR2->VAR20[0], VAR6);
        if (VAR2->VAR16 == 0 && VAR4->VAR21->VAR22 == VAR23)
            FUN7(&VAR2->VAR19->VAR15);
    }
    VAR6->VAR25 = VAR4->VAR26;
    VAR6->VAR27 = *VAR8;
    return VAR2->VAR16 > 0;
}