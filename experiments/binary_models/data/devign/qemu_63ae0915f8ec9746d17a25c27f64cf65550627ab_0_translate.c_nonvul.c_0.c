static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3 = VAR4[FUN2(VAR2->VAR5)];
    TCGv VAR6 = VAR4[FUN3(VAR2->VAR5)];
    TCGv VAR7 = VAR4[FUN4(VAR2->VAR5)];
    uint32_t VAR8 = FUN5(VAR2->VAR5);
    uint32_t VAR9 = FUN6(VAR2->VAR5);
    TCGv_i32 VAR10, VAR11;
    VAR8 += 32;
    VAR9 += 32;
    VAR10 = FUN7();
    VAR11 = FUN7();
    FUN8(VAR10, VAR7);
    FUN8(VAR11, VAR6);
    FUN9(VAR10, VAR10, 0x1f);
    FUN10(VAR11, VAR11, VAR10);
    FUN11(VAR10);
    FUN9(VAR11, VAR11, FUN12(VAR8, VAR9));
    FUN13(VAR3, VAR11);
    FUN11(VAR11);
    if (FUN14(FUN15(VAR2->VAR5) != 0))
    {
        FUN16(VAR2, VAR3);
    }
}