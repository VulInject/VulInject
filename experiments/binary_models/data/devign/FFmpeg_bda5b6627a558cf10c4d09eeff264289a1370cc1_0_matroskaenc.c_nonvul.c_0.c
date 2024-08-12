static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int64_t VAR8, VAR9;
    int VAR10;
    if (VAR4->VAR11.VAR12 > 0)
    {
        VAR10 = FUN2(VAR2, &VAR4->VAR11);
        VAR4->VAR11.VAR12 = 0;
        if (VAR10 < 0)
        {
            FUN3(VAR2, VAR13, "", VAR10);
            return VAR10;
        }
    }
    if (VAR4->VAR14)
    {
        FUN4(VAR4->VAR14, VAR4->VAR15);
        FUN5(VAR2);
    }
    else if (VAR4->VAR16 != -1)
    {
        FUN4(VAR7, VAR4->VAR15);
    }
    if (VAR7->VAR17)
    {
        if (VAR4->VAR18->VAR19)
        {
            VAR9 = FUN6(VAR7, VAR4->VAR18, VAR2->VAR20);
            VAR10 = FUN7(VAR4->VAR21, VAR22, VAR9);
            if (VAR10 < 0)
                return VAR10;
        }
        FUN8(VAR7, VAR4->VAR21);
        FUN3(VAR2, VAR23, "" VAR24 "", VAR4->VAR25);
        VAR8 = FUN9(VAR7);
        FUN10(VAR7, VAR4->VAR26, VAR27);
        FUN11(VAR7, VAR28, VAR4->VAR25);
        FUN10(VAR7, VAR8, VAR27);
    }
    FUN4(VAR7, VAR4->VAR29);
    FUN12(VAR4->VAR30);
    FUN13(&VAR4->VAR18->VAR31);
    FUN13(&VAR4->VAR18);
    FUN14(&VAR4->VAR11);
    FUN15(VAR7);
    return 0;
}