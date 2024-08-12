static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3 = VAR4[FUN2(VAR2->VAR5)];
    TCGv VAR6 = VAR4[FUN3(VAR2->VAR5)];
    uint32_t VAR7 = FUN4(VAR2->VAR5);
    uint32_t VAR8 = FUN5(VAR2->VAR5);
    uint32_t VAR9 = FUN6(VAR2->VAR5);
    if (VAR7 == (31 - VAR9) && VAR8 <= VAR9)
    {
        FUN7(VAR3, VAR3, VAR6, VAR7, VAR9 - VAR8 + 1);
    }
    else
    {
        target_ulong VAR10;
        TCGv_i32 VAR11;
        TCGv VAR12;
        VAR8 += 32;
        VAR9 += 32;
        VAR10 = FUN8(VAR8, VAR9);
        VAR11 = FUN9();
        VAR12 = FUN10();
        FUN11(VAR11, VAR6);
        FUN12(VAR11, VAR11, VAR7);
        FUN13(VAR12, VAR11);
        FUN14(VAR11);
        FUN15(VAR12, VAR12, VAR10);
        FUN15(VAR3, VAR3, ~VAR10);
        FUN16(VAR3, VAR3, VAR12);
        FUN17(VAR12);
    }
    if (FUN18(FUN19(VAR2->VAR5) != 0))
    {
        FUN20(VAR2, VAR3);
    }
}