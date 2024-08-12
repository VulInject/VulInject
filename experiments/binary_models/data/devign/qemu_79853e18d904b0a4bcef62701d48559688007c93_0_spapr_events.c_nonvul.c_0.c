static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    struct VAR4 *VAR5;
    struct VAR6 *VAR7;
    struct VAR8 *VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    struct VAR14 *VAR15;
    VAR16 *VAR17 = FUN2(VAR2);
    sPAPRDRConnectorType VAR18 = VAR17->FUN3(VAR2);
    VAR5 = FUN4(sizeof(struct VAR4));
    VAR7 = &VAR5->VAR7;
    VAR9 = &VAR5->VAR9;
    VAR11 = &VAR5->VAR11;
    VAR13 = &VAR5->VAR13;
    VAR15 = &VAR5->VAR15;
    VAR7->VAR19 = FUN5(VAR20 | VAR21 | VAR22 | VAR23 | VAR24 | VAR25);
    VAR7->VAR26 = FUN5(sizeof(*VAR5) - sizeof(VAR5->VAR7));
    FUN6(VAR9);
    FUN7(VAR11, 3);
    VAR13->VAR7.VAR27 = FUN8(VAR28);
    VAR13->VAR7.VAR29 = FUN8(sizeof(*VAR13));
    VAR13->VAR30 = 0x80;
    VAR13->VAR31 = 0x00;
    VAR13->VAR32 = 0x00;
    VAR15->VAR7.VAR27 = FUN8(VAR33);
    VAR15->VAR7.VAR29 = FUN8(sizeof(*VAR15));
    VAR15->VAR7.VAR34 = 1;
    VAR15->VAR35 = VAR3;
    switch (VAR18)
    {
    case VAR36:
        VAR15->VAR2.VAR37 = FUN5(VAR17->FUN9(VAR2));
        VAR15->VAR38 = VAR39;
        VAR15->VAR40 = VAR41;
        break;
    default:
        FUN10(false);
        return;
    }
    FUN11(VAR25, VAR5, true);
    FUN12(FUN13(VAR42->VAR43, VAR42->VAR44));
}