int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    uint32_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    hwaddr VAR12, VAR13;
    IOMMUTLBEntry VAR14;
    VAR15 *VAR16;
    FUN2(FUN3(VAR2));
    if (VAR6->VAR17.VAR18 & VAR19)
    {
        FUN4(VAR6, VAR20, 4);
        goto VAR21;
    }
    if (VAR4 & 0x1)
    {
        FUN4(VAR6, VAR22, 4);
        goto VAR21;
    }
    VAR7 = VAR6->VAR23[VAR3] >> 32;
    VAR12 = VAR6->VAR23[VAR4];
    VAR13 = VAR12 + VAR6->VAR23[VAR4 + 1];
    VAR9 = FUN5(FUN6(), VAR7);
    if (!VAR9)
    {
        FUN7("");
        FUN8(VAR2, VAR24);
        goto VAR21;
    }
    switch (VAR9->VAR25)
    {
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
        FUN8(VAR2, VAR24);
        return 0;
    case VAR30:
        FUN8(VAR2, VAR31);
        FUN9(VAR6, VAR3, VAR32);
        return 0;
    default:
        break;
    }
    VAR11 = VAR9->VAR11;
    if (!VAR11->VAR33)
    {
        VAR9->VAR25 = VAR30;
        FUN8(VAR2, VAR31);
        FUN9(VAR6, VAR3, VAR34);
        FUN10(VAR35, VAR9->VAR7, VAR9->VAR36, VAR12, 0);
        goto VAR21;
    }
    if (VAR13 < VAR11->VAR37 || VAR12 > VAR11->VAR38)
    {
        VAR9->VAR25 = VAR30;
        FUN8(VAR2, VAR31);
        FUN9(VAR6, VAR3, VAR34);
        FUN10(VAR39, VAR9->VAR7, VAR9->VAR36, VAR12, 0);
        goto VAR21;
    }
    VAR16 = &VAR11->VAR40;
    while (VAR12 < VAR13)
    {
        VAR14 = VAR16->VAR41->FUN11(VAR16, VAR12, VAR42);
        if (!VAR14.VAR43)
        {
            VAR9->VAR25 = VAR30;
            FUN8(VAR2, VAR31);
            FUN9(VAR6, VAR3, VAR34);
            FUN10(VAR44, VAR9->VAR7, VAR9->VAR36, VAR12, VAR45);
            goto VAR21;
        }
        FUN12(VAR16, VAR14);
        VAR12 += VAR14.VAR46 + 1;
    }
    FUN8(VAR2, VAR47);
VAR21:
    return 0;
}