void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7;
    if (!VAR4->VAR8)
    {
        return;
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR8->VAR9; VAR5++)
    {
        VAR7 = FUN3(VAR4->VAR8, VAR6 *, VAR5);
        FUN4(VAR7);
    }