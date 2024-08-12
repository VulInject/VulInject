static VAR1 FUN1(void *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    switch (VAR3)
    {
    case VAR7:
        VAR6 = VAR5->VAR7;
        FUN2("", VAR6);
        break;
    case VAR8:
        VAR6 = FUN3(VAR5);
        break;
    case VAR9:
        VAR6 = FUN4(VAR5);
        break;
    case VAR10 ... VAR10 + 4 * 4 - 1:
        VAR6 = FUN5(VAR5, VAR3, 4);
        break;
    case VAR11 ... VAR11 + 4 * 4 - 1:
        VAR6 = FUN6(VAR5, VAR3 - VAR11);
        break;
    case VAR12:
        VAR6 = FUN7(VAR5);
        break;
    case VAR13:
        VAR6 = VAR5->VAR13;
        FUN2("", VAR6);
        break;
    case VAR14:
        VAR6 = VAR5->VAR14;
        FUN2("", VAR6);
        break;
    case VAR15:
        VAR6 = FUN8(FUN9(VAR16) - VAR5->VAR17, VAR18, FUN10());
        FUN2("", VAR6);
        break;
    case VAR19:
        VAR6 = VAR5->VAR20;
        FUN2("", VAR6);
        break;
    default:
        FUN2("", VAR3);
        VAR6 = FUN11(VAR2, VAR3);
        VAR6 |= FUN11(VAR2, VAR3 + 1) << 8;
        VAR6 |= FUN11(VAR2, VAR3 + 2) << 16;
        VAR6 |= FUN11(VAR2, VAR3 + 3) << 24;
        FUN2("", VAR3, VAR6);
        break;
    }
    return VAR6;
}