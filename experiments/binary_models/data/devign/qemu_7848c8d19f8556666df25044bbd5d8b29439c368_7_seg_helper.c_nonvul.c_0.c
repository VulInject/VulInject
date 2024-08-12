static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, uint32_t VAR5, int VAR6, uint32_t VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    target_ulong VAR16;
    uint32_t VAR17[8], VAR18[6];
    uint32_t VAR19, VAR20, VAR21, VAR22, VAR23;
    uint32_t VAR24, VAR25;
    VAR26 *VAR27;
    int VAR28;
    target_ulong VAR29;
    VAR10 = (VAR5 >> VAR30) & 0xf;
    FUN2("", VAR3, VAR10, VAR6);
    if (VAR10 == 5)
    {
        if (!(VAR5 & VAR31))
        {
            FUN3(VAR2, VAR32, VAR3 & 0xfffc);
        }
        VAR3 = VAR4 >> 16;
        if (VAR3 & 4)
        {
            FUN3(VAR2, VAR33, VAR3 & 0xfffc);
        }
        if (FUN4(VAR2, &VAR4, &VAR5, VAR3) != 0)
        {
            FUN3(VAR2, VAR34, VAR3 & 0xfffc);
        }
        if (VAR5 & VAR35)
        {
            FUN3(VAR2, VAR34, VAR3 & 0xfffc);
        }
        VAR10 = (VAR5 >> VAR30) & 0xf;
        if ((VAR10 & 7) != 1)
        {
            FUN3(VAR2, VAR34, VAR3 & 0xfffc);
        }
    }
    if (!(VAR5 & VAR31))
    {
        FUN3(VAR2, VAR32, VAR3 & 0xfffc);
    }
    if (VAR10 & 8)
    {
        VAR9 = 103;
    }
    else
    {
        VAR9 = 43;
    }
    VAR8 = FUN5(VAR4, VAR5);
    VAR16 = FUN6(VAR4, VAR5);
    if ((VAR3 & 4) != 0 || VAR8 < VAR9)
    {
        FUN3(VAR2, VAR33, VAR3 & 0xfffc);
    }
    VAR12 = (VAR2->VAR36.VAR37 >> VAR30) & 0xf;
    if (VAR12 & 8)
    {
        VAR11 = 103;
    }
    else
    {
        VAR11 = 43;
    }
    if (VAR10 & 8)
    {
        VAR21 = FUN7(VAR2, VAR16 + 0x1c);
        VAR20 = FUN7(VAR2, VAR16 + 0x20);
        VAR19 = FUN7(VAR2, VAR16 + 0x24);
        for (VAR15 = 0; VAR15 < 8; VAR15++)
        {
            VAR17[VAR15] = FUN7(VAR2, VAR16 + (0x28 + VAR15 * 4));
        }
        for (VAR15 = 0; VAR15 < 6; VAR15++)
        {
            VAR18[VAR15] = FUN8(VAR2, VAR16 + (0x48 + VAR15 * 4));
        }
        VAR22 = FUN8(VAR2, VAR16 + 0x60);
        VAR23 = FUN7(VAR2, VAR16 + 0x64);
    }
    else
    {
        VAR21 = 0;
        VAR20 = FUN8(VAR2, VAR16 + 0x0e);
        VAR19 = FUN8(VAR2, VAR16 + 0x10);
        for (VAR15 = 0; VAR15 < 8; VAR15++)
        {
            VAR17[VAR15] = FUN8(VAR2, VAR16 + (0x12 + VAR15 * 2)) | 0xffff0000;
        }
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            VAR18[VAR15] = FUN8(VAR2, VAR16 + (0x22 + VAR15 * 4));
        }
        VAR22 = FUN8(VAR2, VAR16 + 0x2a);
        VAR18[VAR38] = 0;
        VAR18[VAR39] = 0;
        VAR23 = 0;
    }
    (void)VAR23;
    VAR13 = FUN9(VAR2, VAR2->VAR36.VAR40);
    VAR14 = FUN9(VAR2, VAR2->VAR36.VAR40 + VAR11);
    FUN10(VAR2, VAR2->VAR36.VAR40, VAR13);
    FUN10(VAR2, VAR2->VAR36.VAR40 + VAR11, VAR14);
    if (VAR6 == VAR41 || VAR6 == VAR42)
    {
        target_ulong VAR29;
        uint32_t VAR5;
        VAR29 = VAR2->VAR43.VAR40 + (VAR2->VAR36.VAR44 & ~7);
        VAR5 = FUN7(VAR2, VAR29 + 4);
        VAR5 &= ~VAR45;
        FUN11(VAR2, VAR29 + 4, VAR5);
    }
    VAR24 = FUN12(VAR2);
    if (VAR6 == VAR42)
    {
        VAR24 &= ~VAR46;
    }
    if (VAR10 & 8)
    {
        FUN11(VAR2, VAR2->VAR36.VAR40 + 0x20, VAR7);
        FUN11(VAR2, VAR2->VAR36.VAR40 + 0x24, VAR24);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 0 * 4), VAR2->VAR47[VAR48]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 1 * 4), VAR2->VAR47[VAR49]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 2 * 4), VAR2->VAR47[VAR50]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 3 * 4), VAR2->VAR47[VAR51]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 4 * 4), VAR2->VAR47[VAR52]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 5 * 4), VAR2->VAR47[VAR53]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 6 * 4), VAR2->VAR47[VAR54]);
        FUN11(VAR2, VAR2->VAR36.VAR40 + (0x28 + 7 * 4), VAR2->VAR47[VAR55]);
        for (VAR15 = 0; VAR15 < 6; VAR15++)
        {
            FUN13(VAR2, VAR2->VAR36.VAR40 + (0x48 + VAR15 * 4), VAR2->VAR56[VAR15].VAR44);
        }
    }
    else
    {
        FUN13(VAR2, VAR2->VAR36.VAR40 + 0x0e, VAR7);
        FUN13(VAR2, VAR2->VAR36.VAR40 + 0x10, VAR24);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 0 * 2), VAR2->VAR47[VAR48]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 1 * 2), VAR2->VAR47[VAR49]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 2 * 2), VAR2->VAR47[VAR50]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 3 * 2), VAR2->VAR47[VAR51]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 4 * 2), VAR2->VAR47[VAR52]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 5 * 2), VAR2->VAR47[VAR53]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 6 * 2), VAR2->VAR47[VAR54]);
        FUN13(VAR2, VAR2->VAR36.VAR40 + (0x12 + 7 * 2), VAR2->VAR47[VAR55]);
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            FUN13(VAR2, VAR2->VAR36.VAR40 + (0x22 + VAR15 * 4), VAR2->VAR56[VAR15].VAR44);
        }
    }
    if (VAR6 == VAR57)
    {
        FUN13(VAR2, VAR16, VAR2->VAR36.VAR44);
        VAR19 |= VAR46;
    }
    if (VAR6 == VAR41 || VAR6 == VAR57)
    {
        target_ulong VAR29;
        uint32_t VAR5;
        VAR29 = VAR2->VAR43.VAR40 + (VAR3 & ~7);
        VAR5 = FUN7(VAR2, VAR29 + 4);
        VAR5 |= VAR45;
        FUN11(VAR2, VAR29 + 4, VAR5);
    }
    VAR2->VAR58[0] |= VAR59;
    VAR2->VAR60 |= VAR61;
    VAR2->VAR36.VAR44 = VAR3;
    VAR2->VAR36.VAR40 = VAR16;
    VAR2->VAR36.VAR62 = VAR8;
    VAR2->VAR36.VAR37 = VAR5 & ~VAR45;
    if ((VAR10 & 8) && (VAR2->VAR58[0] & VAR63))
    {
        FUN14(VAR2, VAR21);
    }
    VAR2->VAR64 = VAR20;
    VAR25 = VAR65 | VAR66 | VAR67 | VAR68 | VAR69 | VAR70 | VAR71 | VAR46;
    if (!(VAR10 & 8))
    {
        VAR25 &= 0xffff;
    }
    FUN15(VAR2, VAR19, VAR25);
    VAR2->VAR47[VAR48] = VAR17[0];
    VAR2->VAR47[VAR49] = VAR17[1];
    VAR2->VAR47[VAR50] = VAR17[2];
    VAR2->VAR47[VAR51] = VAR17[3];
    VAR2->VAR47[VAR52] = VAR17[4];
    VAR2->VAR47[VAR53] = VAR17[5];
    VAR2->VAR47[VAR54] = VAR17[6];
    VAR2->VAR47[VAR55] = VAR17[7];
    if (VAR19 & VAR70)
    {
        for (VAR15 = 0; VAR15 < 6; VAR15++)
        {
            FUN16(VAR2, VAR15, VAR18[VAR15]);
        }
    }
    else
    {
        for (VAR15 = 0; VAR15 < 6; VAR15++)
        {
            FUN17(VAR2, VAR15, VAR18[VAR15], 0, 0, 0);
        }
    }
    VAR2->VAR72.VAR44 = VAR22 & ~4;
    VAR2->VAR72.VAR40 = 0;
    VAR2->VAR72.VAR62 = 0;
    VAR2->VAR72.VAR37 = 0;
    if (VAR22 & 4)
    {
        FUN3(VAR2, VAR33, VAR22 & 0xfffc);
    }
    if ((VAR22 & 0xfffc) != 0)
    {
        VAR27 = &VAR2->VAR43;
        VAR28 = VAR22 & ~7;
        if ((VAR28 + 7) > VAR27->VAR62)
        {
            FUN3(VAR2, VAR33, VAR22 & 0xfffc);
        }
        VAR29 = VAR27->VAR40 + VAR28;
        VAR4 = FUN7(VAR2, VAR29);
        VAR5 = FUN7(VAR2, VAR29 + 4);
        if ((VAR5 & VAR35) || ((VAR5 >> VAR30) & 0xf) != 2)
        {
            FUN3(VAR2, VAR33, VAR22 & 0xfffc);
        }
        if (!(VAR5 & VAR31))
        {
            FUN3(VAR2, VAR33, VAR22 & 0xfffc);
        }
        FUN18(&VAR2->VAR72, VAR4, VAR5);
    }
    if (!(VAR19 & VAR70))
    {
        FUN19(VAR2, VAR73, VAR18[VAR73]);
        FUN19(VAR2, VAR74, VAR18[VAR74]);
        FUN19(VAR2, VAR75, VAR18[VAR75]);
        FUN19(VAR2, VAR76, VAR18[VAR76]);
        FUN19(VAR2, VAR38, VAR18[VAR38]);
        FUN19(VAR2, VAR39, VAR18[VAR39]);
    }
    if (VAR20 > VAR2->VAR56[VAR73].VAR62)
    {
        FUN3(VAR2, VAR34, 0);
    }
    if (VAR2->VAR77[7] & VAR78)
    {
        for (VAR15 = 0; VAR15 < VAR79; VAR15++)
        {
            if (FUN20(VAR2->VAR77[7], VAR15) && !FUN21(VAR2->VAR77[7], VAR15))
            {
                FUN22(VAR2, VAR15);
            }
        }
        VAR2->VAR77[7] &= ~VAR78;
    }
}