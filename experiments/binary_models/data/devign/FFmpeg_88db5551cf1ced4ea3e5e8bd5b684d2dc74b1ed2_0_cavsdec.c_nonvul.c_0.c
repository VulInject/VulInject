static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5 = -1;
    enum cavs_mb VAR6;
    if (!VAR4->VAR7)
    {
        VAR4->VAR8->VAR9 = VAR10;
        if (FUN2(VAR4) < 0)
            return -1;
        FUN3(VAR4->VAR11.VAR12, &VAR2->VAR13, VAR14);
    }
    FUN4(&VAR4->VAR15, 16);
    if (VAR2->VAR16 == VAR17)
    {
        VAR2->VAR18 = FUN5(&VAR4->VAR15, 2) + VAR19;
        if (VAR2->VAR18 > VAR20)
        {
            FUN6(VAR4->VAR8, VAR21, "");
            return -1;
        }
        if (!VAR2->VAR22[0].VAR23[0] || (!VAR2->VAR22[1].VAR23[0] && VAR2->VAR18 == VAR20))
            return -1;
    }
    else
    {
        VAR2->VAR18 = VAR19;
        if (FUN7(&VAR4->VAR15))
            FUN4(&VAR4->VAR15, 24);
    }
    if (VAR2->VAR24.VAR23[0])
        VAR4->VAR8->FUN8(VAR4->VAR8, (VAR25 *)&VAR2->VAR24);
    VAR4->VAR8->FUN9(VAR4->VAR8, (VAR25 *)&VAR2->VAR24);
    FUN10(VAR2);
    VAR2->VAR24.VAR26 = FUN5(&VAR4->VAR15, 8) * 2;
    if (VAR2->VAR18 != VAR20)
    {
        VAR2->VAR27[0] = (VAR2->VAR24.VAR26 - VAR2->VAR22[0].VAR26 + 512) % 512;
    }
    else
    {
        VAR2->VAR27[0] = (VAR2->VAR22[0].VAR26 - VAR2->VAR24.VAR26 + 512) % 512;
    }
    VAR2->VAR27[1] = (VAR2->VAR24.VAR26 - VAR2->VAR22[1].VAR26 + 512) % 512;
    VAR2->VAR28[0] = VAR2->VAR27[0] ? 512 / VAR2->VAR27[0] : 0;
    VAR2->VAR28[1] = VAR2->VAR27[1] ? 512 / VAR2->VAR27[1] : 0;
    if (VAR2->VAR18 == VAR20)
    {
        VAR2->VAR29 = VAR2->VAR27[0] * VAR2->VAR28[1];
    }
    else
    {
        VAR2->VAR30[0] = VAR2->VAR27[0] ? 16384 / VAR2->VAR27[0] : 0;
        VAR2->VAR30[1] = VAR2->VAR27[1] ? 16384 / VAR2->VAR27[1] : 0;
    }
    if (VAR4->VAR31)
        FUN11(&VAR4->VAR15);
    VAR2->VAR32 = FUN7(&VAR4->VAR15);
    VAR2->VAR33 = 1;
    if (!VAR2->VAR32)
        VAR2->VAR33 = FUN7(&VAR4->VAR15);
    if (!VAR2->VAR33 && VAR2->VAR16 == VAR17)
        FUN12(&VAR4->VAR15);
    FUN12(&VAR4->VAR15);
    FUN12(&VAR4->VAR15);
    VAR2->VAR34 = FUN7(&VAR4->VAR15);
    VAR2->VAR35 = FUN5(&VAR4->VAR15, 6);
    if (VAR2->VAR18 == VAR19)
    {
        if (!VAR2->VAR32 && !VAR2->VAR33)
            FUN12(&VAR4->VAR15);
        FUN4(&VAR4->VAR15, 4);
    }
    else
    {
        if (!(VAR2->VAR18 == VAR20 && VAR2->VAR33 == 1))
            VAR2->VAR36 = FUN7(&VAR4->VAR15);
        FUN4(&VAR4->VAR15, 4);
        VAR2->VAR37 = FUN7(&VAR4->VAR15);
    }
    VAR2->VAR38 = FUN7(&VAR4->VAR15);
    if (!VAR2->VAR38 && FUN7(&VAR4->VAR15))
    {
        VAR2->VAR39 = FUN13(&VAR4->VAR15);
        VAR2->VAR40 = FUN13(&VAR4->VAR15);
    }
    else
    {
        VAR2->VAR39 = VAR2->VAR40 = 0;
    }
    if (VAR2->VAR18 == VAR19)
    {
        do
        {
            FUN14(VAR2);
            FUN15(VAR2, 0);
        } while (FUN16(VAR2));
    }
    else if (VAR2->VAR18 == VAR41)
    {
        do
        {
            if (FUN14(VAR2))
                VAR5 = -1;
            if (VAR2->VAR37 && (VAR5 < 0))
                VAR5 = FUN11(&VAR4->VAR15);
            if (VAR2->VAR37 && VAR5--)
            {
                FUN17(VAR2, VAR42);
            }
            else
            {
                VAR6 = FUN11(&VAR4->VAR15) + VAR42 + VAR2->VAR37;
                if (VAR6 > VAR43)
                    FUN15(VAR2, VAR6 - VAR43 - 1);
                else
                    FUN17(VAR2, VAR6);
            }
        } while (FUN16(VAR2));
    }
    else
    {
        do
        {
            if (FUN14(VAR2))
                VAR5 = -1;
            if (VAR2->VAR37 && (VAR5 < 0))
                VAR5 = FUN11(&VAR4->VAR15);
            if (VAR2->VAR37 && VAR5--)
            {
                FUN18(VAR2, VAR44);
            }
            else
            {
                VAR6 = FUN11(&VAR4->VAR15) + VAR44 + VAR2->VAR37;
                if (VAR6 > VAR45)
                    FUN15(VAR2, VAR6 - VAR45 - 1);
                else
                    FUN18(VAR2, VAR6);
            }
        } while (FUN16(VAR2));
    }
    if (VAR2->VAR18 != VAR20)
    {
        if (VAR2->VAR22[1].VAR23[0])
            VAR4->VAR8->FUN8(VAR4->VAR8, (VAR25 *)&VAR2->VAR22[1]);
        VAR2->VAR22[1] = VAR2->VAR22[0];
        VAR2->VAR22[0] = VAR2->VAR24;
        memset(&VAR2->VAR24, 0, sizeof(VAR46));
    }
    return 0;
}