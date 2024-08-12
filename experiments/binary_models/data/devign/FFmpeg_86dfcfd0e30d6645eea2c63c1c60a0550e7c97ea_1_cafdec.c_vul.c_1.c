static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    if (VAR3 < 0 || VAR3 > VAR9 - VAR10)
        return -1;
    if (VAR7->VAR11->VAR12 == VAR13)
    {
        int VAR14, VAR15;
        MOVAtom VAR16;
        VAR14 = FUN2(VAR5);
        FUN3(VAR2, VAR5, VAR16);
        VAR15 = VAR3 - (FUN2(VAR5) - VAR14);
        if (VAR15 < 0 || !VAR7->VAR11->VAR17 || VAR7->VAR11->VAR12 != VAR13)
        {
            FUN4(VAR2, VAR18, "");
            return VAR19;
        }
        FUN5(VAR5, VAR15);
    }
    else if (VAR7->VAR11->VAR12 == VAR20)
    {
        uint8_t VAR21[12];
        if (VAR3 < VAR22)
        {
            FUN4(VAR2, VAR18, "");
            FUN5(VAR5, VAR3);
            return VAR19;
        }
        FUN6(VAR5, VAR21, VAR23);
        VAR7->VAR11->VAR17 = FUN7(VAR24 + VAR10);
        if (!VAR7->VAR11->VAR17)
            return FUN8(VAR25);
        if (!memcmp(&VAR21[4], "", 8))
        {
            if (VAR3 < VAR23 + VAR24)
            {
                FUN4(VAR2, VAR18, "");
                FUN9(&VAR7->VAR11->VAR17);
                return VAR19;
            }
            FUN6(VAR5, VAR7->VAR11->VAR17, VAR24);
            FUN5(VAR5, VAR3 - VAR23 - VAR24);
        }
        else
        {
            FUN10(VAR7->VAR11->VAR17, 36);
            memcpy(&VAR7->VAR11->VAR17[4], "", 4);
            FUN10(&VAR7->VAR11->VAR17[8], 0);
            memcpy(&VAR7->VAR11->VAR17[12], VAR21, 12);
            FUN6(VAR5, &VAR7->VAR11->VAR17[24], VAR22 - 12);
            FUN5(VAR5, VAR3 - VAR22);
        }
        VAR7->VAR11->VAR26 = VAR24;
    }
    else
    {
        VAR7->VAR11->VAR17 = FUN7(VAR3 + VAR10);
        if (!VAR7->VAR11->VAR17)
            return FUN8(VAR25);
        FUN6(VAR5, VAR7->VAR11->VAR17, VAR3);
        VAR7->VAR11->VAR26 = VAR3;
    }
    return 0;
}