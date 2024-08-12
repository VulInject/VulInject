static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6->VAR7; VAR5++)
    {
        VAR8 *VAR9 = VAR10[VAR2->VAR11 + VAR5];
        if (!VAR9->VAR12)
            return 0;
    }
    VAR2->VAR6->VAR13 = VAR14;
    VAR4 = FUN2(VAR2->VAR6, &VAR2->VAR15);
    if (VAR4 < 0)
    {
        FUN3(NULL, VAR16, ""
                                   "",
               VAR3, FUN4(VAR4));
        return VAR4;
    }
    VAR2->VAR17 = 1;
    FUN5(VAR2->VAR6, VAR3, VAR2->VAR6->VAR18, 1);
    if (VAR19 || VAR20)
        FUN6();
    for (VAR5 = 0; VAR5 < VAR2->VAR6->VAR7; VAR5++)
    {
        VAR8 *VAR9 = VAR10[VAR2->VAR11 + VAR5];
        if (!FUN7(VAR9->VAR21))
            VAR9->VAR22 = VAR9->VAR23->VAR24;
        while (FUN7(VAR9->VAR21))
        {
            AVPacket VAR25;
            FUN8(VAR9->VAR21, &VAR25, sizeof(VAR25), NULL);
            FUN9(VAR2, &VAR25, VAR9, 1);
        }
    }
    return 0;
}