static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    AVPacket VAR7 = {0};
    int VAR8, VAR9, VAR10;
    FUN2(&VAR7);
    VAR6 = VAR4->VAR11;
    FUN3((VAR12 *)VAR13[0], VAR14, VAR6->VAR15);
    if (VAR16)
    {
        VAR10 = FUN4(FUN5(VAR16, VAR6->VAR17) + VAR14, VAR6->VAR17, VAR6->VAR17, VAR18);
        if (VAR10 > VAR19)
        {
            FUN6(VAR20[0]);
            VAR9 = FUN7(VAR20, &VAR21, VAR6->VAR15, VAR10, VAR6->VAR22, 0);
            if (VAR9 < 0)
                FUN8(1);
            VAR19 = VAR10;
            VAR23 = FUN9(NULL, VAR6->VAR15, VAR10, VAR6->VAR22, 0);
        }
        VAR9 = FUN10(VAR16, VAR20, VAR10, (const VAR24 **)VAR13, VAR14);
        if (VAR9 < 0)
        {
            fprintf(VAR25, "");
            FUN8(1);
        }
    }
    else
    {
        VAR10 = VAR14;
    }
    VAR26->VAR27 = VAR10;
    VAR26->VAR28 = FUN11(VAR29, (VAR30){1, VAR6->VAR17}, VAR6->VAR31);
    FUN12(VAR26, VAR6->VAR15, VAR6->VAR22, VAR20[0], VAR23, 0);
    VAR29 += VAR10;
    VAR9 = FUN13(VAR6, &VAR7, VAR26, &VAR8);
    if (VAR9 < 0)
    {
        fprintf(VAR25, "", FUN14(VAR9));
        FUN8(1);
    }
    if (!VAR8)
        return;
    VAR9 = FUN15(VAR2, &VAR6->VAR31, VAR4, &VAR7);
    if (VAR9 < 0)
    {
        fprintf(VAR25, "", FUN14(VAR9));
        FUN8(1);
    }
}