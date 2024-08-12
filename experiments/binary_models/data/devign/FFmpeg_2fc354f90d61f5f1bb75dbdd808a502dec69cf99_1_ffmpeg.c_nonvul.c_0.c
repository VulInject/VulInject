static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9->VAR10;
    AVPacket VAR11;
    int VAR12 = 0;
    FUN2(&VAR11);
    VAR11.VAR13 = NULL;
    VAR11.VAR14 = 0;
    if (!FUN3(VAR4))
        return;
    if (VAR6->VAR15 == VAR16 || VAR17 < 0)
        VAR6->VAR15 = VAR4->VAR18;
    VAR4->VAR18 = VAR6->VAR15 + VAR6->VAR19;
    FUN4(VAR11.VAR14 || !VAR11.VAR13);
    FUN5(NULL);
    if (FUN6(VAR8, &VAR11, VAR6, &VAR12) < 0)
    {
        FUN7(NULL, VAR20, "");
        FUN8(1);
    }
    FUN5("", VAR4->VAR21, VAR4->VAR22);
    if (VAR12)
    {
        if (VAR11.VAR15 != VAR16)
            VAR11.VAR15 = FUN9(VAR11.VAR15, VAR8->VAR23, VAR4->VAR9->VAR23);
        if (VAR11.VAR24 != VAR16)
            VAR11.VAR24 = FUN9(VAR11.VAR24, VAR8->VAR23, VAR4->VAR9->VAR23);
        if (VAR11.VAR25 > 0)
            VAR11.VAR25 = FUN9(VAR11.VAR25, VAR8->VAR23, VAR4->VAR9->VAR23);
        if (VAR26)
        {
            FUN7(NULL, VAR27, ""
                                      "",
                   FUN10(VAR11.VAR15), FUN11(VAR11.VAR15, &VAR4->VAR9->VAR23), FUN10(VAR11.VAR24), FUN11(VAR11.VAR24, &VAR4->VAR9->VAR23));
        }
        FUN12(VAR2, &VAR11, VAR4);
        VAR28 += VAR11.VAR14;
        FUN13(&VAR11);
    }
}