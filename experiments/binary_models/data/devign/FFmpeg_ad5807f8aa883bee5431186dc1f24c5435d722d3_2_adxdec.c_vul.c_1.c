static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR2, NULL);
    if (!VAR9)
        return FUN3(VAR10);
    VAR7 = VAR2->VAR11[0]->VAR12;
    if (FUN4(VAR2->VAR13) != 0x8000)
        return VAR14;
    VAR4->VAR15 = FUN4(VAR2->VAR13) + 4;
    FUN5(VAR2->VAR13, -4, VAR16);
    if (FUN6(VAR2, VAR7, VAR2->VAR13, VAR4->VAR15) < 0)
        return FUN3(VAR10);
    if (VAR7->VAR17 < 12)
    {
        FUN7(VAR2, VAR18, "");
        return VAR14;
    }
    VAR7->VAR19 = FUN8(VAR7->VAR20 + 7);
    VAR7->VAR21 = FUN9(VAR7->VAR20 + 8);
    if (VAR7->VAR19 <= 0)
    {
        FUN7(VAR2, VAR18, "", VAR7->VAR19);
        return VAR14;
    }
    if (VAR7->VAR21 <= 0)
    {
        FUN7(VAR2, VAR18, "", VAR7->VAR21);
        return VAR14;
    }
    VAR7->VAR22 = VAR23;
    VAR7->VAR24 = VAR2->VAR25->VAR26;
    VAR7->VAR27 = VAR7->VAR21 * VAR7->VAR19 * VAR28 * 8LL / VAR29;
    FUN10(VAR9, 64, VAR29, VAR7->VAR21);
    return 0;
}