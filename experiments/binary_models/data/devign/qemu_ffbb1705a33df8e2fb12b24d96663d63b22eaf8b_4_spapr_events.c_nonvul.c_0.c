static void FUN1(uint8_t VAR1, uint8_t VAR2, sPAPRDRConnectorType VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3());
    struct VAR7 *VAR8;
    struct VAR9 *VAR10;
    struct VAR11 *VAR12;
    struct VAR13 *VAR14;
    struct VAR15 *VAR16;
    struct VAR17 *VAR18;
    VAR8 = FUN4(sizeof(struct VAR7));
    VAR10 = &VAR8->VAR10;
    VAR12 = &VAR8->VAR12;
    VAR14 = &VAR8->VAR14;
    VAR16 = &VAR8->VAR16;
    VAR18 = &VAR8->VAR18;
    VAR10->VAR19 = FUN5(VAR20 | VAR21 | VAR22 | VAR23 | VAR24 | VAR25);
    VAR10->VAR26 = FUN5(sizeof(*VAR8) - sizeof(VAR8->VAR10));
    FUN6(VAR12);
    FUN7(VAR14, 3);
    VAR16->VAR10.VAR27 = FUN8(VAR28);
    VAR16->VAR10.VAR29 = FUN8(sizeof(*VAR16));
    VAR16->VAR30 = 0x80;
    VAR16->VAR31 = 0x00;
    VAR16->VAR32 = 0x00;
    VAR18->VAR10.VAR27 = FUN8(VAR33);
    VAR18->VAR10.VAR29 = FUN8(sizeof(*VAR18));
    VAR18->VAR10.VAR34 = 1;
    VAR18->VAR35 = VAR2;
    VAR18->VAR36 = VAR1;
    switch (VAR3)
    {
    case VAR37:
        VAR18->VAR38 = VAR39;
        if (VAR18->VAR35 == VAR40)
        {
            FUN9(VAR4);
        }
        break;
    case VAR41:
        VAR18->VAR38 = VAR42;
        break;
    case VAR43:
        VAR18->VAR38 = VAR44;
        break;
    default:
        FUN10(false);
        return;
    }
    if (VAR1 == VAR45)
    {
        VAR18->VAR4.VAR46 = FUN5(VAR4);
    }
    else if (VAR1 == VAR47)
    {
        VAR18->VAR4.VAR48 = FUN5(VAR4);
    }
    FUN11(VAR25, VAR8, true);
    FUN12(FUN13(VAR6->VAR49, FUN14(VAR6, VAR25)));
}