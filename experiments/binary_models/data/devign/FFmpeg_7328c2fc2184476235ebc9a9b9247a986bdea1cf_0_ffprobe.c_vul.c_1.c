static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    AVPacket VAR5;
    AVFrame VAR6;
    int VAR7 = 0;
    FUN2(&VAR5);
    while (!FUN3(VAR4, &VAR5))
    {
        if (VAR8)
            FUN4(VAR2, VAR4, &VAR5, VAR7++);
        if (VAR9 && FUN5(VAR4, &VAR6, &VAR5))
        {
            FUN6(VAR2, &VAR6, VAR4->VAR10[VAR5.VAR11]);
            FUN7(&VAR5);
        }
    }
    FUN2(&VAR5);
    VAR5.VAR12 = NULL;
    VAR5.VAR13 = 0;
    for (VAR7 = 0; VAR7 < VAR4->VAR14; VAR7++)
    {
        VAR5.VAR11 = VAR7;
        while (FUN5(VAR4, &VAR6, &VAR5))
            FUN6(VAR2, &VAR6, VAR4->VAR10[VAR5.VAR11]);
    }
}