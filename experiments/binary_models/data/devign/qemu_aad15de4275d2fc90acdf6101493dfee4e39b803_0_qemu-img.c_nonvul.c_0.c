static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int64_t VAR5, VAR6;
    int VAR7;
    int VAR8;
    VAR2->VAR9 = VAR2->VAR10 && !VAR2->VAR11 ? FUN2(FUN3(VAR2->VAR12)) : false;
    if (!VAR2->VAR9 && !VAR2->VAR11 && FUN4(FUN3(VAR2->VAR12)))
    {
        VAR7 = FUN5(FUN3(VAR2->VAR12), VAR13);
        if (VAR7 == 0)
        {
            VAR2->VAR9 = true;
        }
    }
    if (VAR2->VAR14)
    {
        if (VAR2->VAR15 <= 0 || VAR2->VAR15 > VAR2->VAR16)
        {
            FUN6("");
            VAR7 = -VAR17;
            goto VAR18;
        }
        VAR2->VAR16 = VAR2->VAR15;
    }
    VAR4 = FUN7(VAR2->VAR12, VAR2->VAR16 * VAR19);
    VAR2->VAR20 = 0;
    VAR5 = 0;
    while (VAR5 < VAR2->VAR21)
    {
        VAR8 = FUN8(VAR2, VAR5);
        if (VAR8 < 0)
        {
            VAR7 = VAR8;
            goto VAR18;
        }
        if (VAR2->VAR22 == VAR23 || (!VAR2->VAR10 && VAR2->VAR22 == VAR24))
        {
            VAR2->VAR20 += VAR8;
        }
        VAR5 += VAR8;
    }
    VAR2->VAR25 = 0;
    VAR2->VAR26 = 0;
    VAR2->VAR27 = 0;
    VAR5 = 0;
    VAR6 = 0;
    while (VAR5 < VAR2->VAR21)
    {
        VAR8 = FUN8(VAR2, VAR5);
        if (VAR8 < 0)
        {
            VAR7 = VAR8;
            goto VAR18;
        }
        if (VAR2->VAR22 == VAR23 || (!VAR2->VAR10 && VAR2->VAR22 == VAR24))
        {
            VAR6 += VAR8;
            FUN9(100.0 * VAR6 / VAR2->VAR20, 0);
        }
        if (VAR2->VAR22 == VAR23)
        {
            VAR7 = FUN10(VAR2, VAR5, VAR8, VAR4);
            if (VAR7 < 0)
            {
                FUN6("" VAR28 "", VAR5, strerror(-VAR7));
                goto VAR18;
            }
        }
        else if (!VAR2->VAR10 && VAR2->VAR22 == VAR24)
        {
            VAR8 = FUN11(VAR8, VAR2->VAR16);
            memset(VAR4, 0, VAR8 * VAR19);
            VAR2->VAR22 = VAR23;
        }
        VAR7 = FUN12(VAR2, VAR5, VAR8, VAR4);
        if (VAR7 < 0)
        {
            FUN6("" VAR28 "", VAR5, strerror(-VAR7));
            goto VAR18;
        }
        VAR5 += VAR8;
    }
    if (VAR2->VAR14)
    {
        VAR7 = FUN13(VAR2->VAR12, 0, NULL, 0);
        if (VAR7 < 0)
        {
            goto VAR18;
        }
    }
    VAR7 = 0;
VAR18:
    FUN14(VAR4);
    return VAR7;
}