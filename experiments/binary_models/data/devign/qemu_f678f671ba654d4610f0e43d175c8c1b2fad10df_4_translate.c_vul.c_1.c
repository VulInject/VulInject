static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    uint32_t VAR6;
    VAR7 *VAR8;
    TCGv VAR9;
    VAR5 = FUN2(VAR4->VAR10);
    VAR6 = FUN3(VAR4->VAR10);
    switch (VAR5)
    {
    case VAR11:
        break;
    case VAR12:
        FUN4(VAR13, VAR13, ~VAR14);
        break;
    case VAR15:
        break;
    case VAR16:
        FUN5(VAR13, VAR13, VAR14);
        break;
    case VAR17:
        break;
    case VAR18:
        break;
    case VAR19:
        FUN6(VAR4, VAR5, 0, 0, 0, 0);
        break;
    case VAR20:
        FUN7(VAR4);
        break;
    case VAR21:
        FUN8(VAR22);
        FUN9(0);
        VAR4->VAR23 = VAR24;
        break;
    case VAR25:
        if ((VAR4->VAR26 & VAR27) == VAR28)
        {
            VAR9 = FUN10();
            VAR8 = FUN11();
            FUN12(VAR9, VAR22, FUN13(VAR1, VAR29));
            FUN4(VAR9, VAR9, VAR30);
            FUN14(VAR31, VAR9, 1, VAR8);
            FUN15(VAR22);
            FUN16(VAR8);
            FUN9(0);
            VAR4->VAR23 = VAR24;
            FUN17(VAR9);
        }
        else
        {
        }
        break;
    case VAR32:
        FUN18(VAR22);
        break;
    case VAR33:
        FUN19(VAR22);
        break;
    case VAR34:
        if (FUN20(VAR2, VAR35))
        {
            if ((VAR4->VAR26 & VAR27) == VAR28 || (VAR4->VAR26 & VAR27) == VAR36)
            {
                FUN21(VAR13, VAR13, VAR37[VAR6], 8, 1);
            }
        }
        break;
    case VAR38:
        VAR8 = FUN11();
        FUN14(VAR39, VAR40, 0, VAR8);
        FUN22(VAR4, VAR41, VAR42);
        FUN16(VAR8);
        break;
    case VAR43:
        VAR8 = FUN11();
        FUN14(VAR39, VAR44, 0, VAR8);
        FUN22(VAR4, VAR41, VAR45);
        FUN16(VAR8);
        break;
    }
}