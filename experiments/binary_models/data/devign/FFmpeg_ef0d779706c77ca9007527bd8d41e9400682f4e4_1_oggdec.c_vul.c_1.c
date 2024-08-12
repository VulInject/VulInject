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
        VAR22 = FUN3(VAR5);
        if (VAR5->VAR23)
            return VAR21;
        VAR19[VAR20++ & 3] = VAR22;
    } while (VAR12++ < VAR24);
    if (VAR12 >= VAR24)
    {
        FUN4(VAR2, VAR25, "");
        return VAR26;
    }
    if (FUN3(VAR5) != 0)
        return VAR26;
    VAR13 = FUN3(VAR5);
    VAR15 = FUN5(VAR5);
    VAR16 = FUN6(VAR5);
    FUN7(VAR5, 8);
    VAR14 = FUN3(VAR5);
    VAR18 = FUN8(VAR7, VAR16);
    if (VAR18 < 0)
    {
        if (VAR7->VAR27)
        {
            int VAR28;
            for (VAR28 = 0; VAR28 < VAR7->VAR29; VAR28++)
            {
                FUN9(&VAR7->VAR30[VAR28].VAR31);
                if (!VAR7->VAR32 || VAR7->VAR32->VAR30[VAR28].private != VAR7->VAR30[VAR28].private)
                    FUN9(&VAR7->VAR30[VAR28].private);
            }
            VAR7->VAR33 = -1;
            VAR7->VAR29 = 0;
            VAR18 = FUN10(VAR2, VAR16, 0);
        }
        else
        {
            VAR18 = FUN10(VAR2, VAR16, 1);
        }
        if (VAR18 < 0)
            return VAR18;
    }
    VAR10 = VAR7->VAR30 + VAR18;
    VAR10->VAR34 = FUN11(VAR5) - 27;
    if (VAR10->VAR35 > 0)
        FUN12(VAR7, VAR18);
    VAR11 = FUN2(VAR5, VAR10->VAR36, VAR14);
    if (VAR11 < VAR14)
        return VAR11 < 0 ? VAR11 : VAR21;
    VAR10->VAR14 = VAR14;
    VAR10->VAR37 = 0;
    VAR17 = 0;
    for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        VAR17 += VAR10->VAR36[VAR12];
    if (VAR13 & VAR38 || VAR10->VAR39)
    {
        if (!VAR10->VAR35)
        {
            while (VAR10->VAR37 < VAR10->VAR14)
            {
                int VAR40 = VAR10->VAR36[VAR10->VAR37++];
                VAR10->VAR41 += VAR40;
                if (VAR40 < 255)
                    break;
            }
            VAR10->VAR42 = VAR10->VAR34;
        }
    }
    else
    {
        VAR10->VAR35 = 0;
        VAR10->VAR42 = VAR10->VAR34;
    }
    if (VAR10->VAR43 - VAR10->VAR44 < VAR17)
    {
        VAR45 *VAR46 = FUN13(VAR10->VAR43 *= 2);
        memcpy(VAR46, VAR10->VAR31, VAR10->VAR44);
        FUN14(VAR10->VAR31);
        VAR10->VAR31 = VAR46;
    }
    VAR11 = FUN2(VAR5, VAR10->VAR31 + VAR10->VAR44, VAR17);
    if (VAR11 < VAR17)
        return VAR11 < 0 ? VAR11 : VAR21;
    VAR10->VAR44 += VAR17;
    VAR10->VAR47 = VAR15;
    VAR10->VAR13 = VAR13;
    if (VAR3)
        *VAR3 = VAR18;
    return 0;
}