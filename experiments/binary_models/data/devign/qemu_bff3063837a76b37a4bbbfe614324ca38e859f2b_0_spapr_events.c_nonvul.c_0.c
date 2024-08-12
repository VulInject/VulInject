static void FUN1(uint8_t VAR1, uint8_t VAR2, sPAPRDRConnectorType VAR3, union VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3());
    struct VAR8 *VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    struct VAR14 *VAR15;
    struct VAR16 *VAR17;
    struct VAR18 *VAR19;
    VAR9 = FUN4(sizeof(struct VAR8));
    VAR11 = &VAR9->VAR11;
    VAR13 = &VAR9->VAR13;
    VAR15 = &VAR9->VAR15;
    VAR17 = &VAR9->VAR17;
    VAR19 = &VAR9->VAR19;
    VAR11->VAR20 = FUN5(VAR21 | VAR22 | VAR23 | VAR24 | VAR25 | VAR26);
    VAR11->VAR27 = FUN5(sizeof(*VAR9) - sizeof(VAR9->VAR11));
    FUN6(VAR13);
    FUN7(VAR15, 3);
    VAR17->VAR11.VAR28 = FUN8(VAR29);
    VAR17->VAR11.VAR30 = FUN8(sizeof(*VAR17));
    VAR17->VAR31 = 0x80;
    VAR17->VAR32 = 0x00;
    VAR17->VAR33 = 0x00;
    VAR19->VAR11.VAR28 = FUN8(VAR34);
    VAR19->VAR11.VAR30 = FUN8(sizeof(*VAR19));
    VAR19->VAR11.VAR35 = 1;
    VAR19->VAR36 = VAR2;
    VAR19->VAR37 = VAR1;
    switch (VAR3)
    {
    case VAR38:
        VAR19->VAR39 = VAR40;
        if (VAR19->VAR36 == VAR41)
        {
            FUN9(VAR5->VAR42);
        }
        break;
    case VAR43:
        VAR19->VAR39 = VAR44;
        break;
    case VAR45:
        VAR19->VAR39 = VAR46;
        break;
    default:
        FUN10(false);
        return;
    }
    if (VAR1 == VAR47)
    {
        VAR19->VAR5.VAR48 = FUN5(VAR5->VAR48);
    }
    else if (VAR1 == VAR49)
    {
        VAR19->VAR5.VAR42 = FUN5(VAR5->VAR42);
    }
    else if (VAR1 == VAR50)
    {
        FUN10(FUN11(VAR7->VAR51, VAR52));
        VAR19->VAR5.VAR53.VAR48 = FUN5(VAR5->VAR53.VAR48);
        VAR19->VAR5.VAR53.VAR42 = FUN5(VAR5->VAR53.VAR42);
    }
    FUN12(VAR26, VAR9);
    FUN13(FUN14(FUN15(VAR7), FUN16(VAR7, VAR26)));
}