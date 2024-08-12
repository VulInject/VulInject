static void FUN1(VAR1 *VAR2, const char *VAR3, bool VAR4)
{
    uint64_t VAR5;
    VAR2->VAR6 = FUN2(VAR3);
    VAR2->VAR7 = FUN3(NULL);
    VAR2->VAR8 = FUN4(VAR2->VAR7);
    VAR2->VAR9 = FUN5(VAR2->VAR8, 0, &VAR5);
    FUN6(VAR2->VAR9);
    FUN7(VAR5, ==, 256);
    if (VAR4)
    {
        FUN8(VAR2->VAR8);
    }
    VAR2->VAR10 = FUN5(VAR2->VAR8, 2, &VAR5);
    FUN6(VAR2->VAR10);
    FUN7(VAR5, ==, VAR11);
    FUN9(VAR2->VAR8);
}