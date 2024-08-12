static void FUN1(VAR1 *VAR2, UserDefNativeListUnionKind VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR5 = FUN2(VAR2);
    FUN3(VAR5);
    FUN3(FUN4(VAR5, ""));
    VAR7 = FUN5(FUN6(FUN7(VAR5, "")));
    switch (VAR3)
    {
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
        for (VAR8 = 0; VAR8 < 32; VAR8++)
        {
            VAR1 *VAR18;
            VAR19 *VAR20;
            int64_t VAR21;
            VAR18 = FUN8(VAR7);
            FUN3(VAR18);
            VAR20 = FUN9(VAR18);
            FUN3(FUN10(VAR20, &VAR21));
            FUN11(VAR21, ==, VAR8);
            FUN12(FUN13(VAR7));
        }
        break;
    case VAR22:
        for (VAR8 = 0; VAR8 < 32; VAR8++)
        {
            VAR1 *VAR18;
            VAR23 *VAR20;
            VAR18 = FUN8(VAR7);
            FUN3(VAR18);
            VAR20 = FUN14(VAR18);
            FUN11(FUN15(VAR20), ==, VAR8 % 3 == 0);
            FUN12(FUN13(VAR7));
        }
        break;
    case VAR24:
        for (VAR8 = 0; VAR8 < 32; VAR8++)
        {
            VAR1 *VAR18;
            VAR25 *VAR20;
            gchar VAR26[8];
            VAR18 = FUN8(VAR7);
            FUN3(VAR18);
            VAR20 = FUN16(VAR18);
            sprintf(VAR26, "", VAR8);
            FUN17(FUN18(VAR20), ==, VAR26);
            FUN12(FUN13(VAR7));
        }
        break;
    case VAR27:
        for (VAR8 = 0; VAR8 < 32; VAR8++)
        {
            VAR1 *VAR18;
            VAR19 *VAR20;
            VAR28 *VAR29 = FUN19("");
            VAR28 *VAR30 = FUN19("");
            VAR18 = FUN8(VAR7);
            FUN3(VAR18);
            VAR20 = FUN9(VAR18);
            FUN20(VAR29, "", (double)VAR8 / 3);
            FUN20(VAR30, "", FUN21(VAR20));
            FUN17(VAR30->VAR26, ==, VAR29->VAR26);
            FUN12(FUN13(VAR7));
            FUN22(VAR29, true);
            FUN22(VAR30, true);
        }
        break;
    default:
        FUN23();
    }
    FUN24(VAR7);
}