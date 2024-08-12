static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    int VAR6, VAR7, VAR8;
    TCGv VAR9, VAR10;
    VAR5 = FUN2(VAR4->VAR11);
    VAR8 = FUN3(VAR4->VAR11);
    VAR7 = FUN4(VAR4->VAR11);
    VAR6 = FUN5(VAR4->VAR11);
    switch (VAR5)
    {
    case VAR12:
        FUN6(VAR13[VAR8], VAR13[VAR6], VAR13[VAR7]);
        break;
    case VAR14:
        FUN7(VAR13[VAR8], VAR13[VAR8 + 1], VAR13[VAR6]);
        break;
    case VAR15:
        FUN8(VAR2, VAR13[VAR8], VAR13[VAR8 + 1], VAR13[VAR6], VAR13[VAR7]);
        break;
    case VAR16:
        VAR9 = FUN9();
        VAR10 = FUN9();
        FUN10(VAR17, 0);
        if (!FUN11(VAR2, VAR18))
        {
            FUN12(VAR9, VAR13[VAR8 + 1]);
            FUN13(VAR19, VAR9, VAR13[VAR8 + 1], VAR17, VAR9, VAR13[VAR8 + 1]);
            FUN12(VAR10, VAR13[VAR7]);
            FUN13(VAR19, VAR10, VAR13[VAR7], VAR17, VAR10, VAR13[VAR7]);
            FUN14(VAR20, VAR21, VAR9, VAR10);
        }
        else
        {
            FUN15(VAR22, VAR21, VAR13[VAR7], 0);
        }
        FUN16(VAR21, VAR21, 31);
        FUN17(VAR23, VAR23, VAR21);
        FUN18(VAR9, VAR13[VAR6], 8);
        FUN16(VAR13[VAR8], VAR13[VAR6], 24);
        FUN19(VAR13[VAR8 + 1], VAR9);
        FUN20(VAR9);
        FUN20(VAR10);
        break;
    case VAR24:
        FUN21(VAR2, VAR13[VAR8], VAR13[VAR8 + 1], VAR13[VAR6], VAR13[VAR7]);
        break;
    case VAR25:
        VAR9 = FUN9();
        VAR10 = FUN9();
        FUN10(VAR17, 0);
        if (!FUN11(VAR2, VAR18))
        {
            FUN12(VAR9, VAR13[VAR8 + 1]);
            FUN13(VAR19, VAR9, VAR13[VAR8 + 1], VAR17, VAR9, VAR13[VAR8 + 1]);
            FUN12(VAR10, VAR13[VAR7]);
            FUN13(VAR19, VAR10, VAR13[VAR7], VAR17, VAR10, VAR13[VAR7]);
            FUN14(VAR20, VAR21, VAR9, VAR10);
        }
        else
        {
            FUN15(VAR22, VAR21, VAR13[VAR7], 0);
        }
        FUN16(VAR21, VAR21, 31);
        FUN17(VAR23, VAR23, VAR21);
        FUN19(VAR9, VAR13[VAR6]);
        FUN18(VAR13[VAR8 + 1], VAR9, 16);
        FUN16(VAR13[VAR8], VAR9, 16);
        FUN20(VAR9);
        FUN20(VAR10);
        break;
    case VAR26:
        VAR9 = FUN9();
        VAR10 = FUN9();
        FUN15(VAR22, VAR9, VAR13[VAR7], 0xffffffff);
        FUN15(VAR22, VAR10, VAR13[VAR6], 0x80000000);
        FUN22(VAR9, VAR9, VAR10);
        FUN15(VAR22, VAR10, VAR13[VAR7], 0);
        FUN17(VAR21, VAR9, VAR10);
        FUN16(VAR21, VAR21, 31);
        FUN17(VAR23, VAR23, VAR21);
        FUN10(VAR17, 0);
        FUN19(VAR13[VAR8], VAR13[VAR6]);
        FUN23(VAR13[VAR8 + 1], VAR13[VAR6], 31);
        FUN20(VAR9);
        FUN20(VAR10);
        break;
    case VAR27:
        FUN15(VAR22, VAR21, VAR13[VAR7], 0);
        FUN16(VAR21, VAR21, 31);
        FUN17(VAR23, VAR23, VAR21);
        FUN10(VAR17, 0);
        FUN19(VAR13[VAR8], VAR13[VAR6]);
        FUN10(VAR13[VAR8 + 1], 0);
        break;
    case VAR28:
        FUN24(VAR13[VAR8], VAR13[VAR6]);
        break;
    case VAR29:
        FUN25(VAR13[VAR8], VAR13[VAR8 + 1], VAR13[VAR6]);
        break;
    }
}