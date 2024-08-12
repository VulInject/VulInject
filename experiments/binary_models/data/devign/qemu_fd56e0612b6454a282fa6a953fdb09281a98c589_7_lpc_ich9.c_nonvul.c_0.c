static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    assert(VAR3 < VAR6);
    VAR5 = 0;
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        int VAR8;
        int VAR9;
        FUN2(VAR2, VAR4, &VAR8, &VAR9);
        if (!VAR9 && VAR8 == VAR3)
        {
            VAR5 |= FUN3(FUN4(&VAR2->VAR10), VAR4);
        }
    }
    if (VAR3 == VAR2->VAR11)
    {
        VAR5 |= VAR2->VAR12;
    }
    FUN5(VAR2->VAR3[VAR3], VAR5);
}