int FUN1(void *VAR1, hwaddr VAR2, hwaddr VAR3)
{
    int VAR4;
    int VAR5;
    VAR4 = FUN2(VAR1, VAR2, VAR3);
    if (VAR4 < 0)
    {
        fprintf(VAR6, "", FUN3(VAR4));
        return VAR4;
    }
    VAR4 = FUN4(VAR1, "", "", VAR2);
    if (VAR4 < 0)
    {
        fprintf(VAR6, "", FUN3(VAR4));
        return VAR4;
    }
    VAR4 = FUN4(VAR1, "", "", VAR2);
    if (VAR4 < 0)
    {
        fprintf(VAR6, "", FUN3(VAR4));
        return VAR4;
    }
    VAR4 = FUN4(VAR1, "", "", VAR3);
    if (VAR4 < 0)
    {
        fprintf(VAR6, "", FUN3(VAR4));
        return VAR4;
    }
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        struct VAR8 *VAR9 = &VAR10[VAR5];
        if (!VAR9->VAR11)
        {
            continue;
        }
        VAR4 = FUN4(VAR1, "", VAR9->VAR11, VAR5 + VAR12);
        if (VAR4 < 0)
        {
            fprintf(VAR6, "", VAR9->VAR11, FUN3(VAR4));
            return VAR4;
        }
    }
    return 0;
}