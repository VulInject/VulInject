static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint32_t VAR5;
    uint16_t VAR6, VAR7, VAR8;
    uint8_t VAR9;
    VAR10 *VAR11;
    if (!FUN2(VAR4) || !FUN3(VAR4->VAR12) || !FUN4(VAR4->VAR11 + VAR13))
    {
        return;
    }
    VAR11 = FUN5(VAR4->VAR11, VAR2->VAR14);
    FUN6(VAR4->VAR11 + VAR13, FUN7(0xFFFF, 0, 0));
    FUN6(VAR4->VAR15 + VAR13, 0);
    FUN6(VAR2->VAR16 + VAR13, ~0);
    for (VAR7 = VAR13; VAR7; VAR7 = FUN8(FUN4(VAR11 + VAR7)))
    {
        VAR5 = FUN4(VAR11 + VAR7);
        VAR6 = FUN9(VAR5);
        VAR9 = FUN10(VAR5);
        VAR8 = FUN11(VAR11, VAR7);
        FUN12(VAR2->VAR16 + VAR7, VAR17);
        switch (VAR6)
        {
        case 0:
        case VAR18:
        case VAR19:
            FUN13(VAR2->VAR20.VAR21, VAR6, VAR7);
            break;
        default:
            FUN14(VAR4, VAR6, VAR9, VAR7, VAR8);
        }
    }
    if (FUN15(VAR4->VAR11 + VAR13) == 0xFFFF)
    {
        FUN16(VAR4->VAR11 + VAR13, 0);
    }
    FUN17(VAR11);
    return;
}