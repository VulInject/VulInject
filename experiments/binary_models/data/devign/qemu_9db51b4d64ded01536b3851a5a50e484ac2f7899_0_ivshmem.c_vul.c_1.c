static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    if (!FUN2(VAR2, VAR6))
    {
        return;
    }
    if (VAR3 < 0 || VAR3 >= VAR2->VAR7)
    {
        FUN3("", VAR3);
        return;
    }
    VAR5 = VAR2->VAR8[VAR3].VAR9;
    FUN4();
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        FUN5(VAR2, VAR3, VAR4);
    }
    FUN6();
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        FUN7(&VAR2->VAR8[VAR3].VAR10[VAR4]);
    }
    FUN8(VAR2->VAR8[VAR3].VAR10);
    VAR2->VAR8[VAR3].VAR9 = 0;
}