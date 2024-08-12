static int FUN1(void *VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR5->VAR10[VAR3->VAR11]->VAR12;
    int VAR13;
    while (VAR7)
    {
        AVPacket VAR14 = *VAR3;
        VAR13 = FUN2(VAR7, VAR9, NULL, &VAR14.VAR15, &VAR14.VAR16, VAR3->VAR15, VAR3->VAR16, VAR3->VAR17 & VAR18);
        if (VAR13 == 0 && VAR14.VAR15 != VAR3->VAR15 && VAR14.VAR19)
        {
            if ((VAR13 = FUN3(&VAR14, VAR3)) < 0)
                break;
            VAR13 = 1;
        }
        if (VAR13 > 0)
        {
            FUN4(VAR3);
            VAR14.VAR20 = FUN5(VAR14.VAR15, VAR14.VAR16, VAR21, NULL, 0);
            if (!VAR14.VAR20)
                break;
        }
        *VAR3 = VAR14;
        VAR7 = VAR7->VAR22;
    }
    if (VAR13 < 0)
    {
        FUN6(VAR1, VAR23, "", VAR7->VAR24->VAR25, VAR3->VAR11, VAR5->VAR26, FUN7(VAR9->VAR27));
    }
    return VAR13;
}