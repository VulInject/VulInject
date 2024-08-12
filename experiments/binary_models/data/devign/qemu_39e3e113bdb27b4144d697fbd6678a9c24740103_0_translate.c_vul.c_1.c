static void FUN1(VAR1 *VAR2, int VAR3, TCGv VAR4, TCGv_ptr VAR5)
{
    TCGv VAR6;
    TCGv_i64 VAR7;
    int VAR8 = FUN2(VAR2);
    VAR7 = FUN3();
    VAR6 = FUN4();
    switch (VAR3)
    {
    case VAR9:
        FUN5(VAR6, VAR4, VAR8);
        FUN6(VAR10, VAR5, VAR6);
        break;
    case VAR11:
        FUN7(VAR6, VAR4, VAR8);
        FUN6(VAR10, VAR5, VAR6);
        break;
    case VAR12:
        FUN8(VAR6, VAR4, VAR8);
        FUN6(VAR10, VAR5, VAR6);
        break;
    case VAR13:
        FUN8(VAR6, VAR4, VAR8);
        FUN9(VAR10, VAR5, VAR6);
        break;
    case VAR14:
        FUN10(VAR7, VAR4, VAR8);
        FUN11(VAR10, VAR5, VAR7);
        FUN12(VAR7);
        break;
    case VAR15:
        if (FUN13(VAR2->VAR16, VAR17))
        {
            FUN14(VAR2, VAR2->VAR18, VAR19);
            break;
        }
        FUN8(VAR6, VAR4, VAR8);
        FUN15(VAR6, VAR6, 16);
        FUN16(VAR6, VAR5, FUN17(VAR20, VAR21.VAR22));
        FUN18(VAR6, VAR4, 4);
        FUN10(VAR7, VAR6, VAR8);
        FUN19(VAR7, VAR5, FUN17(VAR20, VAR21.VAR23));
        break;
    case VAR24:
        FUN14(VAR2, VAR2->VAR18, VAR19);
        break;
    default:
        FUN20();
    }
    FUN21(VAR6);
    FUN12(VAR7);
}