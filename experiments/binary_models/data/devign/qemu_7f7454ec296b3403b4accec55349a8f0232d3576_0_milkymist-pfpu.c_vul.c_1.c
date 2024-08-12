static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR4[VAR5];
    uint32_t VAR6 = VAR2->VAR7[VAR3];
    uint32_t VAR8 = (VAR6 >> 18) & 0x7f;
    uint32_t VAR9 = (VAR6 >> 11) & 0x7f;
    uint32_t VAR10 = (VAR6 >> 7) & 0xf;
    uint32_t VAR11 = VAR6 & 0x7f;
    uint32_t VAR12;
    int VAR13 = 0;
    switch (VAR10)
    {
    case VAR14:
        break;
    case VAR15:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = VAR16 + VAR18;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR21;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR22:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = VAR16 - VAR18;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR23;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR24:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = VAR16 * VAR18;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR25;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR26:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR19 = FUN5(VAR16);
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR27;
        FUN3(FUN4("", VAR16, VAR19, VAR12));
    }
    break;
    case VAR28:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        int32_t VAR19 = VAR16;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR29;
        FUN3(FUN4("", VAR16, VAR19, VAR12));
    }
    break;
    case VAR30:
    {
        int32_t VAR16 = FUN2(VAR31, VAR2->VAR17[VAR8]);
        float VAR19 = VAR16;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR32;
        FUN3(FUN4("", VAR16, VAR19, VAR12));
    }
    break;
    case VAR33:
    {
        uint32_t VAR16 = FUN6(VAR2->VAR17[VAR8]);
        uint32_t VAR18 = FUN6(VAR2->VAR17[VAR9]);
        target_phys_addr_t VAR34 = FUN7(VAR2->VAR4[VAR35], VAR2->VAR17[VAR36], VAR2->VAR17[VAR37]);
        FUN8(VAR34, (VAR38 *)&VAR16, 4);
        FUN8(VAR34 + 4, (VAR38 *)&VAR18, 4);
        VAR2->VAR4[VAR39] = VAR34 + 4;
        FUN3(FUN4("", VAR16, VAR18, VAR34));
        FUN9(VAR16, VAR18, VAR34);
    }
    break;
    case VAR40:
    {
        int32_t VAR16 = FUN2(VAR31, VAR2->VAR17[VAR8]);
        float VAR19 = FUN10(VAR16 * (1.0f / (VAR41 * 4096.0f)));
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR42;
        FUN3(FUN4("", VAR16, VAR19, VAR12));
    }
    break;
    case VAR43:
    {
        int32_t VAR16 = FUN2(VAR31, VAR2->VAR17[VAR8]);
        float VAR19 = FUN11(VAR16 * (1.0f / (VAR41 * 4096.0f)));
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR44;
        FUN3(FUN4("", VAR16, VAR19, VAR12));
    }
    break;
    case VAR45:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = (VAR16 > VAR18) ? 1.0f : 0.0f;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR46;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR47:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = (VAR16 == VAR18) ? 1.0f : 0.0f;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR48;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR49:
    {
        VAR12 = VAR2->VAR17[VAR8];
        VAR13 = VAR50;
        FUN3(FUN4(""));
    }
    break;
    case VAR51:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        uint32_t VAR52 = VAR2->VAR17[VAR53];
        float VAR19 = (VAR52 != 0) ? VAR16 : VAR18;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR54;
        FUN3(FUN4("", VAR52, VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR55:
    {
        float VAR16 = FUN2(float, VAR2->VAR17[VAR8]);
        float VAR18 = FUN2(float, VAR2->VAR17[VAR9]);
        float VAR19 = (VAR18 < 0) ? -VAR16 : VAR16;
        VAR12 = FUN2(VAR20, VAR19);
        VAR13 = VAR56;
        FUN3(FUN4("", VAR16, VAR18, VAR19, VAR12));
    }
    break;
    case VAR57:
    {
        uint32_t VAR16 = VAR2->VAR17[VAR8];
        VAR12 = 0x5f3759df - (VAR16 >> 1);
        VAR13 = VAR58;
        FUN3(FUN4("", VAR16, VAR12));
    }
    break;
    default:
        FUN12("", VAR10);
        break;
    }
    if (!VAR11)
    {
        FUN3(FUN4("", VAR2->VAR4[VAR5], VAR59[VAR10], VAR8, VAR9, VAR13, VAR2->VAR4[VAR5] + VAR13));
    }
    else
    {
        FUN3(FUN4("", VAR2->VAR4[VAR5], VAR59[VAR10], VAR8, VAR9, VAR13, VAR2->VAR4[VAR5] + VAR13, VAR11));
    }
    if (VAR10 == VAR33)
    {
        return 0;
    }
    if (VAR11)
    {
        uint32_t VAR60 = FUN13(VAR2);
        FUN3(FUN4("", VAR11, VAR60));
        VAR2->VAR17[VAR11] = VAR60;
    }
    FUN14(VAR2);
    if (VAR10 != VAR14)
    {
        FUN15(VAR2, VAR12, VAR13 - 1);
    }
    VAR2->VAR4[VAR5]++;
    return 1;
};