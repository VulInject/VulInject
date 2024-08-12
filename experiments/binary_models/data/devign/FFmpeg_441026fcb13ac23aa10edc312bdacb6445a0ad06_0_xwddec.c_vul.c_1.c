static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11, VAR12, VAR13 = VAR6->VAR14;
    uint32_t VAR15, VAR16, VAR17, VAR18;
    uint32_t VAR19, VAR20, VAR21, VAR22, VAR23;
    uint32_t VAR24, VAR25, VAR26, VAR27, VAR28;
    uint32_t VAR29[3];
    VAR9 *VAR30;
    GetByteContext VAR31;
    if (VAR13 < VAR32)
        return VAR33;
    FUN2(&VAR31, VAR10, VAR13);
    VAR16 = FUN3(&VAR31);
    VAR15 = FUN3(&VAR31);
    if (VAR15 != VAR34)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR13 < VAR16 || VAR16 < VAR32)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    VAR24 = FUN3(&VAR31);
    VAR25 = FUN3(&VAR31);
    VAR2->VAR36 = FUN3(&VAR31);
    VAR2->VAR37 = FUN3(&VAR31);
    VAR19 = FUN3(&VAR31);
    VAR20 = FUN3(&VAR31);
    VAR26 = FUN3(&VAR31);
    VAR27 = FUN3(&VAR31);
    VAR28 = FUN3(&VAR31);
    VAR21 = FUN3(&VAR31);
    VAR22 = FUN3(&VAR31);
    VAR17 = FUN3(&VAR31);
    VAR29[0] = FUN3(&VAR31);
    VAR29[1] = FUN3(&VAR31);
    VAR29[2] = FUN3(&VAR31);
    FUN5(&VAR31, 8);
    VAR18 = FUN3(&VAR31);
    FUN5(&VAR31, VAR16 - (VAR32 - 20));
    FUN4(VAR2, VAR38, "" VAR39 "" VAR39 "" VAR39 "" VAR39 "" VAR39 "", VAR24, VAR25, VAR26, VAR27, VAR28);
    FUN4(VAR2, VAR38, "" VAR39 "" VAR39 "" VAR39 "" VAR39 "" VAR39 "" VAR39 "", VAR17, VAR18, VAR21, VAR20, VAR22, VAR19);
    FUN4(VAR2, VAR38, "" VAR40 "" VAR40 "" VAR40 "", VAR29[0], VAR29[1], VAR29[2]);
    if (VAR24 > VAR41)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR25 == 0 || VAR25 > 32)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR19)
    {
        FUN6(VAR2, "" VAR39 "", VAR19);
        return VAR42;
    }
    if (VAR20 > 1)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR27 > 1)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR26 != 8 && VAR26 != 16 && VAR26 != 32)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR28 != 8 && VAR28 != 16 && VAR28 != 32)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR21 == 0 || VAR21 > 32)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR18 > 256)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if ((VAR12 = FUN7(VAR2->VAR36, VAR2->VAR37, 0, NULL)) < 0)
        return VAR12;
    VAR23 = FUN8(VAR2->VAR36 * VAR21, VAR28) / 8;
    if (VAR22 < VAR23)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (FUN9(&VAR31) < VAR18 * VAR43 + (VAR44)VAR2->VAR37 * VAR22)
    {
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR24 != VAR41)
    {
        FUN10(VAR2, "" VAR39, VAR24);
        return VAR42;
    }
    VAR2->VAR45 = VAR46;
    switch (VAR17)
    {
    case VAR47:
    case VAR48:
        if (VAR21 != 1 && VAR21 != 8)
            return VAR33;
        if (VAR25 == 1)
        {
            VAR2->VAR45 = VAR49;
        }
        else if (VAR25 == 8)
        {
            VAR2->VAR45 = VAR50;
        }
        break;
    case VAR51:
    case VAR52:
        if (VAR21 == 8)
            VAR2->VAR45 = VAR53;
        break;
    case VAR54:
    case VAR55:
        if (VAR21 != 16 && VAR21 != 24 && VAR21 != 32)
            return VAR33;
        if (VAR21 == 16 && VAR25 == 15)
        {
            if (VAR29[0] == 0x7C00 && VAR29[1] == 0x3E0 && VAR29[2] == 0x1F)
                VAR2->VAR45 = VAR20 ? VAR56 : VAR57;
            else if (VAR29[0] == 0x1F && VAR29[1] == 0x3E0 && VAR29[2] == 0x7C00)
                VAR2->VAR45 = VAR20 ? VAR58 : VAR59;
        }
        else if (VAR21 == 16 && VAR25 == 16)
        {
            if (VAR29[0] == 0xF800 && VAR29[1] == 0x7E0 && VAR29[2] == 0x1F)
                VAR2->VAR45 = VAR20 ? VAR60 : VAR61;
            else if (VAR29[0] == 0x1F && VAR29[1] == 0x7E0 && VAR29[2] == 0xF800)
                VAR2->VAR45 = VAR20 ? VAR62 : VAR63;
        }
        else if (VAR21 == 24)
        {
            if (VAR29[0] == 0xFF0000 && VAR29[1] == 0xFF00 && VAR29[2] == 0xFF)
                VAR2->VAR45 = VAR20 ? VAR64 : VAR65;
            else if (VAR29[0] == 0xFF && VAR29[1] == 0xFF00 && VAR29[2] == 0xFF0000)
                VAR2->VAR45 = VAR20 ? VAR65 : VAR64;
        }
        else if (VAR21 == 32)
        {
            if (VAR29[0] == 0xFF0000 && VAR29[1] == 0xFF00 && VAR29[2] == 0xFF)
                VAR2->VAR45 = VAR20 ? VAR66 : VAR67;
            else if (VAR29[0] == 0xFF && VAR29[1] == 0xFF00 && VAR29[2] == 0xFF0000)
                VAR2->VAR45 = VAR20 ? VAR68 : VAR69;
        }
        FUN5(&VAR31, VAR18 * VAR43);
        break;
    default:
        FUN4(VAR2, VAR35, "");
        return VAR33;
    }
    if (VAR2->VAR45 == VAR46)
    {
        FUN6(VAR2, "" VAR39 "" VAR39 "" VAR39 "", VAR21, VAR25, VAR17);
        return VAR42;
    }
    if ((VAR12 = FUN11(VAR2, VAR8, 0)) < 0)
        return VAR12;
    VAR8->VAR70 = 1;
    VAR8->VAR71 = VAR72;
    if (VAR2->VAR45 == VAR53)
    {
        VAR73 *VAR74 = (VAR73 *)VAR8->VAR3[1];
        uint8_t VAR75, VAR76, VAR77;
        for (VAR11 = 0; VAR11 < VAR18; VAR11++)
        {
            FUN5(&VAR31, 4);
            VAR75 = FUN12(&VAR31);
            FUN5(&VAR31, 1);
            VAR76 = FUN12(&VAR31);
            FUN5(&VAR31, 1);
            VAR77 = FUN12(&VAR31);
            FUN5(&VAR31, 3);
            VAR74[VAR11] = VAR75 << 16 | VAR76 << 8 | VAR77;
        }
    }
    VAR30 = VAR8->VAR3[0];
    for (VAR11 = 0; VAR11 < VAR2->VAR37; VAR11++)
    {
        FUN13(&VAR31, VAR30, VAR23);
        FUN5(&VAR31, VAR22 - VAR23);
        VAR30 += VAR8->VAR78[0];
    }
    *VAR4 = 1;
    return VAR13;
}