static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int (*VAR5)(), int VAR6, enum MXFMetadataSetType VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10->VAR9;
    VAR11 *VAR12 = VAR6 ? FUN2(VAR6) : VAR2;
    uint64_t VAR13 = FUN3(VAR9) + VAR4->VAR14;
    if (!VAR12)
        return -1;
    while (FUN3(VAR9) + 4 < VAR13)
    {
        int VAR15 = FUN4(VAR9);
        int VAR16 = FUN4(VAR9);
        uint64_t VAR17 = FUN3(VAR9) + VAR16;
        UID VAR18;
        if (!VAR16)
        {
            FUN5(VAR2->VAR10, VAR19, "", VAR15);
            continue;
        }
        if (VAR15 > 0x7FFF)
        {
            int VAR20;
            for (VAR20 = 0; VAR20 < VAR2->VAR21; VAR20++)
            {
                int VAR22 = FUN6(VAR2->VAR23 + VAR20 * 18);
                if (VAR22 == VAR15)
                {
                    memcpy(VAR18, VAR2->VAR23 + VAR20 * 18 + 2, 16);
                    FUN7(VAR2->VAR10, "", VAR22);
                    FUN8(VAR2->VAR10, "", VAR18);
                }
            }
        }
        if (VAR6 && VAR15 == 0x3C0A)
            FUN9(VAR9, VAR12->VAR18, 16);
        else if (FUN10(VAR12, VAR9, VAR15, VAR16, VAR18) < 0)
            return -1;
        FUN11(VAR9, VAR17, VAR24);
    }
    if (VAR6)
        VAR12->VAR7 = VAR7;
    return VAR6 ? FUN12(VAR2, VAR12) : 0;
}