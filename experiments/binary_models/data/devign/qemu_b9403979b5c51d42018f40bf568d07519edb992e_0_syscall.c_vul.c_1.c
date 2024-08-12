static VAR1 FUN1(struct VAR2 *VAR3)
{
    struct VAR4 *VAR5;
    struct VAR6 *VAR7;
    struct VAR8 *VAR9;
    switch (VAR3->VAR10)
    {
    case VAR11:
        break;
    case VAR12:
    case VAR13:
        VAR5 = FUN2(VAR3);
        VAR5->VAR14 = FUN3(VAR5->VAR14);
        VAR5->VAR15 = FUN4(VAR5->VAR15);
        VAR5->VAR16 = FUN4(VAR5->VAR16);
        VAR5->VAR17 = FUN4(VAR5->VAR17);
        FUN5(FUN6(VAR5), VAR3->VAR18 - FUN7(sizeof(*VAR5)));
        break;
    case VAR19:
    case VAR20:
    case VAR21:
        VAR7 = FUN2(VAR3);
        VAR7->VAR22 = FUN4(VAR7->VAR22);
        FUN8(FUN9(VAR7), VAR3->VAR18 - FUN7(sizeof(*VAR7)));
        break;
    case VAR23:
        break;
    case VAR24:
    case VAR25:
        VAR9 = FUN2(VAR3);
        VAR9->VAR26 = FUN4(VAR9->VAR26);
        FUN10(FUN11(VAR9), VAR3->VAR18 - FUN7(sizeof(*VAR9)));
        break;
    default:
        return -VAR27;
    }
    return 0;
}