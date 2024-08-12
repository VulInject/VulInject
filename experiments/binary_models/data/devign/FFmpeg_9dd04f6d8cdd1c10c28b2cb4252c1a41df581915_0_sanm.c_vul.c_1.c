static int FUN1(VAR1 *VAR2)
{
    uint16_t VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR3 = FUN2(&VAR2->VAR8);
    VAR5 = FUN2(&VAR2->VAR8);
    VAR4 = FUN2(&VAR2->VAR8);
    VAR6 = FUN2(&VAR2->VAR8);
    VAR7 = FUN2(&VAR2->VAR8);
    if (VAR2->VAR9 < VAR5 + VAR6 || VAR2->VAR10 < VAR4 + VAR7)
    {
        if (FUN3(FUN4(VAR5 + VAR6, VAR2->VAR9), FUN4(VAR4 + VAR7, VAR2->VAR10), 0, VAR2->VAR11) < 0)
            FUN5(VAR2->VAR11, FUN4(VAR5 + VAR6, VAR2->VAR9), FUN4(VAR4 + VAR7, VAR2->VAR10));
        FUN6(VAR2, FUN4(VAR5 + VAR6, VAR2->VAR9), FUN4(VAR4 + VAR7, VAR2->VAR10));
        if (FUN7(VAR2))
        {
            FUN8(VAR2->VAR11, VAR12, "");
            return FUN9(VAR13);
            FUN10(&VAR2->VAR8, 4);
            FUN11(VAR2->VAR11, "", VAR3);
            switch (VAR3)
            {
            case 1:
            case 3:
                return FUN12(VAR2, VAR4, VAR5, VAR6, VAR7);
                break;
            case 37:
                return FUN13(VAR2, VAR4, VAR5, VAR6, VAR7);
                break;
            case 47:
                return FUN14(VAR2, VAR4, VAR5, VAR6, VAR7);
                break;
            default:
                FUN15(VAR2->VAR11, "", VAR3);
                return VAR14