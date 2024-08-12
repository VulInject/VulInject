static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    FUN4(VAR2, VAR2->VAR6 - 4);
    VAR4 = FUN5(FUN6(VAR2->VAR7));
    FUN7(VAR8[FUN8(VAR2->VAR7)], VAR9, VAR4);
    FUN9(VAR4);
}