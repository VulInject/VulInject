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
    VAR14 = VAR4->VAR18;
    VAR7->VAR4 = VAR4;
    VAR11 = VAR19 + VAR20;
    VAR7->VAR21 = VAR22;
    VAR7->VAR18 = VAR14;
    VAR7->VAR23 = VAR2->VAR23;
    VAR7->VAR24 = 0;
    VAR7->VAR25 = FUN2(VAR4->VAR26);
    VAR7->VAR27 = (FUN3(VAR4->VAR26) & 0xf) << 1;
    VAR7->VAR28 = FUN3(VAR4->VAR26) >> 4;
    VAR7->VAR29 = (FUN4(VAR4->VAR26) == 0);
    VAR7->VAR30 = FUN5(VAR4->VAR26);
    VAR7->VAR31 = FUN6(VAR4->VAR26);
    VAR7->VAR32 = FUN7(VAR4->VAR26);
    VAR33 = FUN8();
    VAR34 = FUN8();
    VAR35 = FUN9();
    VAR36 = FUN9();
    VAR37 = VAR35;
    VAR38 = VAR36;
    VAR39 = FUN9();
    VAR15 = (VAR14 & VAR40) + VAR41;
    VAR13 = -1;
    VAR16 = 0;
    VAR17 = VAR4->VAR42 & VAR43;
    if (VAR17 == 0)
        VAR17 = VAR43;
    FUN10();
    FUN11();
    if (VAR7->VAR27 || VAR7->VAR28)
    {
        TCGv VAR44 = FUN8();
        FUN12(VAR44, 0);
        FUN13(VAR44, VAR45);
    }
    do
    {
        if (VAR7->VAR18 >= 0xffff0000)
        {
            FUN14(VAR46);
            VAR7->VAR21 = VAR47;
            break;
        }
        if (VAR7->VAR18 >= 0xfffffff0 && FUN15(VAR2))
        {
            FUN14(VAR48);
            VAR7->VAR21 = VAR47;
            break;
        }
        if (FUN16(!FUN17(&VAR2->VAR49)))
        {
            FUN18(VAR9, &VAR2->VAR49, VAR50)
            {
                if (VAR9->VAR18 == VAR7->VAR18)
                {
                    FUN19(VAR7, 0, VAR51);
                    VAR7->VAR18 += 2;
                    goto VAR52;
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR12 = VAR53 - VAR19;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                    VAR54[VAR13++] = 0;
            }
            VAR55[VAR13] = VAR7->VAR18;
            VAR56[VAR13] = (VAR7->VAR28 << 4) | (VAR7->VAR27 >> 1);
            VAR54[VAR13] = 1;
            VAR57[VAR13] = VAR16;
        }
        if (VAR16 + 1 == VAR17 && (VAR4->VAR42 & VAR58))
            FUN20();
        if (FUN16(FUN21(VAR59)))
        {
            FUN22(VAR7->VAR18);
        }
        if (VAR7->VAR25)
        {
            FUN23(VAR2, VAR7);
            if (VAR7->VAR27)
            {
                VAR7->VAR28 = (VAR7->VAR28 & 0xe) | ((VAR7->VAR27 >> 4) & 1);
                VAR7->VAR27 = (VAR7->VAR27 << 1) & 0x1f;
                if (VAR7->VAR27 == 0)
                {
                    VAR7->VAR28 = 0;
                }
            }
        }
        else
        {
            FUN24(VAR2, VAR7);
        }
        if (VAR7->VAR24 && !VAR7->VAR21)
        {
            FUN25(VAR7->VAR60);
            VAR7->VAR24 = 0;
        }
        if (FUN26())
        {
            fprintf(VAR61, "", VAR7->VAR18);
        }
        VAR16++;
    } while (!VAR7->VAR21 && VAR53 < VAR11 && !VAR2->VAR23 && !VAR62 && VAR7->VAR18 < VAR15 && VAR16 < VAR17);
    if (VAR4->VAR42 & VAR58)
    {
        if (VAR7->VAR24)
        {
            FUN27(VAR2, "");
        }
        FUN28();
    }
    if (FUN16(VAR2->VAR23))
    {
        if (VAR7->VAR24)
        {
            FUN29(VAR7);
            if (VAR7->VAR21 == VAR63)
            {
                FUN14(VAR64);
            }
            else
            {
                FUN14(VAR51);
            }
            FUN25(VAR7->VAR60);
        }
        if (VAR7->VAR24 || !VAR7->VAR21)
        {
            FUN30(VAR7->VAR18);
            VAR7->VAR24 = 0;
        }
        FUN29(VAR7);
        if (VAR7->VAR21 == VAR63 && !VAR7->VAR24)
        {
            FUN14(VAR64);
        }
        else
        {
            FUN14(VAR51);
        }
    }
    else
    {
        FUN29(VAR7);
        switch (VAR7->VAR21)
        {
        case VAR22:
            FUN31(VAR7, 1, VAR7->VAR18);
            break;
        default:
        case VAR65:
        case VAR47:
            FUN32(0);
            break;
        case VAR66:
            break;
        case VAR67:
            FUN33();
            break;
        case VAR63:
            FUN14(VAR64);
            break;
        }
        if (VAR7->VAR24)
        {
            FUN25(VAR7->VAR60);
            FUN29(VAR7);
            FUN31(VAR7, 1, VAR7->VAR18);
            VAR7->VAR24 = 0;
        }
    }
VAR52:
    FUN34(VAR4, VAR16);
    *VAR53 = VAR68;
    if (FUN21(VAR69))
    {
        FUN35("");
        FUN35("", FUN36(VAR14));
        FUN37(VAR14, VAR7->VAR18 - VAR14, VAR7->VAR25);
        FUN35("");
    }
    if (VAR5)
    {
        VAR12 = VAR53 - VAR19;
        VAR13++;
        while (VAR13 <= VAR12)
            VAR54[VAR13++] = 0;
    }
    else
    {
        VAR4->VAR70 = VAR7->VAR18 - VAR14;
        VAR4->VAR71 = VAR16;
    }
}