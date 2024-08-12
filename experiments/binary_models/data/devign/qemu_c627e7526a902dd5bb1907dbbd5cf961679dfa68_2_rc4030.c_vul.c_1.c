static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7;
    FUN3(VAR6->VAR8);
    FUN4(&VAR6->VAR9);
    FUN5(FUN6(&VAR6->VAR10));
    FUN5(FUN6(&VAR6->VAR11));
    FUN5(FUN6(&VAR6->VAR12));
    for (VAR7 = 0; VAR7 < VAR13; ++VAR7)
    {
        FUN7(&VAR6->VAR12, &VAR6->VAR14[VAR7]);
        FUN5(FUN6(&VAR6->VAR14[VAR7]));
    }
}