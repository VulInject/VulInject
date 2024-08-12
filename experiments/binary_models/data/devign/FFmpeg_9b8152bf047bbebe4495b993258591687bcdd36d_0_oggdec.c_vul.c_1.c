static int FUN1(VAR1 *VAR2, int *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    struct VAR7 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10;
    int VAR11, VAR12 = 0;
    int VAR13, VAR14;
    uint64_t VAR15;
    uint32_t VAR16;
    int VAR17, VAR18;
    uint8_t VAR19[4];
    int VAR20 = 0;
    VAR11 = FUN2(VAR5, VAR19, 4);
    if (VAR11 < 4)
        return VAR11 < 0 ? VAR11 : VAR21;
    do
    {
        int VAR22;
        if (VAR19[VAR20 & 3] == '' && VAR19[(VAR20 + 1) & 3] == '' && VAR19[(VAR20 + 2) & 3] == '' && VAR19[(VAR20 + 3) & 3] == '')
            break;
        if (!VAR12 && VAR5->VAR23 && VAR7->VAR24 > 0)
        {
            memset(VAR19, 0, 4);
            FUN3(VAR5, VAR7->VAR24 + 4, VAR25);
            VAR7->VAR24 = -1;
        }
        VAR22 = FUN4(VAR5);
        if (FUN5(VAR5))
            return VAR21;
        VAR19[VAR20++ & 3] = VAR22;
    } while (VAR12++ < VAR26);
    if (VAR12 >= VAR26)
    {
        FUN6(VAR2, VAR27, "");
        return VAR28;
    }
    if (FUN4(VAR5) != 0)
    {
        FUN6(VAR2, VAR29, "");
        return VAR28;
    }
    VAR13 = FUN4(VAR5);
    VAR15 = FUN7(VAR5);
    VAR16 = FUN8(VAR5);
    FUN9(VAR5, 8);
    VAR14 = FUN4(VAR5);
    VAR18 = FUN10(VAR7, VAR16);
    if (VAR18 < 0)
    {
        if (FUN11(VAR7))
            VAR18 = FUN12(VAR2, VAR16, VAR14);
        else
            VAR18 = FUN13(VAR2, VAR16);
        if (VAR18 < 0)
        {
            FUN6(VAR2, VAR29, "");
            return VAR18;
        }
    }
    VAR10 = VAR7->VAR30 + VAR18;
    VAR7->VAR24 = VAR10->VAR24 = FUN14(VAR5) - 27;
    if (VAR10->VAR31 > 0)
        FUN15(VAR7, VAR18);
    VAR11 = FUN2(VAR5, VAR10->VAR32, VAR14);
    if (VAR11 < VAR14)
        return VAR11 < 0 ? VAR11 : VAR21;
    VAR10->VAR14 = VAR14;
    VAR10->VAR33 = 0;
    VAR17 = 0;
    for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        VAR17 += VAR10->VAR32[VAR12];
    if (!(VAR13 & VAR34))
        VAR10->VAR35 = 1;
    if (VAR13 & VAR36 || VAR10->VAR37)
    {
        if (!VAR10->VAR31)
        {
            while (VAR10->VAR33 < VAR10->VAR14)
            {
                int VAR38 = VAR10->VAR32[VAR10->VAR33++];
                VAR10->VAR39 += VAR38;
                if (VAR38 < 255)
                    break;
            }
            VAR10->VAR40 = VAR10->VAR24;
        }
    }
    else
    {
        VAR10->VAR31 = 0;
        VAR10->VAR40 = VAR10->VAR24;
    }
    if (VAR10->VAR41 - VAR10->VAR42 < VAR17)
    {
        VAR43 *VAR44 = FUN16((VAR10->VAR41 *= 2) + VAR45);
        if (!VAR44)
            return FUN17(VAR46);
        memcpy(VAR44, VAR10->VAR47, VAR10->VAR42);
        FUN18(VAR10->VAR47);
        VAR10->VAR47 = VAR44;
    }
    VAR11 = FUN2(VAR5, VAR10->VAR47 + VAR10->VAR42, VAR17);
    if (VAR11 < VAR17)
        return VAR11 < 0 ? VAR11 : VAR21;
    VAR10->VAR42 += VAR17;
    VAR10->VAR48 = VAR15;
    VAR10->VAR13 = VAR13;
    memset(VAR10->VAR47 + VAR10->VAR42, 0, VAR45);
    if (VAR3)
        *VAR3 = VAR18;
    return 0;
}