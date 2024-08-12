static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    AVPacket VAR10;
    int VAR11 = 0;
    FUN2(&VAR10);
    VAR10.VAR12 = NULL;
    VAR10.VAR13 = 0;
    if (!FUN3(VAR4))
        return;
    if (VAR6->VAR14 == VAR15 || VAR16 < 0)
        VAR6->VAR14 = VAR4->VAR17;
    VAR4->VAR17 = VAR6->VAR14 + VAR6->VAR18;
    VAR4->VAR19 += VAR6->VAR18;
    VAR4->VAR20++;
    FUN4(VAR10.VAR13 || !VAR10.VAR12);
    FUN5(NULL);
    if (VAR21)
    {
        FUN6(NULL, VAR22, ""
                                  "",
               FUN7(VAR6->VAR14), FUN8(VAR6->VAR14, &VAR8->VAR23), VAR8->VAR23.VAR24, VAR8->VAR23.VAR25);
    }
    if (FUN9(VAR8, &VAR10, VAR6, &VAR11) < 0)
    {
        FUN6(NULL, VAR26, "");
        FUN10(1);
    }
    FUN5("", VAR4->VAR27, VAR4->VAR28);
    if (VAR11)
    {
        FUN11(&VAR10, VAR8->VAR23, VAR4->VAR29->VAR23);
        if (VAR21)
        {
            FUN6(NULL, VAR22, ""
                                      "",
                   FUN7(VAR10.VAR14), FUN8(VAR10.VAR14, &VAR4->VAR29->VAR23), FUN7(VAR10.VAR30), FUN8(VAR10.VAR30, &VAR4->VAR29->VAR23));
        }
        FUN12(VAR2, &VAR10, VAR4);
    }
}