static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    uint8_t VAR16, VAR17, VAR18, VAR19;
    const VAR11 *VAR20 = NULL;
    uint16_t VAR21;
    uint32_t VAR22;
    int VAR23;
    if (VAR13 < 8)
    {
        FUN2(VAR2, VAR24, "");
        return VAR25;
    }
    VAR22 = FUN3(VAR12 + 1);
    VAR16 = FUN4(VAR12 + 4);
    VAR17 = FUN4(VAR12 + 5);
    VAR18 = FUN4(VAR12 + 6);
    VAR19 = FUN4(VAR12 + 7);
    VAR12 += 8;
    VAR13 -= 8;
    if (VAR16 > 1)
    {
        FUN2(VAR2, VAR24, "", VAR16);
        return VAR26;
    }
    if (VAR22 == 0)
    {
        uint8_t VAR27[128];
        uint8_t VAR28[1024];
        if (VAR17 > 127)
        {
            uint8_t VAR29;
            if (VAR13 < 4)
            {
                FUN2(VAR2, VAR24, "");
                return VAR25;
            }
            VAR29 = FUN4(VAR12 + 1);
            VAR21 = FUN5(VAR12 + 2);
            VAR12 += 4;
            VAR13 -= 4;
            if (VAR29)
                FUN2(VAR2, VAR30, "");
            if (VAR21 > 0)
            {
                if (VAR13 < VAR21)
                {
                    FUN2(VAR2, VAR24, "");
                    return VAR25;
                }
                VAR20 = VAR12;
                VAR12 += VAR21;
                VAR13 -= VAR21;
                if (VAR17 < 255)
                {
                    if (VAR4->VAR31[VAR17 - 128] && (VAR4->VAR31[VAR17 - 128] != VAR21 || memcmp(VAR20, &VAR4->VAR20[VAR17 - 128][0], VAR21)))
                    {
                        FUN2(VAR2, VAR30, "", VAR17);
                    }
                    else if (!VAR4->VAR31[VAR17 - 128] && VAR21 <= 128)
                    {
                        memcpy(&VAR4->VAR20[VAR17 - 128][0], VAR20, VAR21);
                        VAR4->VAR31[VAR17 - 128] = VAR21;
                    }
                }
            }
            else
            {
                if (VAR17 == 255)
                {
                    FUN2(VAR2, VAR24, "");
                    return VAR25;
                }
                if (!VAR4->VAR31[VAR17 - 128])
                {
                    FUN2(VAR2, VAR24, "", VAR17);
                    return VAR25;
                }
                VAR20 = &VAR4->VAR20[VAR17 - 128][0];
                VAR21 = VAR4->VAR31[VAR17 - 128];
            }
        }
        else
        {
            if (VAR17 == 0 || VAR17 > 99)
            {
                FUN2(VAR2, VAR24, "", VAR17);
                return VAR25;
            }
            FUN6(VAR27, VAR17);
            VAR20 = VAR27;
            VAR21 = sizeof(VAR27);
        }
        FUN7(&VAR4->VAR32);
        if ((VAR23 = FUN8(&VAR4->VAR32)) < 0)
            return VAR23;
        VAR4->VAR10 = *VAR10;
        VAR4->VAR33 = FUN9(VAR28, sizeof(VAR28), VAR16, VAR18, VAR19, VAR20, VAR21 / 64);
        FUN10(VAR4->VAR32, VAR28, VAR4->VAR33);
    }
    if (!VAR4->VAR32)
    {
        FUN2(VAR2, VAR24, "");
        return FUN11(VAR34);
    }
    if (VAR4->VAR10 != *VAR10)
    {
        FUN7(&VAR4->VAR32);
        FUN2(VAR2, VAR24, "");
        return VAR25;
    }
    if (VAR22 != FUN12(VAR4->VAR32) - VAR4->VAR33)
    {
        FUN2(VAR2, VAR24, "");
        return FUN11(VAR34);
    }
    FUN10(VAR4->VAR32, VAR12, VAR13);
    if (VAR15 & VAR35)
    {
        uint8_t VAR12[2] = {0xff, VAR36};
        FUN10(VAR4->VAR32, VAR12, sizeof(VAR12));
        if ((VAR23 = FUN13(VAR8, &VAR4->VAR32, VAR6->VAR37)) < 0)
        {
            FUN2(VAR2, VAR24, "");
            return VAR23;
        }
        return 0;
    }
    return FUN11(VAR34);
}