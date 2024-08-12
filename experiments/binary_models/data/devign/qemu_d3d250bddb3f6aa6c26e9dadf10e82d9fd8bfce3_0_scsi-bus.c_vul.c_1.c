static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR5, VAR7, VAR4->VAR2.VAR8);
    VAR3 *VAR9;
    int VAR10 = -1;
    if (VAR4->VAR11 > VAR6->VAR12->VAR13)
    {
        FUN4("", VAR4->VAR11);
        goto VAR14;
    }
    if (VAR4->VAR15 != -1 && VAR4->VAR15 > VAR6->VAR12->VAR16)
    {
        FUN4("", VAR4->VAR15);
        goto VAR14;
    }
    if (VAR4->VAR15 == -1)
    {
        int VAR15 = -1;
        if (VAR4->VAR17 == -1)
        {
            VAR4->VAR17 = 0;
        }
        do
        {
            VAR9 = FUN5(VAR6, VAR4->VAR11, ++VAR15, VAR4->VAR17);
        } while (VAR9 && VAR9->VAR17 == VAR4->VAR17 && VAR15 <= VAR6->VAR12->VAR16);
        if (VAR15 > VAR6->VAR12->VAR16)
        {
            FUN4("");
            goto VAR14;
        }
        VAR4->VAR15 = VAR15;
    }
    else if (VAR4->VAR17 == -1)
    {
        int VAR17 = -1;
        do
        {
            VAR9 = FUN5(VAR6, VAR4->VAR11, VAR4->VAR15, ++VAR17);
        } while (VAR9 && VAR9->VAR17 == VAR17 && VAR17 < VAR6->VAR12->VAR18);
        if (VAR17 > VAR6->VAR12->VAR18)
        {
            FUN4("");
            goto VAR14;
        }
        VAR4->VAR17 = VAR17;
    }
    else
    {
        VAR9 = FUN5(VAR6, VAR4->VAR11, VAR4->VAR15, VAR4->VAR17);
        if (VAR4->VAR17 == VAR9->VAR17 && VAR4 != VAR9)
        {
            FUN6(&VAR9->VAR2);
        }
    }
    FUN7(&VAR4->VAR19);
    VAR10 = FUN8(VAR4);
    if (VAR10 == 0)
    {
        VAR4->VAR20 = FUN9(VAR21, VAR4);
    }
VAR14:
    return VAR10;
}