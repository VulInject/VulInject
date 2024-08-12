void FUN1(VAR1 *VAR2, void *(*VAR3)(void *), void *VAR4, int VAR5)
{
    HANDLE VAR6;
    assert(VAR5 == VAR7);
    struct VAR8 *VAR9;
    FUN2();
    VAR9 = FUN3(sizeof *VAR9);
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR6 = (VAR10)FUN4(NULL, 0, VAR11, VAR9, 0, NULL);
    if (!VAR6)
    {
        FUN5(FUN6(), VAR12);
    }
    FUN7(VAR6);
}