static VAR1 FUN1(struct VAR2 *VAR3)
{
    uint32_t VAR4;
    struct VAR5 *VAR6;
    struct VAR7 *VAR8;
    struct VAR9 *VAR10;
    VAR4 = VAR3->VAR4;
    switch (VAR3->VAR11)
    {
    case VAR12:
    case VAR13:
    case VAR14:
        VAR6 = FUN2(VAR3);
        VAR6->VAR15 = FUN3(VAR6->VAR15);
        VAR6->VAR16 = FUN4(VAR6->VAR16);
        VAR6->VAR17 = FUN4(VAR6->VAR17);
        VAR6->VAR18 = FUN4(VAR6->VAR18);
        FUN5(FUN6(VAR6), VAR4 - FUN7(sizeof(*VAR6)));
        break;
    case VAR19:
    case VAR20:
    case VAR21:
        VAR8 = FUN2(VAR3);
        VAR8->VAR22 = FUN4(VAR8->VAR22);
        FUN8(FUN9(VAR8), VAR4 - FUN7(sizeof(*VAR8)));
        break;
    case VAR23:
    case VAR24:
    case VAR25:
        VAR10 = FUN2(VAR3);
        VAR10->VAR26 = FUN4(VAR10->VAR26);
        FUN10(FUN11(VAR10), VAR4 - FUN7(sizeof(*VAR10)));
        break;
    default:
        return -VAR27;
    }
    return 0;
}