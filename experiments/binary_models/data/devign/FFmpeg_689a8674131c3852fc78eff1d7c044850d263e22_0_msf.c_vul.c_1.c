static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5;
    VAR6 *VAR7;
    FUN2(VAR2->VAR8, 4);
    VAR7 = FUN3(VAR2, NULL);
    if (!VAR7)
        return FUN4(VAR9);
    VAR7->VAR3->VAR10 = VAR11;
    VAR3 = FUN5(VAR2->VAR8);
    VAR7->VAR3->VAR12 = FUN5(VAR2->VAR8);
    if (VAR7->VAR3->VAR12 <= 0)
        return VAR13;
    VAR5 = FUN5(VAR2->VAR8);
    VAR7->VAR3->VAR14 = FUN5(VAR2->VAR8);
    if (VAR7->VAR3->VAR14 <= 0)
        return VAR13;
    VAR4 = FUN5(VAR2->VAR8);
    if (VAR4 > VAR15 / VAR7->VAR3->VAR12)
        return VAR13;
    VAR7->VAR3->VAR16 = VAR4;
    switch (VAR3)
    {
    case 0:
        VAR7->VAR3->VAR17 = VAR18;
        break;
    case 3:
        VAR7->VAR3->VAR16 = 16 * VAR7->VAR3->VAR12;
        VAR7->VAR3->VAR17 = VAR19;
        break;
    case 7:
        VAR7->VAR20 = VAR21;
        VAR7->VAR3->VAR17 = VAR22;
        break;
    default:
        FUN6(VAR2, "", VAR3);
        return VAR23;
    }
    VAR7->VAR24 = FUN7(VAR7->VAR3, VAR5);
    FUN2(VAR2->VAR8, 0x40 - FUN8(VAR2->VAR8));
    FUN9(VAR7, 64, 1, VAR7->VAR3->VAR14);
    return 0;
}