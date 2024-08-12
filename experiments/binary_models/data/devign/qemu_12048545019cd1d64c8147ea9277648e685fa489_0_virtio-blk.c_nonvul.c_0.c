void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    struct VAR6 *VAR7 = VAR2->VAR8.VAR9;
    struct VAR6 *VAR10 = VAR2->VAR8.VAR11;
    unsigned VAR12 = VAR2->VAR8.VAR12;
    unsigned VAR13 = VAR2->VAR8.VAR13;
    if (VAR2->VAR8.VAR13 < 1 || VAR2->VAR8.VAR12 < 1)
    {
        FUN2("");
        FUN3(1);
    }
    if (FUN4(FUN5(VAR10, VAR13, 0, &VAR2->VAR14, sizeof(VAR2->VAR14)) != sizeof(VAR2->VAR14)))
    {
        FUN2("");
        FUN3(1);
    }
    FUN6(&VAR10, &VAR13, sizeof(VAR2->VAR14));
    if (VAR7[VAR12 - 1].VAR15 < sizeof(struct VAR16))
    {
        FUN2("");
        FUN3(1);
    }
    VAR2->VAR17 = FUN7(VAR7, VAR12);
    VAR2->VAR18 = (void *)VAR7[VAR12 - 1].VAR19 + VAR7[VAR12 - 1].VAR15 - sizeof(struct VAR16);
    FUN8(VAR7, &VAR12, sizeof(struct VAR16));
    VAR5 = FUN9(FUN10(VAR2->VAR20), &VAR2->VAR14.VAR5);
    switch (VAR5 & ~(VAR21 | VAR22))
    {
    case VAR23:
    {
        bool VAR24 = VAR5 & VAR21;
        VAR2->VAR25 = FUN11(FUN10(VAR2->VAR20), &VAR2->VAR14.VAR26);
        if (VAR24)
        {
            FUN12(&VAR2->VAR27, VAR10, VAR13);
            FUN13(VAR2, VAR2->VAR25, VAR2->VAR27.VAR28 / VAR29);
        }
        else
        {
            FUN12(&VAR2->VAR27, VAR7, VAR12);
            FUN14(VAR2, VAR2->VAR25, VAR2->VAR27.VAR28 / VAR29);
        }
        if (!FUN15(VAR2->VAR20, VAR2->VAR25, VAR2->VAR27.VAR28))
        {
            FUN16(VAR2, VAR30);
            FUN17(VAR2);
            return;
        }
        FUN18(FUN19(VAR2->VAR20->VAR31), &VAR2->VAR32, VAR2->VAR27.VAR28, VAR24 ? VAR33 : VAR34);
        if (VAR4->VAR35 > 0 && (VAR4->VAR35 == VAR36 || VAR24 != VAR4->VAR24 || !VAR2->VAR20->VAR37.VAR38))
        {
            FUN20(VAR2->VAR20->VAR31, VAR4);
        }
        assert(VAR4->VAR35 < VAR36);
        VAR4->VAR39[VAR4->VAR35++] = VAR2;
        VAR4->VAR24 = VAR24;
        break;
    }
    case VAR40:
        FUN21(VAR2, VAR4);
        break;
    case VAR41:
        FUN22(VAR2);
        break;
    case VAR42:
    {
        VAR43 *VAR44 = VAR2->VAR20;
        const char *VAR45 = VAR44->VAR37.VAR45 ? VAR44->VAR37.VAR45 : "";
        size_t VAR28 = FUN23(strlen(VAR45) + 1, FUN23(FUN7(VAR7, VAR12), VAR46));
        FUN24(VAR7, VAR12, 0, VAR45, VAR28);
        FUN16(VAR2, VAR47);
        FUN17(VAR2);
        break;
    }
    default:
        FUN16(VAR2, VAR48);
        FUN17(VAR2);
    }
}