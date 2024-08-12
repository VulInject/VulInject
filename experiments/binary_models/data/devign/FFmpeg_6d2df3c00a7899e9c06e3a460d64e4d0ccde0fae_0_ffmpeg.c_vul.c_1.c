static int FUN1(void)
{
    int VAR1, VAR2;
    if (VAR3 == 1)
        return 0;
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        VAR4 *VAR5 = VAR6[VAR1];
        if (VAR5->VAR7->VAR8 ? !VAR5->VAR7->VAR8->VAR9 : strcmp(VAR5->VAR7->VAR10->VAR11, ""))
            VAR5->VAR12 = 1;
        VAR2 = FUN2(&VAR5->VAR13, 8, sizeof(VAR14));
        if (VAR2 < 0)
            return VAR2;
        if ((VAR2 = FUN3(&VAR5->VAR15, NULL, VAR16, VAR5)))
            return FUN4(VAR2);
    }
    return 0;
}