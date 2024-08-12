FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    uint8_t VAR13 = 0;
    VAR14 *VAR15 = FUN2();
    VAR16 *VAR17 = NULL;
    size_t VAR18 = sizeof(*VAR17) + sizeof(VAR17->VAR19[0]);
    VAR20 *VAR21 = FUN3(VAR15);
    assert(VAR15);
    if (VAR15->VAR22)
    {
        VAR13 |= 0x1;
    }
    VAR8 = FUN4(VAR2, sizeof(*VAR8));
    VAR8->VAR23 = VAR21->VAR24 - 1;
    VAR8->VAR25 = VAR13;
    VAR10 = FUN4(VAR2, sizeof(*VAR10) + VAR18);
    VAR10->VAR26 = FUN5(VAR27);
    VAR10->VAR28 = FUN5(sizeof(*VAR10) + VAR18);
    VAR10->VAR25 = VAR29;
    VAR10->VAR30 = FUN5(0);
    VAR10->VAR31 = FUN6(VAR32);
    VAR17 = &VAR10->VAR17[0];
    VAR17->VAR33 = 0x03;
    VAR17->VAR28 = VAR18;
    VAR17->VAR34 = VAR35;
    VAR17->VAR36 = VAR37;
    VAR17->VAR19[0].VAR38 = FUN7(VAR39);
    VAR17->VAR19[0].VAR40 = FUN8(VAR39);
    if (VAR15->VAR41)
    {
        VAR12 = FUN4(VAR2, sizeof(*VAR12));
        VAR12->VAR26 = FUN5(VAR42);
        VAR12->VAR28 = FUN5(sizeof(*VAR12));
        VAR12->VAR25 = VAR43;
        VAR12->VAR30 = FUN5(0);
    }
    FUN9(VAR4, VAR2, (void *)(VAR2->VAR44 + VAR5), "", VAR2->VAR6 - VAR5, 1, NULL, NULL);
}