static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10;
    VAR5 = (VAR4->VAR11 >> 21) & 0x1f;
    VAR6 = (VAR4->VAR11 >> 16) & 0x1f;
    VAR7 = (VAR4->VAR11 >> 11) & 0x1f;
    VAR8 = (VAR4->VAR11 >> 6) & 0x1f;
    VAR9 = FUN2(VAR4->VAR11);
    switch (VAR9)
    {
    case VAR12:
    case VAR13:
        FUN3(VAR4, VAR14);
        FUN4(VAR4, VAR9, VAR6, VAR5, VAR8, VAR7);
        break;
    case VAR15:
        VAR10 = FUN5(VAR4->VAR11);
        switch (VAR10)
        {
        case VAR16 ... VAR17:
        case VAR18:
            FUN3(VAR4, VAR19);
            FUN6(VAR2, VAR4);
            break;
        default:
            FUN3(VAR4, VAR14);
            FUN7(VAR4, VAR10, VAR6, VAR7);
            break;
        }
        break;
    case VAR20 ... VAR21:
    case VAR22 ... VAR23:
        FUN3(VAR4, VAR24);
        FUN8(VAR4);
        FUN4(VAR4, VAR9, VAR6, VAR5, VAR8, VAR7);
        break;
    case VAR25:
        VAR10 = FUN9(VAR4->VAR11);
        switch (VAR10)
        {
        case VAR26 ... VAR27:
        case VAR28:
            FUN3(VAR4, VAR19);
            FUN6(VAR2, VAR4);
            break;
        default:
            FUN3(VAR4, VAR24);
            FUN8(VAR4);
            VAR10 = FUN9(VAR4->VAR11);
            FUN7(VAR4, VAR10, VAR6, VAR7);
            break;
        }
        break;
    case VAR29:
        FUN10(VAR4, VAR6, VAR7, FUN11(VAR4->VAR11, 6, 3));
        break;
    case VAR30:
        FUN3(VAR4, VAR31);
        {
            TCGv VAR32 = FUN12();
            TCGv VAR33 = FUN12();
            FUN13(VAR32, VAR6);
            FUN13(VAR33, VAR5);
            FUN14(VAR32, VAR33);
            FUN15(VAR32);
            FUN15(VAR33);
        }
        break;
    case VAR34:
        FUN3(VAR4, VAR31);
        {
            TCGv VAR32 = FUN12();
            FUN13(VAR32, VAR5);
            FUN16(VAR32, VAR35, VAR32);
            FUN17(VAR32, VAR7);
            FUN15(VAR32);
        }
        break;
    default:
        if (VAR4->VAR36 & VAR19)
        {
            FUN6(VAR2, VAR4);
        }
        else
        {
            FUN18(VAR2, VAR4);
        }
    }
}