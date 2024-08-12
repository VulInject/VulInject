static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8, *VAR9;
    if (!VAR5->VAR10)
        return;
    for (VAR9 = VAR5->VAR10; VAR9;)
    {
        VAR11 *VAR12 = VAR2->VAR13[VAR9->VAR14.VAR15]->VAR6;
        if (VAR12->VAR16 < 2 && !VAR3)
            break;
        FUN2(VAR2, &VAR9->VAR14, VAR3 && VAR12->VAR16 == 1 ? 4 : 0);
        VAR8 = VAR9->VAR8;
        FUN3(&VAR9);
        VAR9 = VAR8;
    }
    VAR5->VAR10 = VAR9;
}