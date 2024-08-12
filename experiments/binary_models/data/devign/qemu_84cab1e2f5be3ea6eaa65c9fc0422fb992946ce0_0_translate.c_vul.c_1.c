static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    TCGv VAR4;
    VAR3 = FUN2(VAR2->VAR5);
    if ((VAR2->VAR5 & 0x3) == 0x2)
    {
        FUN3(VAR2, VAR6);
        if (FUN4(VAR2->VAR7 == 0))
        {
            FUN3(VAR2, VAR6);
            return;
        }
        if (FUN4(VAR3 & 1))
        {
            FUN3(VAR2, VAR8);
            return;
        }
        if (FUN4(VAR2->VAR9))
        {
            FUN5(VAR2, VAR10, VAR11);
            return;
        }
        FUN6(VAR2, VAR12);
        VAR4 = FUN7();
        FUN8(VAR2, VAR4, 0x03);
        FUN9(VAR2, VAR13[VAR3], VAR4);
        FUN10(VAR2, VAR4, VAR4, 8);
        FUN9(VAR2, VAR13[VAR3 + 1], VAR4);
        FUN11(VAR4);
    }
    else
    {
        if (FUN12(VAR2->VAR5))
        {
            if (FUN4(FUN13(VAR2->VAR5) == 0))
            {
                FUN3(VAR2, VAR8);
                return;
            }
        }
        FUN6(VAR2, VAR12);
        VAR4 = FUN7();
        FUN8(VAR2, VAR4, 0x03);
        FUN9(VAR2, VAR13[VAR3], VAR4);
        if (FUN12(VAR2->VAR5))
            FUN14(VAR13[FUN13(VAR2->VAR5)], VAR4);
        FUN11(VAR4);
    }
}