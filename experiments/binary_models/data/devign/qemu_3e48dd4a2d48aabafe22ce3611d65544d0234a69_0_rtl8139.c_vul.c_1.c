static VAR1 FUN1(void *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    switch (VAR3)
    {
    case VAR7 ... VAR7 + 4 * 4 - 1:
        VAR6 = FUN2(VAR5, VAR3, 2);
        break;
    case VAR8:
        VAR6 = FUN3(VAR5);
        break;
    case VAR9:
        VAR6 = FUN4(VAR5);
        break;
    case VAR10:
        VAR6 = FUN5(VAR5);
        break;
    case VAR11:
        VAR6 = FUN6(VAR5);
        break;
    case VAR12:
        VAR6 = FUN7(VAR5);
        break;
    case VAR13:
        VAR6 = FUN8(VAR5);
        break;
    case VAR14:
        VAR6 = FUN9(VAR5);
        break;
    case VAR15:
        VAR6 = VAR5->VAR15;
        FUN10("", VAR6);
        break;
    case VAR16:
        VAR6 = VAR5->VAR16;
        FUN10("", VAR6);
        break;
    case VAR17:
        VAR6 = VAR5->VAR17;
        FUN10("", VAR6);
        break;
    case VAR18:
        VAR6 = FUN11(VAR5);
        break;
    case VAR19:
        VAR6 = FUN12(VAR5);
        break;
    case VAR20:
        VAR6 = FUN13(VAR5);
        break;
    case VAR21:
        VAR6 = FUN14(VAR5);
        break;
    default:
        FUN10("", VAR3);
        VAR6 = FUN15(VAR2, VAR3);
        VAR6 |= FUN15(VAR2, VAR3 + 1) << 8;
        FUN10("", VAR3, VAR6);
        break;
    }
    return VAR6;
}