static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int32_t VAR6, int32_t VAR7)
{
    target_ulong VAR8;
    const char *VAR9 = "";
    TCGv VAR10 = FUN2(VAR11);
    if (VAR6 != 0)
        FUN3(VAR2, VAR4, VAR12 | VAR13);
    VAR8 = VAR4->VAR14 + 4 + VAR7;
    switch (VAR5)
    {
    case VAR15:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x1 << VAR6);
        FUN7(VAR18, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR20;
    case VAR21:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x1 << VAR6);
        FUN7(VAR18, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR22;
    case VAR23:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x1 << VAR6);
        FUN7(VAR24, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR20;
    case VAR25:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x1 << VAR6);
        FUN7(VAR24, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
    VAR22:
        VAR4->VAR26 |= VAR27;
        break;
    case VAR28:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x3 << VAR6);
        FUN7(VAR18, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR20;
    case VAR29:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0x3 << VAR6);
        FUN7(VAR24, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR20;
    case VAR30:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0xf << VAR6);
        FUN7(VAR18, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
        goto VAR20;
    case VAR31:
    {
        int VAR16 = FUN4();
        int VAR17 = FUN4();
        FUN5(VAR10);
        FUN6(VAR10, VAR10, 0xf << VAR6);
        FUN7(VAR24, VAR10, 0, VAR16);
        FUN8(VAR19, 0);
        FUN9(VAR17);
        FUN10(VAR16);
        FUN8(VAR19, 1);
        FUN10(VAR17);
    }
        VAR9 = "";
    VAR20:
        VAR4->VAR26 |= VAR32;
        break;
    default:
        FUN11(VAR9);
        FUN12(VAR4, VAR33);
        goto VAR34;
    }
    FUN13("" VAR35, VAR9, VAR4->VAR26, VAR8);
    VAR4->VAR8 = VAR8;
VAR34:
    FUN14(VAR10);
}