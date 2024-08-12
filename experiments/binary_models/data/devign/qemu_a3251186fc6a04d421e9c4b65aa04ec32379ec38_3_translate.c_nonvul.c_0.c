static VAR1 FUN1(VAR2 *VAR3, TCGv VAR4)
{
    TCGv VAR5, VAR6;
    int VAR7, VAR8;
    switch (VAR3->VAR9)
    {
    case VAR10 ... VAR11:
        VAR7 = VAR3->VAR9 - VAR10;
        VAR6 = FUN2(VAR12, VAR13, VAR7, false);
        VAR5 = FUN3(VAR6, VAR13) ? VAR12 : VAR4;
        FUN4(VAR5, VAR14);
        FUN5(VAR7, VAR5);
        goto VAR15;
    case VAR16 ... VAR17:
        VAR7 = VAR3->VAR9 - VAR16;
        VAR6 = FUN2(VAR12, VAR13, VAR7, false);
        VAR5 = FUN2(VAR4, VAR18, VAR7, false);
    VAR15:
        return (VAR1){.VAR19 = VAR20, .VAR4 = VAR5, .VAR21 = VAR6, .VAR22 = -1, .VAR23 = true};
    case VAR24 ... VAR25:
        VAR7 = VAR3->VAR9 - VAR24;
        VAR6 = FUN2(VAR12, VAR13, VAR7, false);
        if (FUN3(VAR6, VAR4) && FUN3(VAR4, VAR13))
        {
            FUN4(VAR12, VAR13);
            VAR6 = VAR12;
        }
        FUN6(VAR4, VAR18, VAR13);
        FUN7(VAR4, VAR4, 1);
        FUN5(VAR7, VAR4);
        VAR5 = VAR4;
        goto VAR26;
    case VAR27 ... VAR28:
        VAR7 = VAR3->VAR9 - VAR27;
        VAR6 = FUN2(VAR12, VAR13, VAR7, false);
        VAR5 = FUN2(VAR4, VAR18, VAR7, false);
    VAR26:
        return (VAR1){.VAR19 = VAR29, .VAR4 = VAR5, .VAR21 = VAR6, .VAR22 = -1, .VAR23 = true};
    case VAR30 ... VAR31:
        return (VAR1){.VAR19 = VAR32, .VAR22 = -1};
    case VAR33 ... VAR34:
    case VAR35 ... VAR36:
        return (VAR1){.VAR19 = VAR37, .VAR4 = VAR13, .VAR22 = -1, .VAR38 = true};
    case VAR39 ... VAR40:
        VAR7 = VAR3->VAR9 - VAR39;
        VAR8 = (8 << VAR7) - 1;
        return (VAR1){.VAR19 = VAR37, .VAR4 = VAR13, .VAR22 = (VAR41)1 << VAR8};
    case VAR42 ... VAR43:
        return (VAR1){.VAR19 = VAR37, .VAR4 = VAR13, .VAR22 = -1};
    case VAR44:
    case VAR45 ... VAR46:
        return (VAR1){.VAR19 = VAR37, .VAR4 = VAR13, .VAR22 = VAR47};
    default:
        FUN8(VAR3);
        FUN9(VAR48, VAR49, VAR50);
        FUN10(VAR4, VAR48);
        return (VAR1){.VAR19 = VAR37, .VAR4 = VAR4, .VAR22 = -1, .VAR38 = true};
    }
}