static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, UID VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11;
    UID VAR12;
    uint64_t VAR13;
    uint32_t VAR14;
    int VAR15;
    if ((VAR15 = FUN2(&VAR9->VAR16, VAR9->VAR17 + 1, sizeof(*VAR9->VAR16))) < 0)
    {
        VAR9->VAR17 = 0;
        return VAR15;
    }
    if (VAR9->VAR18)
    {
        memmove(&VAR9->VAR16[VAR9->VAR19 + 1], &VAR9->VAR16[VAR9->VAR19], (VAR9->VAR17 - VAR9->VAR19) * sizeof(*VAR9->VAR16));
        VAR11 = VAR9->VAR20 = &VAR9->VAR16[VAR9->VAR19];
    }
    else
    {
        VAR9->VAR19++;
        VAR11 = VAR9->VAR20 = &VAR9->VAR16[VAR9->VAR17];
    }
    memset(VAR11, 0, sizeof(*VAR11));
    VAR9->VAR17++;
    VAR11->VAR21 = FUN3(VAR3) - VAR7 + VAR5;
    switch (VAR6[13])
    {
    case 2:
        VAR11->VAR22 = VAR23;
        break;
    case 3:
        VAR11->VAR22 = VAR24;
        break;
    case 4:
        VAR11->VAR22 = VAR25;
        break;
    default:
        FUN4(VAR9->VAR26, VAR27, "", VAR6[13]);
        return VAR28;
    }
    VAR11->VAR29 = VAR11->VAR22 == VAR25 || !(VAR6[14] & 1);
    VAR11->VAR30 = VAR6[14] > 2;
    FUN5(VAR3, 4);
    VAR11->VAR31 = FUN6(VAR3);
    VAR11->VAR32 = FUN7(VAR3);
    VAR11->VAR33 = FUN7(VAR3);
    VAR13 = FUN7(VAR3);
    VAR11->VAR34 = FUN7(VAR3);
    VAR11->VAR35 = FUN7(VAR3);
    VAR11->VAR36 = FUN6(VAR3);
    FUN5(VAR3, 8);
    VAR11->VAR37 = FUN6(VAR3);
    FUN8(VAR3, VAR12, sizeof(VAR38));
    VAR14 = FUN6(VAR3);
    if (VAR13)
    {
        if (VAR9->VAR13 && VAR9->VAR13 != VAR13)
        {
            FUN4(VAR9->VAR26, VAR27, "" VAR39 "" VAR39 "", VAR9->VAR13, VAR13);
        }
        else
        {
            VAR9->VAR13 = VAR13;
        }
    }
    FUN9(VAR9->VAR26, "" VAR40 "" VAR40 ""
                     "" VAR40 "",
            VAR11->VAR32, VAR11->VAR33, VAR13, VAR11->VAR36, VAR11->VAR37);
    if (VAR11->VAR33 && VAR9->VAR41 + VAR11->VAR33 >= VAR7)
    {
        FUN4(VAR9->VAR26, VAR27, "");
        return VAR28;
    }
    if (VAR12[12] == 1 && VAR12[13] == 1)
        VAR9->VAR12 = VAR42;
    else if (VAR12[12] == 1 && VAR12[13] == 2)
        VAR9->VAR12 = VAR43;
    else if (VAR12[12] == 1 && VAR12[13] == 3)
        VAR9->VAR12 = VAR44;
    else if (VAR12[12] == 2 && VAR12[13] == 1)
        VAR9->VAR12 = VAR45;
    else if (VAR12[12] == 2 && VAR12[13] == 2)
        VAR9->VAR12 = VAR46;
    else if (VAR12[12] == 2 && VAR12[13] == 3)
        VAR9->VAR12 = VAR47;
    else if (VAR12[12] == 3 && VAR12[13] == 1)
        VAR9->VAR12 = VAR48;
    else if (VAR12[12] == 3 && VAR12[13] == 2)
        VAR9->VAR12 = VAR49;
    else if (VAR12[12] == 3 && VAR12[13] == 3)
        VAR9->VAR12 = VAR50;
    else if (VAR12[12] == 64 && VAR12[13] == 1)
        VAR9->VAR12 = VAR51;
    else if (VAR12[12] == 0x10)
    {
        if (VAR14 != 1)
        {
            MXFOP VAR12 = VAR14 ? VAR42 : VAR52;
            if (!VAR9->VAR12)
                FUN4(VAR9->VAR26, VAR53, ""VAR52\"", VAR14, VAR12 == VAR42 ? "" : "");
            VAR9->VAR12 = VAR12;
        }
        else
            VAR9->VAR12 = VAR52;
    }
    else
    {
        FUN4(VAR9->VAR26, VAR27, "", VAR12[12], VAR12[13]);
        VAR9->VAR12 = VAR42;
    }
    if (VAR11->VAR31 <= 0 || VAR11->VAR31 > (1 << 20))
    {
        FUN4(VAR9->VAR26, VAR53, "", VAR11->VAR31);
        if (VAR9->VAR12 == VAR51)
            VAR11->VAR31 = 512;
        else
            VAR11->VAR31 = 1;
        FUN4(VAR9->VAR26, VAR53, "", VAR11->VAR31);
    }
    return 0;
}