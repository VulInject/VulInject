FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, void *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR9;
    struct VAR12 *VAR13 = VAR11->VAR13;
    VAR14 *VAR15;
    size_t VAR16;
    uint32_t VAR17;
    uint64_t VAR18;
    struct iscsi_data VAR19;
    VAR15 = FUN2(&VAR20, VAR2, VAR8, VAR9);
    FUN3(VAR13, VAR3, VAR6, VAR9, VAR15);
    VAR15->VAR11 = VAR11;
    VAR15->VAR5 = VAR5;
    VAR15->VAR21 = 0;
    VAR15->VAR22 = NULL;
    VAR15->VAR23 = -VAR24;
    VAR16 = VAR6 * VAR25;
    VAR19.VAR16 = FUN4(VAR16, VAR15->VAR5->VAR16);
    if (VAR15->VAR5->VAR26 == 1)
    {
        VAR15->VAR27 = NULL;
        VAR19.VAR19 = VAR15->VAR5->VAR28[0].VAR29;
    }
    else
    {
        VAR15->VAR27 = FUN5(VAR19.VAR16);
        FUN6(VAR15->VAR5, 0, VAR15->VAR27, VAR19.VAR16);
        VAR19.VAR19 = VAR15->VAR27;
    }
    VAR15->VAR30 = malloc(sizeof(struct VAR31));
    if (VAR15->VAR30 == NULL)
    {
        FUN7(""
                     "",
                     FUN8(VAR13));
        FUN9(VAR15);
        return NULL;
    }
    memset(VAR15->VAR30, 0, sizeof(struct VAR31));
    VAR15->VAR30->VAR32 = VAR33;
    VAR15->VAR30->VAR34 = 16;
    VAR15->VAR30->VAR35[0] = 0x8a;
    VAR18 = FUN10(VAR3, VAR11);
    *(VAR36 *)&VAR15->VAR30->VAR35[2] = FUN11(VAR18 >> 32);
    *(VAR36 *)&VAR15->VAR30->VAR35[6] = FUN11(VAR18 & 0xffffffff);
    VAR17 = VAR16 / VAR11->VAR37;
    *(VAR36 *)&VAR15->VAR30->VAR35[10] = FUN11(VAR17);
    VAR15->VAR30->VAR38 = VAR16;
    if (FUN12(VAR13, VAR11->VAR39, VAR15->VAR30, VAR40, &VAR19, VAR15) != 0)
    {
        FUN13(VAR15->VAR30);
        FUN14(VAR15->VAR27);
        FUN9(VAR15);
        return NULL;
    }
    FUN15(VAR11);
    return &VAR15->VAR41;
}