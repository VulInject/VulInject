static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    target_ulong VAR14;
    uint32_t VAR15;
    int VAR16;
    int VAR17;
    VAR18 = 0;
    VAR14 = VAR4->VAR19;
    VAR7->VAR4 = VAR4;
    VAR11 = VAR20 + VAR21;
    VAR7->VAR22 = VAR23;
    VAR7->VAR19 = VAR14;
    VAR7->VAR24 = VAR2->VAR24;
    VAR7->VAR25 = 0;
    VAR7->VAR26 = FUN2(VAR4->VAR27);
    VAR7->VAR28 = (FUN3(VAR4->VAR27) & 0xf) << 1;
    VAR7->VAR29 = FUN3(VAR4->VAR27) >> 4;
    VAR7->VAR30 = (FUN4(VAR4->VAR27) == 0);
    VAR7->VAR31 = FUN5(VAR4->VAR27);
    VAR7->VAR32 = FUN6(VAR4->VAR27);
    VAR7->VAR33 = FUN7(VAR4->VAR27);
    VAR34 = FUN8();
    VAR35 = FUN8();
    VAR36 = FUN9();
    VAR37 = FUN9();
    VAR38 = VAR36;
    VAR39 = VAR37;
    VAR40 = FUN9();
    VAR15 = (VAR14 & VAR41) + VAR42;
    VAR13 = -1;
    VAR16 = 0;
    VAR17 = VAR4->VAR43 & VAR44;
    if (VAR17 == 0)
        VAR17 = VAR44;
    FUN10();
    if (VAR7->VAR28 || VAR7->VAR29)
    {
        TCGv VAR45 = FUN11();
        FUN12(VAR45, 0);
        FUN13(VAR45, VAR46);
    }
    do
    {
        if (VAR7->VAR19 >= 0xffff0000)
        {
            FUN14(VAR47);
            VAR7->VAR22 = VAR48;
            break;
        }
        if (VAR7->VAR19 >= 0xfffffff0 && FUN15(VAR2))
        {
            FUN14(VAR49);
            VAR7->VAR22 = VAR48;
            break;
        }
        if (FUN16(!FUN17(&VAR2->VAR50)))
        {
            FUN18(VAR9, &VAR2->VAR50, VAR51)
            {
                if (VAR9->VAR19 == VAR7->VAR19)
                {
                    FUN19(VAR7, 0, VAR52);
                    VAR7->VAR19 += 2;
                    goto VAR53;
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR12 = VAR54 - VAR20;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                    VAR55[VAR13++] = 0;
            }
            VAR56[VAR13] = VAR7->VAR19;
            VAR57[VAR13] = (VAR7->VAR29 << 4) | (VAR7->VAR28 >> 1);
            VAR55[VAR13] = 1;
            VAR58[VAR13] = VAR16;
        }
        if (VAR16 + 1 == VAR17 && (VAR4->VAR43 & VAR59))
            FUN20();
        if (FUN16(FUN21(VAR60)))
        {
            FUN22(VAR7->VAR19);
        }
        if (VAR7->VAR26)
        {
            FUN23(VAR2, VAR7);
            if (VAR7->VAR28)
            {
                VAR7->VAR29 = (VAR7->VAR29 & 0xe) | ((VAR7->VAR28 >> 4) & 1);
                VAR7->VAR28 = (VAR7->VAR28 << 1) & 0x1f;
                if (VAR7->VAR28 == 0)
                {
                    VAR7->VAR29 = 0;
                }
            }
        }
        else
        {
            FUN24(VAR2, VAR7);
        }
        if (VAR18)
        {
            fprintf(VAR61, "", VAR7->VAR19);
            VAR18 = 0;
        }
        if (VAR7->VAR25 && !VAR7->VAR22)
        {
            FUN25(VAR7->VAR62);
            VAR7->VAR25 = 0;
        }
        VAR16++;
    } while (!VAR7->VAR22 && VAR54 < VAR11 && !VAR2->VAR24 && !VAR63 && VAR7->VAR19 < VAR15 && VAR16 < VAR17);
    if (VAR4->VAR43 & VAR59)
    {
        if (VAR7->VAR25)
        {
            FUN26(VAR2, "");
        }
        FUN27();
    }
    if (FUN16(VAR2->VAR24))
    {
        if (VAR7->VAR25)
        {
            FUN28(VAR7);
            if (VAR7->VAR22 == VAR64)
            {
                FUN14(VAR65);
            }
            else
            {
                FUN14(VAR52);
            }
            FUN25(VAR7->VAR62);
        }
        if (VAR7->VAR25 || !VAR7->VAR22)
        {
            FUN29(VAR7->VAR19);
            VAR7->VAR25 = 0;
        }
        FUN28(VAR7);
        if (VAR7->VAR22 == VAR64 && !VAR7->VAR25)
        {
            FUN14(VAR65);
        }
        else
        {
            FUN14(VAR52);
        }
    }
    else
    {
        FUN28(VAR7);
        switch (VAR7->VAR22)
        {
        case VAR23:
            FUN30(VAR7, 1, VAR7->VAR19);
            break;
        default:
        case VAR66:
        case VAR48:
            FUN31(0);
            break;
        case VAR67:
            break;
        case VAR68:
            FUN32();
            break;
        case VAR64:
            FUN14(VAR65);
            break;
        }
        if (VAR7->VAR25)
        {
            FUN25(VAR7->VAR62);
            FUN28(VAR7);
            FUN30(VAR7, 1, VAR7->VAR19);
            VAR7->VAR25 = 0;
        }
    }
VAR53:
    FUN33(VAR4, VAR16);
    *VAR54 = VAR69;
    if (FUN21(VAR70))
    {
        FUN34("");
        FUN34("", FUN35(VAR14));
        FUN36(VAR14, VAR7->VAR19 - VAR14, VAR7->VAR26);
        FUN34("");
    }
    if (VAR5)
    {
        VAR12 = VAR54 - VAR20;
        VAR13++;
        while (VAR13 <= VAR12)
            VAR55[VAR13++] = 0;
    }
    else
    {
        VAR4->VAR71 = VAR7->VAR19 - VAR14;
        VAR4->VAR72 = VAR16;
    }
}