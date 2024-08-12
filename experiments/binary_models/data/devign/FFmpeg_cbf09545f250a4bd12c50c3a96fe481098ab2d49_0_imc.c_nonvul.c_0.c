static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    for (VAR7 = 0; VAR7 < VAR11; VAR7++)
    {
        if (!VAR6->VAR12[VAR7])
            continue;
        if (VAR6->VAR13[VAR7] || VAR6->VAR14[VAR7])
        {
            for (VAR8 = VAR15[VAR7]; VAR8 < VAR15[VAR7 + 1]; VAR8++)
            {
                VAR9 = VAR6->VAR16[VAR8];
                VAR10 = 0;
                if (VAR9 && (!VAR6->VAR13[VAR7] || !VAR6->VAR17[VAR8]))
                {
                    if (FUN2(&VAR4->VAR18) + VAR9 > 512)
                    {
                        FUN3(VAR2, VAR19, ""
                                                      "",
                               VAR7, VAR8, VAR9);
                    }
                    VAR10 = FUN4(&VAR4->VAR18, VAR9);
                }
                VAR6->VAR20[VAR8] = VAR10;
            }
        }
    }
}