static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4();
    FUN5(VAR4, VAR6[FUN6(VAR2->VAR7)], 28);
    FUN7(VAR4, VAR4, 0xF);
    FUN8(VAR6[FUN9(VAR2->VAR7)], VAR8, VAR4);
    FUN10(VAR4);
}