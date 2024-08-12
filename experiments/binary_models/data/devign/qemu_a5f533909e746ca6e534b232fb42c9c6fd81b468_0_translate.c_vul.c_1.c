static void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4 & VAR5)
    {
        int VAR6 = VAR2->VAR4 & VAR5;
        VAR2->VAR4 &= ~VAR5;
        VAR2->VAR7 = VAR8;
        FUN2(VAR2, 0);
        switch (VAR6 & VAR9)
        {
        case VAR10:
            FUN3("");
            FUN4(VAR2, 0, VAR2->VAR11 + VAR3);
            break;
        case VAR12:
            FUN3("");
            if (VAR6 & VAR13)
            {
                FUN5(VAR4, VAR4, VAR14);
            }
            FUN4(VAR2, 0, VAR2->VAR15);
            break;
        case VAR16:
            FUN3("");
            FUN4(VAR2, 0, VAR2->VAR15);
            break;
        case VAR17:
            FUN3("");
            {
                VAR18 *VAR19 = FUN6();
                FUN7(VAR20, VAR21, 0, VAR19);
                FUN4(VAR2, 1, VAR2->VAR11 + VAR3);
                FUN8(VAR19);
                FUN4(VAR2, 0, VAR2->VAR15);
            }
            break;
        case VAR22:
            FUN3("");
            if (VAR2->VAR23 & (VAR24 | VAR25))
            {
                TCGv VAR26 = FUN9();
                TCGv_i32 VAR27 = FUN10();
                FUN11(VAR26, VAR15, 0x1);
                FUN12(VAR27, VAR26);
                FUN13(VAR26);
                FUN14(VAR4, VAR4, ~(VAR28)VAR14);
                FUN15(VAR27, VAR27, VAR29);
                FUN16(VAR4, VAR4, VAR27);
                FUN17(VAR27);
                FUN11(VAR30, VAR15, ~(VAR31)0x1);
            }
            else
            {
                FUN18(VAR30, VAR15);
            }
            if (VAR2->VAR32)
            {
                FUN2(VAR2, 0);
                FUN19(VAR33, VAR34);
            }
            FUN20(0);
            break;
        default:
            FUN3("");
            break;
        }
    }
}