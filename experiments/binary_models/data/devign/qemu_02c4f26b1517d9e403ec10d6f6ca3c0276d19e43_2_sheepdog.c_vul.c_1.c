static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = VAR2->VAR9;
    SheepdogReq VAR10;
    int VAR11, VAR12 = 1024, VAR13, VAR14 = FUN2(VAR15) * sizeof(long);
    VAR3 *VAR16 = NULL;
    unsigned VAR17, VAR18;
    int VAR19 = 0;
    static SheepdogInode VAR20;
    unsigned long *VAR21;
    unsigned int VAR22;
    uint64_t VAR23;
    uint32_t VAR24;
    VAR21 = FUN3(VAR14);
    VAR11 = FUN4(VAR8, &VAR6);
    if (VAR11 < 0)
    {
        FUN5("", FUN6(VAR6));
        ;
        FUN7(VAR6);
        VAR13 = VAR11;
        goto VAR25;
    }
    VAR18 = VAR14;
    VAR17 = 0;
    memset(&VAR10, 0, sizeof(VAR10));
    VAR10.VAR26 = VAR27;
    VAR10.VAR28 = VAR14;
    VAR13 = FUN8(VAR11, VAR8->VAR29, (VAR30 *)&VAR10, VAR21, &VAR17, &VAR18);
    FUN9(VAR11);
    if (VAR13)
    {
        goto VAR25;
    }
    VAR16 = FUN10(VAR12 * sizeof(*VAR16));
    VAR23 = FUN11(VAR8->VAR31, strlen(VAR8->VAR31), VAR32);
    VAR22 = VAR23 & (VAR15 - 1);
    VAR11 = FUN4(VAR8, &VAR6);
    if (VAR11 < 0)
    {
        FUN5("", FUN6(VAR6));
        ;
        FUN7(VAR6);
        VAR13 = VAR11;
        goto VAR25;
    }
    for (VAR24 = VAR22; VAR19 < VAR12; VAR24 = (VAR24 + 1) % VAR15)
    {
        if (!FUN12(VAR24, VAR21))
        {
            break;
        }
        VAR13 = FUN13(VAR11, VAR8->VAR29, (char *)&VAR20, FUN14(VAR24), 0, VAR33 - sizeof(VAR20.VAR34), 0, VAR8->VAR35);
        if (VAR13)
        {
            continue;
        }
        if (!strcmp(VAR20.VAR31, VAR8->VAR31) && FUN15(&VAR20))
        {
            VAR16[VAR19].VAR36 = VAR20.VAR37 >> 32;
            VAR16[VAR19].VAR38 = VAR20.VAR37 & 0xffffffff;
            VAR16[VAR19].VAR39 = VAR20.VAR39;
            VAR16[VAR19].VAR40 = VAR20.VAR40;
            snprintf(VAR16[VAR19].VAR41, sizeof(VAR16[VAR19].VAR41), "" VAR42, VAR20.VAR43);
            FUN16(VAR16[VAR19].VAR31, FUN17(sizeof(VAR16[VAR19].VAR31), sizeof(VAR20.VAR44)), VAR20.VAR44);
            VAR19++;
        }
    }
    FUN9(VAR11);
VAR25:
    *VAR4 = VAR16;
    FUN18(VAR21);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    return VAR19;
}