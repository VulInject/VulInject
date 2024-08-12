static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    int VAR13 = FUN2(VAR2->VAR14);
    int VAR15, VAR16;
    VAR4->VAR17.VAR18 = VAR4->VAR18;
    if (VAR2->VAR19 != VAR20 && VAR2->VAR19 != VAR21 && VAR2->VAR19 != VAR22)
    {
        if (VAR13)
        {
            VAR4->VAR18->VAR23 = VAR2->VAR23 + 2 * VAR24;
            VAR4->VAR18->VAR25 = VAR2->VAR25 + 2 * VAR24;
        }
        VAR15 = FUN3(VAR2, &VAR4->VAR17, VAR4->VAR26 ? VAR27 : 0);
    }
    else
    {
        VAR4->VAR18->VAR23 = VAR2->VAR23;
        VAR4->VAR18->VAR25 = VAR2->VAR25;
        VAR4->VAR18->VAR28 = VAR2->VAR29;
        VAR15 = FUN4(VAR2, VAR4->VAR18, 0);
    }
    if (VAR15 < 0 || !VAR4->VAR18->VAR30[0])
    {
        FUN5(VAR2, VAR31, "", VAR15, VAR4->VAR18->VAR32[0]);
        return -1;
    }
    if (VAR13)
    {
        int VAR33;
        for (VAR33 = 0; VAR4->VAR18->VAR32[VAR33]; VAR33++)
        {
            int VAR34 = (VAR24 >> (VAR33 ? VAR10 : 0)) * VAR4->VAR18->VAR11[VAR33] + (VAR24 >> (VAR33 ? VAR9 : 0));
            VAR4->VAR18->VAR32[VAR33] += VAR34;
        }
        VAR4->VAR18->VAR23 = VAR2->VAR23;
        VAR4->VAR18->VAR25 = VAR2->VAR25;
    }
    if (VAR2->VAR35)
    {
        assert(!VAR4->VAR36);
        if (VAR2->VAR35->VAR37)
        {
            VAR4->VAR38 = FUN6(VAR2->VAR35->VAR37);
            if (!VAR4->VAR38)
            {
                FUN5(VAR2, VAR31, "");
                return -1;
            }
            VAR4->VAR36 = VAR4->VAR38->VAR32;
        }
    }
    if (VAR11 && (VAR11 != VAR4->VAR18->VAR11[0] || VAR12 != VAR4->VAR18->VAR11[1]))
    {
        FUN5(VAR2, VAR31, "");
        FUN7(VAR2, VAR4);
        return -1;
    }
    if (FUN8(VAR4->VAR18->VAR28) > 2 && VAR4->VAR18->VAR11[1] != VAR4->VAR18->VAR11[2])
    {
        FUN5(VAR2, VAR31, "");
        FUN7(VAR2, VAR4);
        return -1;
    }
    if (!VAR8->VAR39 && (VAR16 = FUN9(VAR2, VAR6, VAR8, VAR4->VAR18->VAR11[0])) < 0)
    {
        FUN5(VAR2, VAR31, "");
        FUN7(VAR2, VAR4);
        return VAR16;
    }
    return 0;
}