static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8.VAR9;
    FUN2(VAR10, FUN3("", VAR2));
    FUN4(VAR7 + VAR11, VAR12 | VAR13);
    FUN5(VAR7 + VAR14, 0x20);
    FUN5(VAR7 + VAR15, 1);
    FUN5(VAR7 + VAR16, 0x08);
    FUN5(VAR7 + VAR17, 0x18);
    VAR2->VAR18 = VAR4->VAR18;
    VAR2->VAR19 = VAR4->VAR19;
    switch (VAR5)
    {
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
        break;
    default:
        FUN3("", VAR5);
    }
    VAR2->VAR33[6] |= FUN6(4);
    VAR2->VAR33[6] |= FUN6(5);
    if (VAR2->VAR18 == 80)
    {
        if (VAR2->VAR33[6] & FUN6(2))
        {
            assert(VAR2->VAR33[6] & FUN6(5));
        }
        else
        {
            if (VAR2->VAR33[6] & FUN6(5))
            {
                VAR2->VAR18 = 64;
            }
            else
            {
                VAR2->VAR18 = 76;
            }
        }
    }
    else
    {
        if (VAR2->VAR33[6] & FUN6(5))
        {
            VAR2->VAR18 = 64;
        }
    }
    assert(VAR2->VAR18 > 0 && VAR2->VAR18 <= sizeof(VAR2->VAR34));
    if (VAR4->VAR35)
    {
        int VAR36 = 0xdc;
        int VAR37 = FUN7(&VAR2->VAR8, VAR38, VAR36, VAR39);
        assert(VAR37 >= 0);
        FUN4(VAR7 + VAR36 + VAR40, 0x7e21);
        FUN4(VAR7 + VAR36 + VAR41, 0x0000);
        FUN5(VAR7 + VAR36 + VAR42, 0x0000);
    }
    if (VAR5 == VAR24 || VAR5 == VAR26 || VAR5 == VAR32)
    {
        FUN3("");
    }
}