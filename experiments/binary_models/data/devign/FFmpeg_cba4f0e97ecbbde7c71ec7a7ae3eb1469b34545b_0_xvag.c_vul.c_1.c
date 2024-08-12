static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5;
    VAR6 *VAR7;
    FUN2(VAR2->VAR8, 4);
    VAR7 = FUN3(VAR2, NULL);
    if (!VAR7)
        return FUN4(VAR9);
    VAR7->VAR10->VAR11 = VAR12;
    VAR3 = FUN5(VAR2->VAR8);
    VAR4 = VAR3 > FUN6(VAR3);
    if (VAR4)
    {
        VAR3 = FUN6(VAR3);
        FUN2(VAR2->VAR8, 28);
        VAR5 = FUN7(VAR2->VAR8);
        VAR7->VAR10->VAR13 = FUN7(VAR2->VAR8);
        FUN2(VAR2->VAR8, 4);
        VAR7->VAR14 = FUN7(VAR2->VAR8);
        FUN2(VAR2->VAR8, 8);
        VAR7->VAR10->VAR15 = FUN7(VAR2->VAR8);
    }
    else
    {
        FUN2(VAR2->VAR8, 28);
        VAR5 = FUN5(VAR2->VAR8);
        VAR7->VAR10->VAR13 = FUN5(VAR2->VAR8);
        FUN2(VAR2->VAR8, 4);
        VAR7->VAR14 = FUN5(VAR2->VAR8);
        FUN2(VAR2->VAR8, 8);
        VAR7->VAR10->VAR15 = FUN5(VAR2->VAR8);
    }
    if (VAR7->VAR10->VAR15 <= 0)
        return VAR16;
    if (VAR7->VAR10->VAR13 <= 0)
        return VAR16;
    switch (VAR5)
    {
    case 0x1c:
        VAR7->VAR10->VAR17 = VAR18;
        VAR7->VAR10->VAR19 = 16 * VAR7->VAR10->VAR13;
        break;
    default:
        FUN8(VAR2, "", VAR5);
        return VAR20;
    };
    FUN2(VAR2->VAR8, VAR3 - FUN9(VAR2->VAR8));
    if (FUN10(VAR2->VAR8) == 0xFFFB)
    {
        VAR7->VAR10->VAR17 = VAR21;
        VAR7->VAR10->VAR19 = 0x1000;
        VAR7->VAR22 = VAR23;
    }
    FUN2(VAR2->VAR8, -2);
    FUN11(VAR7, 64, 1, VAR7->VAR10->VAR15);
    return 0;
}