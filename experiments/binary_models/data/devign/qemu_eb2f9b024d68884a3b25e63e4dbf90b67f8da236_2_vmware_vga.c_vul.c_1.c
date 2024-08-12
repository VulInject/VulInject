static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    bool VAR6 = false;
    if (!VAR3->VAR7)
    {
        VAR3->VAR8.update(&VAR3->VAR8);
        return;
    }
    FUN2(VAR3);
    VAR5 = FUN3(VAR3->VAR8.VAR9);
    FUN4(VAR3);
    FUN5(VAR3);
    if (FUN6(&VAR3->VAR8.VAR10))
    {
        FUN7(&VAR3->VAR8);
        VAR6 = FUN8(&VAR3->VAR8.VAR10, 0, FUN9(VAR5) * FUN10(VAR5), VAR11);
    }
    if (VAR3->VAR12 || VAR6)
    {
        VAR3->VAR12 = 0;
        memcpy(FUN11(VAR5), VAR3->VAR8.VAR13, FUN9(VAR5) * FUN10(VAR5));
        FUN12(VAR3->VAR8.VAR9, 0, 0, FUN13(VAR5), FUN10(VAR5));
    }
    if (VAR6)
    {
        FUN14(&VAR3->VAR8.VAR10, 0, FUN9(VAR5) * FUN10(VAR5), VAR11);
    }
}