static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const char *VAR8 = "";
    int VAR9 = 0;
    TCGv VAR10 = FUN2();
    switch (VAR3)
    {
    case VAR11:
    case VAR12:
        FUN3(VAR2);
        break;
    case VAR13:
    case VAR14:
        FUN3(VAR2);
        FUN4(VAR2, VAR4);
        break;
    case VAR15:
    case VAR16:
        FUN5(VAR2);
        break;
    }
    if (VAR6 == 0)
    {
        FUN6(VAR10, VAR7);
    }
    else if (VAR7 == 0)
    {
        FUN6(VAR10, VAR6);
    }
    else
    {
        FUN6(VAR10, VAR7);
        FUN7(VAR2, VAR10, VAR17[VAR6]);
    }
    FUN8(VAR2, 0);
    switch (VAR3)
    {
    case VAR11:
    {
        TCGv_i32 VAR18 = FUN9();
        FUN10(VAR10, VAR10, VAR2->VAR19);
        FUN11(VAR18, VAR10);
        FUN12(VAR18, VAR4);
        FUN13(VAR18);
    }
        VAR8 = "";
        break;
    case VAR13:
    {
        TCGv_i64 VAR18 = FUN14();
        FUN15(VAR18, VAR10, VAR2->VAR19);
        FUN16(VAR2, VAR18, VAR4);
        FUN17(VAR18);
    }
        VAR8 = "";
        break;
    case VAR15:
        FUN18(VAR10, VAR10, ~0x7);
        {
            TCGv_i64 VAR18 = FUN14();
            FUN15(VAR18, VAR10, VAR2->VAR19);
            FUN16(VAR2, VAR18, VAR4);
            FUN17(VAR18);
        }
        VAR8 = "";
        break;
    case VAR12:
    {
        TCGv_i32 VAR18 = FUN9();
        TCGv VAR20 = FUN2();
        FUN19(VAR18, VAR5);
        FUN20(VAR20, VAR18);
        FUN21(VAR20, VAR10, VAR2->VAR19);
        FUN13(VAR18);
        FUN13(VAR20);
    }
        VAR8 = "";
        VAR9 = 1;
        break;
    case VAR14:
    {
        TCGv_i64 VAR18 = FUN14();
        FUN22(VAR2, VAR18, VAR5);
        FUN23(VAR18, VAR10, VAR2->VAR19);
        FUN17(VAR18);
    }
        VAR8 = "";
        VAR9 = 1;
        break;
    case VAR16:
        FUN18(VAR10, VAR10, ~0x7);
        {
            TCGv_i64 VAR18 = FUN14();
            FUN22(VAR2, VAR18, VAR5);
            FUN23(VAR18, VAR10, VAR2->VAR19);
            FUN17(VAR18);
        }
        VAR8 = "";
        VAR9 = 1;
        break;
    }
    FUN24(VAR10);
    FUN25("", VAR8, VAR21[VAR9 ? VAR5 : VAR4], VAR22[VAR7], VAR22[VAR6]);
}