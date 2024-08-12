static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(&VAR4->VAR8);
    FUN3("");
    VAR7->VAR9 = 0;
    if (VAR7->VAR10 == VAR11)
    {
        if (VAR7->VAR12 == -1)
        {
            VAR7->VAR9 = FUN4(VAR2->VAR13, VAR7->VAR14);
            FUN5(FUN6(VAR7->VAR15), &VAR7->VAR16, VAR7->VAR9, VAR17);
            FUN3("", VAR7->VAR9);
            FUN7(VAR2->VAR18, VAR7->VAR19, VAR7->VAR9);
            FUN8(VAR7);
            VAR4->VAR20 = false;
            FUN3("");
            FUN9(FUN6(VAR7->VAR15), &VAR7->VAR16);
            VAR2->FUN10(VAR2);
            return;
        }
        FUN5(FUN6(VAR7->VAR15), &VAR7->VAR16, VAR2->VAR13, VAR17);
        FUN11(VAR2, 0);
        return;
    }
    switch (VAR7->VAR21)
    {
    case VAR22:
        FUN5(FUN6(VAR7->VAR15), &VAR7->VAR16, VAR2->VAR13, VAR17);
        break;
    case VAR23:
        FUN5(FUN6(VAR7->VAR15), &VAR7->VAR16, VAR2->VAR13, VAR24);
        break;
    default:
        break;
    }
    VAR2->VAR25++;
    FUN12(VAR2, 0);
}