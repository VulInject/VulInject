static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = -1;
    enum cavs_mb VAR5;
    if (!VAR2->VAR6)
    {
        FUN2(VAR2->VAR7, VAR8, "");
        return VAR9;
    }
    FUN3(VAR2->VAR10.VAR11);
    FUN4(&VAR2->VAR12, 16);
    if (VAR2->VAR13 == VAR14)
    {
        VAR2->VAR10.VAR11->VAR15 = FUN5(&VAR2->VAR12, 2) + VAR16;
        if (VAR2->VAR10.VAR11->VAR15 > VAR17)
        {
            FUN2(VAR2->VAR7, VAR8, "");
            return VAR9;
        }
        if (!VAR2->VAR18[0].VAR11->VAR19[0] || (!VAR2->VAR18[1].VAR11->VAR19[0] && VAR2->VAR10.VAR11->VAR15 == VAR17))
            return VAR9;
    }
    else
    {
        VAR2->VAR10.VAR11->VAR15 = VAR16;
        if (FUN6(&VAR2->VAR12))
            FUN4(&VAR2->VAR12, 24);
        if (VAR2->VAR20 || !(FUN7(&VAR2->VAR12, 9) & 1))
            VAR2->VAR21 = 1;
        else if (FUN7(&VAR2->VAR12, 11) & 3)
            VAR2->VAR21 = 1;
        if (VAR2->VAR21 > 0)
            FUN4(&VAR2->VAR12, 1);
    }
    VAR3 = FUN8(VAR2->VAR7, VAR2->VAR10.VAR11, VAR2->VAR10.VAR11->VAR15 == VAR17 ? 0 : VAR22);
    if (VAR3 < 0)
        return VAR3;
    if (!VAR2->VAR23)
    {
        int VAR24 = FUN9(FUN10(VAR2->VAR10.VAR11->VAR25[0]) + 32, 32);
        VAR2->VAR23 = FUN11(VAR24 * 2 * 24);
        if (!VAR2->VAR23)
            return FUN12(VAR26);
    }
    if ((VAR3 = FUN13(VAR2)) < 0)
        return VAR3;
    VAR2->VAR10.VAR27 = FUN5(&VAR2->VAR12, 8) * 2;
    if (VAR2->VAR10.VAR11->VAR15 != VAR17)
    {
        VAR2->VAR28[0] = (VAR2->VAR10.VAR27 - VAR2->VAR18[0].VAR27) & 511;
    }
    else
    {
        VAR2->VAR28[0] = (VAR2->VAR18[0].VAR27 - VAR2->VAR10.VAR27) & 511;
    }
    VAR2->VAR28[1] = (VAR2->VAR10.VAR27 - VAR2->VAR18[1].VAR27) & 511;
    VAR2->VAR29[0] = VAR2->VAR28[0] ? 512 / VAR2->VAR28[0] : 0;
    VAR2->VAR29[1] = VAR2->VAR28[1] ? 512 / VAR2->VAR28[1] : 0;
    if (VAR2->VAR10.VAR11->VAR15 == VAR17)
    {
        VAR2->VAR30 = VAR2->VAR28[0] * VAR2->VAR29[1];
        if (FUN10(VAR2->VAR30) > 32768)
        {
            FUN2(VAR2->VAR7, VAR8, "", VAR2->VAR30);
            return VAR9;
        }
    }
    else
    {
        VAR2->VAR31[0] = VAR2->VAR28[0] ? 16384 / VAR2->VAR28[0] : 0;
        VAR2->VAR31[1] = VAR2->VAR28[1] ? 16384 / VAR2->VAR28[1] : 0;
    }
    if (VAR2->VAR20)
        FUN14(&VAR2->VAR12);
    VAR2->VAR32 = FUN6(&VAR2->VAR12);
    VAR2->VAR33 = 1;
    if (!VAR2->VAR32)
        VAR2->VAR33 = FUN6(&VAR2->VAR12);
    if (!VAR2->VAR33 && VAR2->VAR13 == VAR14)
        FUN15(&VAR2->VAR12);
    FUN15(&VAR2->VAR12);
    FUN15(&VAR2->VAR12);
    VAR2->VAR34 = VAR2->VAR35 = FUN6(&VAR2->VAR12);
    VAR2->VAR36 = FUN5(&VAR2->VAR12, 6);
    if (VAR2->VAR10.VAR11->VAR15 == VAR16)
    {
        if (!VAR2->VAR32 && !VAR2->VAR33)
            FUN15(&VAR2->VAR12);
        FUN4(&VAR2->VAR12, 4);
    }
    else
    {
        if (!(VAR2->VAR10.VAR11->VAR15 == VAR17 && VAR2->VAR33 == 1))
            VAR2->VAR37 = FUN6(&VAR2->VAR12);
        FUN4(&VAR2->VAR12, 4);
        VAR2->VAR38 = FUN6(&VAR2->VAR12);
    }
    VAR2->VAR39 = FUN6(&VAR2->VAR12);
    if (!VAR2->VAR39 && FUN6(&VAR2->VAR12))
    {
        VAR2->VAR40 = FUN16(&VAR2->VAR12);
        VAR2->VAR41 = FUN16(&VAR2->VAR12);
    }
    else
    {
        VAR2->VAR40 = VAR2->VAR41 = 0;
    }
    if (VAR2->VAR10.VAR11->VAR15 == VAR16)
    {
        do
        {
            FUN17(VAR2);
            FUN18(VAR2, 0);
        } while (FUN19(VAR2));
    }
    else if (VAR2->VAR10.VAR11->VAR15 == VAR42)
    {
        do
        {
            if (FUN17(VAR2))
                VAR4 = -1;
            if (VAR2->VAR38 && (VAR4 < 0))
                VAR4 = FUN14(&VAR2->VAR12);
            if (VAR2->VAR38 && VAR4--)
            {
                FUN20(VAR2, VAR43);
            }
            else
            {
                VAR5 = FUN14(&VAR2->VAR12) + VAR43 + VAR2->VAR38;
                if (VAR5 > VAR44)
                    FUN18(VAR2, VAR5 - VAR44 - 1);
                else
                    FUN20(VAR2, VAR5);
            }
        } while (FUN19(VAR2));
    }
    else
    {
        do
        {
            if (FUN17(VAR2))
                VAR4 = -1;
            if (VAR2->VAR38 && (VAR4 < 0))
                VAR4 = FUN14(&VAR2->VAR12);
            if (VAR2->VAR38 && VAR4--)
            {
                FUN21(VAR2, VAR45);
            }
            else
            {
                VAR5 = FUN14(&VAR2->VAR12) + VAR45 + VAR2->VAR38;
                if (VAR5 > VAR46)
                    FUN18(VAR2, VAR5 - VAR46 - 1);
                else
                    FUN21(VAR2, VAR5);
            }
        } while (FUN19(VAR2));
    }
    FUN22();
    if (VAR2->VAR10.VAR11->VAR15 != VAR17)
    {
        FUN3(VAR2->VAR18[1].VAR11);
        FUN23(VAR47, VAR2->VAR10, VAR2->VAR18[1]);
        FUN23(VAR47, VAR2->VAR18[0], VAR2->VAR18[1]);
    }
    return 0;
}