static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint8_t VAR6 = (VAR4->VAR7 >> 21) & 0x3;
    uint8_t VAR8 = (VAR4->VAR7 >> 16) & 0x1f;
    int64_t VAR9 = (VAR10)VAR4->VAR7;
    FUN2(VAR4);
    if (VAR4->VAR11 & VAR12)
    {
        FUN3(VAR4, VAR13);
        return;
    }
    switch (VAR5)
    {
    case VAR14:
    case VAR15:
    {
        TCGv_i64 VAR16 = FUN4();
        FUN5(VAR16, VAR17[VAR8 << 1], VAR17[(VAR8 << 1) + 1]);
        FUN6((VAR5 == VAR14) ? VAR18 : VAR19, VAR16, VAR16, 0);
        FUN7(VAR20, VAR16);
        FUN8(VAR16);
    }
    break;
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
        FUN9(VAR20, VAR6, VAR8);
        break;
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        FUN9(VAR20, VAR6, VAR8);
        FUN10(VAR18, VAR20, VAR20, 0);
        break;
    }
    VAR4->VAR29 = VAR4->VAR30 + (VAR9 << 2) + 4;
    VAR4->VAR11 |= VAR31;
    VAR4->VAR11 |= VAR32;
}