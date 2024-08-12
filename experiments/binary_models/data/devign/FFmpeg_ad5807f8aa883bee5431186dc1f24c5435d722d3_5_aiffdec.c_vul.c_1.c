static int FUN1(VAR1 *VAR2, int VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9[0]->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    uint64_t VAR15;
    int VAR16;
    unsigned int VAR17;
    if (VAR3 & 1)
        VAR3++;
    VAR8->VAR18 = VAR19;
    VAR8->VAR20 = FUN2(VAR6);
    VAR17 = FUN3(VAR6);
    VAR8->VAR21 = FUN2(VAR6);
    VAR14 = FUN2(VAR6) - 16383 - 63;
    VAR15 = FUN4(VAR6);
    if (VAR14 < -63 || VAR14 > 63)
    {
        FUN5(VAR2, VAR22, "", VAR14);
        return VAR23;
    }
    if (VAR14 >= 0)
        VAR16 = VAR15 << VAR14;
    else
        VAR16 = (VAR15 + (1ULL << (-VAR14 - 1))) >> -VAR14;
    VAR8->VAR16 = VAR16;
    VAR3 -= 18;
    if (VAR3 < 4)
    {
        VAR4 = VAR24;
    }
    else if (VAR4 == VAR25)
    {
        VAR8->VAR26 = FUN6(VAR6);
        VAR8->VAR27 = FUN7(VAR28, VAR8->VAR26);
        if (VAR8->VAR27 == VAR29)
        {
            char VAR30[32];
            FUN8(VAR30, sizeof(VAR30), VAR8->VAR26);
            FUN9(VAR2, "", VAR30);
        }
        VAR3 -= 4;
    }
    if (VAR4 != VAR25 || VAR8->VAR27 == VAR31)
    {
        VAR8->VAR27 = FUN10(VAR8->VAR21);
        VAR8->VAR21 = FUN11(VAR8->VAR27);
        VAR12->VAR32 = 1;
    }
    else
    {
        switch (VAR8->VAR27)
        {
        case VAR33:
        case VAR34:
        case VAR35:
        case VAR36:
        case VAR37:
            VAR12->VAR32 = 1;
            break;
        case VAR38:
            VAR8->VAR39 = 34 * VAR8->VAR20;
            break;
        case VAR40:
            VAR8->VAR39 = 2 * VAR8->VAR20;
            break;
        case VAR41:
            VAR8->VAR21 = 5;
        case VAR42:
        case VAR43:
        case VAR44:
        case VAR45:
            VAR8->VAR39 = 1 * VAR8->VAR20;
            break;
        case VAR46:
            VAR8->VAR39 = 33;
            break;
        default:
            VAR12->VAR32 = 1;
            break;
        }
        if (VAR8->VAR39 > 0)
            VAR12->VAR32 = FUN12(VAR8, VAR8->VAR39);
    }
    if (!VAR8->VAR39)
        VAR8->VAR39 = (FUN11(VAR8->VAR27) * VAR8->VAR20) >> 3;
    if (VAR12->VAR32)
    {
        VAR8->VAR47 = VAR8->VAR16 * (VAR8->VAR39 << 3) / VAR12->VAR32;
    }
    if (VAR3)
        FUN13(VAR6, VAR3);
    return VAR17;
}