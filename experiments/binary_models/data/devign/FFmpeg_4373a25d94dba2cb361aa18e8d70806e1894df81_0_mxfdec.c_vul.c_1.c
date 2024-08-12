static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, enum MXFMetadataSetType VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11->VAR10;
    VAR12 *VAR13 = VAR7 ? FUN2(VAR7) : VAR2;
    uint64_t VAR14 = FUN3(VAR10) + VAR4->VAR15;
    if (!VAR13)
        return FUN4(VAR16);
    FUN5(VAR13, VAR8);
    while (FUN3(VAR10) + 4 < VAR14 && !FUN6(VAR10))
    {
        int VAR17;
        int VAR18 = FUN7(VAR10);
        int VAR19 = FUN7(VAR10);
        uint64_t VAR20 = FUN3(VAR10) + VAR19;
        UID VAR21 = {0};
        FUN8(VAR2->VAR11, "", VAR18, VAR19);
        if (!VAR19)
        {
            FUN9(VAR2->VAR11, VAR22, "", VAR18);
            continue;
        }
        if (VAR18 > 0x7FFF)
        {
            int VAR23;
            for (VAR23 = 0; VAR23 < VAR2->VAR24; VAR23++)
            {
                int VAR25 = FUN10(VAR2->VAR26 + VAR23 * 18);
                if (VAR25 == VAR18)
                {
                    memcpy(VAR21, VAR2->VAR26 + VAR23 * 18 + 2, 16);
                    FUN8(VAR2->VAR11, "", VAR25);
                    FUN11(VAR2->VAR11, "", VAR21);
                }
            }
        }
        if (VAR7 && VAR18 == 0x3C0A)
            FUN12(VAR10, VAR13->VAR21, 16);
        else if ((VAR17 = FUN13(VAR13, VAR10, VAR18, VAR19, VAR21, -1)) < 0)
            return VAR17;
        if (FUN3(VAR10) > VAR14)
        {
            if (VAR7)
                FUN14(VAR13);
            FUN9(VAR2->VAR11, VAR22, "" VAR27 "", VAR18, VAR4->VAR28);
            return VAR29;
        }
        else if (FUN3(VAR10) <= VAR20)
            FUN15(VAR10, VAR20, VAR30);
    }
    if (VAR7)
        VAR13->VAR8 = VAR8;
    return VAR7 ? FUN16(VAR2, VAR13) : 0;
}