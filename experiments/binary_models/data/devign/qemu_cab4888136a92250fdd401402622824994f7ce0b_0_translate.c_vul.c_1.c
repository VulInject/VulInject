static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    uint8_t VAR7 = (VAR4->VAR8 >> 11) & 0x1f;
    uint8_t VAR9 = (VAR4->VAR8 >> 6) & 0x1f;
    TCGv_i32 VAR10 = FUN2(VAR7);
    TCGv_i32 VAR11 = FUN2(VAR9);
    TCGv_i32 VAR12 = FUN2(VAR6);
    TCGv_i32 VAR13 = FUN2(VAR5);
    switch (FUN3(VAR4->VAR8))
    {
    case VAR14:
        FUN4(VAR15, VAR13, VAR11, VAR10, VAR12);
        break;
    case VAR16:
        FUN5(VAR15, VAR13, VAR11, VAR10, VAR12);
        break;
    case VAR17:
        FUN6(VAR15, VAR13, VAR11, VAR10, VAR12);
        break;
    case VAR18:
    case VAR19:
    case VAR20:
        if (VAR5 == VAR21)
        {
            FUN7(VAR4, VAR22);
            break;
        }
        switch (FUN3(VAR4->VAR8))
        {
        case VAR18:
            FUN8(VAR15, VAR13, VAR11, VAR10, VAR12);
            break;
        case VAR19:
            FUN9(VAR15, VAR13, VAR11, VAR10, VAR12);
            break;
        case VAR20:
            FUN10(VAR15, VAR13, VAR11, VAR10, VAR12);
            break;
        }
        break;
    default:
        FUN11("");
        FUN7(VAR4, VAR22);
    }
    FUN12(VAR11);
    FUN12(VAR10);
    FUN12(VAR12);
    FUN12(VAR13);
}