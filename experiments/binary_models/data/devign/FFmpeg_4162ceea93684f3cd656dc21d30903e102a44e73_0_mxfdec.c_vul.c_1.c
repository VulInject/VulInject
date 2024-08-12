static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, UID VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11, *VAR12;
    UID VAR13;
    uint64_t VAR14;
    uint32_t VAR15;
    VAR12 = FUN2(VAR9->VAR16, VAR9->VAR17 + 1, sizeof(*VAR9->VAR16));
    if (!VAR12)
        return FUN3(VAR18);
    VAR9->VAR16 = VAR12;
    if (VAR9->VAR19)
    {
        memmove(&VAR9->VAR16[VAR9->VAR20 + 1], &VAR9->VAR16[VAR9->VAR20], (VAR9->VAR17 - VAR9->VAR20) * sizeof(*VAR9->VAR16));
        VAR11 = VAR9->VAR21 = &VAR9->VAR16[VAR9->VAR20];
    }
    else
    {
        VAR9->VAR20++;
        VAR11 = VAR9->VAR21 = &VAR9->VAR16[VAR9->VAR17];
    }
    memset(VAR11, 0, sizeof(*VAR11));
    VAR9->VAR17++;
    VAR11->VAR22 = FUN4(VAR3) - VAR7 + VAR5;
    switch (VAR6[13])
    {
    case 2:
        VAR11->VAR23 = VAR24;
        break;
    case 3:
        VAR11->VAR23 = VAR25;
        break;
    case 4:
        VAR11->VAR23 = VAR26;
        break;
    default:
        FUN5(VAR9->VAR27, VAR28, "", VAR6[13]);
        return VAR29;
    }
    VAR11->VAR30 = VAR11->VAR23 == VAR26 || !(VAR6[14] & 1);
    VAR11->VAR31 = VAR6[14] > 2;
    FUN6(VAR3, 4);
    VAR11->VAR32 = FUN7(VAR3);
    VAR11->VAR33 = FUN8(VAR3);
    VAR11->VAR34 = FUN8(VAR3);
    VAR14 = FUN8(VAR3);
    VAR11->VAR35 = FUN8(VAR3);
    VAR11->VAR36 = FUN8(VAR3);
    VAR11->VAR37 = FUN7(VAR3);
    FUN6(VAR3, 8);
    VAR11->VAR38 = FUN7(VAR3);
    FUN9(VAR3, VAR13, sizeof(VAR39));
    VAR15 = FUN7(VAR3);
    if (VAR14)
    {
        if (VAR9->VAR14 && VAR9->VAR14 != VAR14)
        {
            FUN5(VAR9->VAR27, VAR28, "" VAR40 "" VAR40 "", VAR9->VAR14, VAR14);
        }
        else
        {
            VAR9->VAR14 = VAR14;
        }
    }
    FUN10(VAR9->VAR27, "" VAR41 "" VAR41 ""
                     "" VAR41 "",
            VAR11->VAR33, VAR11->VAR34, VAR14, VAR11->VAR37, VAR11->VAR38);
    if (VAR11->VAR34 && VAR9->VAR42 + VAR11->VAR34 >= VAR7)
    {
        FUN5(VAR9->VAR27, VAR28, "");
        return VAR29;
    }
    if (VAR13[12] == 1 && VAR13[13] == 1)
        VAR9->VAR13 = VAR43;
    else if (VAR13[12] == 1 && VAR13[13] == 2)
        VAR9->VAR13 = VAR44;
    else if (VAR13[12] == 1 && VAR13[13] == 3)
        VAR9->VAR13 = VAR45;
    else if (VAR13[12] == 2 && VAR13[13] == 1)
        VAR9->VAR13 = VAR46;
    else if (VAR13[12] == 2 && VAR13[13] == 2)
        VAR9->VAR13 = VAR47;
    else if (VAR13[12] == 2 && VAR13[13] == 3)
        VAR9->VAR13 = VAR48;
    else if (VAR13[12] == 3 && VAR13[13] == 1)
        VAR9->VAR13 = VAR49;
    else if (VAR13[12] == 3 && VAR13[13] == 2)
        VAR9->VAR13 = VAR50;
    else if (VAR13[12] == 3 && VAR13[13] == 3)
        VAR9->VAR13 = VAR51;
    else if (VAR13[12] == 64 && VAR13[13] == 1)
        VAR9->VAR13 = VAR52;
    else if (VAR13[12] == 0x10)
    {
        if (VAR15 != 1)
        {
            MXFOP VAR13 = VAR15 ? VAR43 : VAR53;
            if (!VAR9->VAR13)
                FUN5(VAR9->VAR27, VAR54, ""VAR53\"", VAR15, VAR13 == VAR43 ? "" : "");
            VAR9->VAR13 = VAR13;
        }
        else
            VAR9->VAR13 = VAR53;
    }
    else
    {
        FUN5(VAR9->VAR27, VAR28, "", VAR13[12], VAR13[13]);
        VAR9->VAR13 = VAR43;
    }
    if (VAR11->VAR32 <= 0 || VAR11->VAR32 > (1 << 20))
    {
        FUN5(VAR9->VAR27, VAR54, "", VAR11->VAR32);
        if (VAR9->VAR13 == VAR52)
            VAR11->VAR32 = 512;
        else
            VAR11->VAR32 = 1;
        FUN5(VAR9->VAR27, VAR54, "", VAR11->VAR32);
    }
    return 0;
}