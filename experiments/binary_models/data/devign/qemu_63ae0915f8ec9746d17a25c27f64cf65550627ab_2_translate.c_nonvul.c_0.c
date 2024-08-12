static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3 = VAR4[FUN2(VAR2->VAR5)];
    TCGv VAR6 = VAR4[FUN3(VAR2->VAR5)];
    uint32_t VAR7 = FUN4(VAR2->VAR5);
    uint32_t VAR8 = FUN5(VAR2->VAR5);
    uint32_t VAR9 = FUN6(VAR2->VAR5);
    if (VAR8 == 0 && VAR9 == (31 - VAR7))
    {
        FUN7(VAR3, VAR6, VAR7);
        FUN8(VAR3, VAR3);
    }
    else if (VAR7 != 0 && VAR9 == 31 && VAR7 == (32 - VAR8))
    {
        FUN8(VAR3, VAR6);
        FUN9(VAR3, VAR3, VAR8);
    }
    else
    {
        VAR8 += 32;
        VAR9 += 32;
        if (VAR7 == 0)
        {
            FUN10(VAR3, VAR6, FUN11(VAR8, VAR9));
        }
        else
        {
            TCGv_i32 VAR10 = FUN12();
            FUN13(VAR10, VAR6);
            FUN14(VAR10, VAR10, VAR7);
            FUN15(VAR10, VAR10, FUN11(VAR8, VAR9));
            FUN16(VAR3, VAR10);
            FUN17(VAR10);
        }
    }
    if (FUN18(FUN19(VAR2->VAR5) != 0))
    {
        FUN20(VAR2, VAR3);
    }
}