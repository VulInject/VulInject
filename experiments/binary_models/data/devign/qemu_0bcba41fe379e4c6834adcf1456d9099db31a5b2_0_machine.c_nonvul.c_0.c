void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (!VAR4->VAR10)
    {
        return;
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR10->VAR11; VAR5++)
    {
        VAR7 = FUN3(VAR4->VAR10, VAR6 *, VAR5);
        VAR9 = FUN4(VAR7->VAR12);
        if (VAR9 && FUN5(VAR9))
        {
            FUN6(VAR13, VAR7->VAR12, false, VAR7);
        }
        else
        {
            FUN7(VAR7->VAR12, VAR7->VAR14, VAR7->VAR15);
        }
    }
}