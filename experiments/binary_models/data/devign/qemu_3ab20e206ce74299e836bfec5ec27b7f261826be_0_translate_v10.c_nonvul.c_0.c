static unsigned int FUN1(VAR1 *VAR2)
{
    int32_t VAR3, VAR4;
    int VAR5;
    VAR3 = VAR2->VAR6 & ((1 << 6) - 1);
    VAR4 = (VAR7)(VAR3 << 2);
    VAR4 >>= 2;
    switch (VAR2->VAR8)
    {
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
        VAR4 = (VAR7)VAR2->VAR6;
        FUN2("", VAR4, VAR2->VAR13);
        FUN2("", VAR2->VAR14, VAR2->VAR15, VAR2->VAR8, VAR2->VAR16, VAR2->VAR13);
        FUN3(VAR2);
        if (VAR2->VAR13 == 15)
        {
            FUN4(VAR17[VAR18], VAR2->VAR14 + 2 + VAR4);
        }
        else
        {
            FUN5(VAR17[VAR18], VAR19[VAR2->VAR13], VAR4);
        }
        break;
    case VAR20:
        FUN2("", VAR4, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR22, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR4), 4);
        break;
    case VAR23:
        FUN2("", VAR4, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR24, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR4), 4);
        break;
    case VAR25:
        FUN2("", VAR3, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR26, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR3), 4);
        break;
    case VAR27:
        FUN2("", VAR4, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR28, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR4), 4);
        break;
    case VAR29:
        FUN2("", VAR4, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        VAR5 = VAR3 & (1 << 5);
        VAR3 &= 0x1f;
        if (VAR5)
        {
            FUN7(VAR2, VAR30, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR3), 4);
        }
        else
        {
            FUN9(VAR2, VAR31, 4);
            FUN10(VAR17[VAR32], VAR19[VAR2->VAR13], FUN8(VAR3), VAR17[VAR32]);
        }
        break;
    case VAR33:
        FUN2("", VAR4, VAR2->VAR13);
        VAR5 = VAR34;
        if (VAR3 & (1 << 5))
        {
            VAR5 = VAR35;
        }
        VAR3 &= 0x1f;
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR5, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR3), 4);
        break;
    case VAR36:
        FUN2("", VAR3, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR37, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR3), 4);
        break;
    case VAR38:
        FUN2("", VAR4, VAR2->VAR13);
        FUN6(VAR2, VAR21);
        FUN7(VAR2, VAR39, VAR19[VAR2->VAR13], VAR19[VAR2->VAR13], FUN8(VAR4), 4);
        break;
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
        VAR3 = VAR2->VAR6 & 0xff;
        if (VAR3 & 1)
        {
            VAR3 |= 0xffffff00;
            VAR3 &= ~1;
        }
        VAR3 += 2;
        FUN2("", FUN11(VAR2->VAR44), VAR3);
        FUN6(VAR2, 0);
        FUN12(VAR2, VAR3, VAR2->VAR44);
        break;
    default:
        FUN2("", VAR2->VAR14, VAR2->VAR15, VAR2->VAR8, VAR2->VAR16, VAR2->VAR13);
        FUN13(VAR2->VAR45, "");
        break;
    }
    return 2;
}