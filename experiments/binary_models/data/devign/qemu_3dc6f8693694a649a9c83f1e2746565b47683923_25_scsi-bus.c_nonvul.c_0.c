void FUN1(VAR1 *VAR2, bool VAR3)
{
    Location VAR4;
    VAR5 *VAR6;
    int VAR7;
    FUN2(&VAR4);
    for (VAR7 = 0; VAR7 <= VAR2->VAR8->VAR9; VAR7++)
    {
        VAR6 = FUN3(VAR10, VAR2->VAR11, VAR7);
        if (VAR6 == NULL)
        {
            continue;
        }
        FUN4(VAR6->VAR12);
        if (VAR3)
        {
            if (FUN5(FUN6(VAR6)))
            {
                continue;
            }
            if (!VAR6->VAR13)
            {
                FUN7(""
                            "",
                            VAR2->VAR11, VAR7);
            }
        }
        FUN8(VAR2, FUN6(VAR6), VAR7, false, -1, NULL, &VAR14);
    }
    FUN9(&VAR4);
}