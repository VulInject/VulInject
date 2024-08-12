static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    bool VAR6 = false;
    if (!VAR3->VAR7)
    {
        VAR3->VAR8.VAR9->FUN2(&VAR3->VAR8);
        return;
    }
    FUN3(VAR3);
    VAR5 = FUN4(VAR3->VAR8.VAR10);
    FUN5(VAR3);
    FUN6(VAR3);
    if (FUN7(&VAR3->VAR8.VAR11, VAR12))
    {
        FUN8(&VAR3->VAR8);
        VAR6 = FUN9(&VAR3->VAR8.VAR11, 0, FUN10(VAR5) * FUN11(VAR5), VAR12);
    }
    if (VAR3->VAR13 || VAR6)
    {
        VAR3->VAR13 = 0;
        FUN12(VAR3->VAR8.VAR10, 0, 0, FUN13(VAR5), FUN11(VAR5));
    }
    if (VAR6)
    {
        FUN14(&VAR3->VAR8.VAR11, 0, FUN10(VAR5) * FUN11(VAR5), VAR12);
    }
}