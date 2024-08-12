static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5)
{
    const char *VAR6 = "";
    TCGv VAR7 = FUN2();
    switch (VAR3)
    {
    case VAR8:
    {
        TCGv_i32 VAR9 = FUN3();
        FUN4(VAR9, VAR5);
        FUN5(VAR7, VAR9);
        FUN6(VAR9);
    }
        FUN7(VAR7, VAR4);
        VAR6 = "";
        break;
    case VAR10:
        FUN8(VAR7, VAR4);
        {
            TCGv_i32 VAR9 = FUN3();
            FUN9(VAR9, VAR7);
            FUN10(VAR9, VAR5);
            FUN6(VAR9);
        }
        VAR6 = "";
        break;
    case VAR11:
        FUN11(VAR12, VAR7, VAR5);
        FUN7(VAR7, VAR4);
        VAR6 = "";
        break;
    case VAR13:
        FUN8(VAR7, VAR4);
        {
            TCGv_i32 VAR14 = FUN12(VAR5);
            FUN13(VAR15, VAR7, VAR14, VAR4);
            FUN6(VAR14);
        }
        VAR6 = "";
        break;
    case VAR16:
        FUN14(VAR2, VAR7, VAR5);
        FUN7(VAR7, VAR4);
        VAR6 = "";
        break;
    case VAR17:
        FUN8(VAR7, VAR4);
        FUN15(VAR2, VAR7, VAR5);
        VAR6 = "";
        break;
    case VAR18:
    {
        TCGv_i32 VAR9 = FUN3();
        FUN16(VAR2, VAR9, VAR5);
        FUN5(VAR7, VAR9);
        FUN6(VAR9);
    }
        FUN7(VAR7, VAR4);
        VAR6 = "";
        break;
    case VAR19:
        FUN8(VAR7, VAR4);
        {
            TCGv_i32 VAR9 = FUN3();
            FUN9(VAR9, VAR7);
            FUN17(VAR2, VAR9, VAR5);
            FUN6(VAR9);
        }
        VAR6 = "";
        break;
    default:
        FUN18(VAR6);
        FUN19(VAR2, VAR20);
        goto VAR21;
    }
    (void)VAR6;
    FUN20("", VAR6, VAR22[VAR4], VAR23[VAR5]);
VAR21:
    FUN21(VAR7);
}