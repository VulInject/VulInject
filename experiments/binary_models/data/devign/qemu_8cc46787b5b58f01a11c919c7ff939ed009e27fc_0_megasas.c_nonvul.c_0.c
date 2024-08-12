static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    uint8_t VAR5 = VAR6;
    uint64_t VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR2, VAR3);
    VAR9 = FUN3(VAR2, VAR3, VAR7, VAR4);
    if (!VAR9)
    {
        FUN4(VAR3);
        FUN5(VAR2, VAR3, VAR10);
        FUN6(VAR2, VAR3, VAR11);
        FUN7(VAR2, VAR7);
        VAR2->VAR12++;
        return;
    }
    switch (VAR9->VAR13->VAR14.VAR15)
    {
    case VAR16:
        VAR5 = FUN8(VAR2, VAR9);
        break;
    case VAR17:
        VAR5 = FUN9(VAR2, VAR9);
        break;
    case VAR18:
        VAR5 = FUN10(VAR2, VAR9);
        break;
    case VAR19:
        VAR5 = FUN11(VAR2, VAR9, 0);
        break;
    case VAR20:
        VAR5 = FUN11(VAR2, VAR9, 1);
        break;
    case VAR21:
    case VAR22:
        VAR5 = FUN12(VAR2, VAR9);
        break;
    default:
        FUN13(VAR9->VAR23, VAR9->VAR13->VAR14.VAR15);
        VAR2->VAR12++;
        break;
    }
    if (VAR5 != VAR24)
    {
        VAR9->VAR13->VAR14.VAR25 = VAR5;
        FUN14(VAR2, VAR9);
        FUN7(VAR2, VAR9->VAR26);
    }
}