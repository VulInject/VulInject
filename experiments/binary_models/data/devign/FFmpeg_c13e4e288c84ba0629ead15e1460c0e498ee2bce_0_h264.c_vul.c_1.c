static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    int VAR6, VAR7;
    if (FUN2(VAR5->VAR8->VAR9, 16) == VAR5->VAR9 && FUN2(VAR5->VAR8->VAR10, 16 * (2 - VAR2->VAR11.VAR12)) == VAR5->VAR10 && !VAR2->VAR11.VAR13 && !VAR2->VAR11.VAR14 && (VAR5->VAR8->VAR9 != VAR5->VAR9 || VAR5->VAR8->VAR10 && VAR5->VAR10))
    {
        FUN3(VAR2->VAR5.VAR8, VAR15, "");
        VAR5->VAR8->VAR16 = VAR5->VAR9;
        VAR5->VAR8->VAR17 = VAR5->VAR10;
    }
    else
    {
        FUN4(VAR5->VAR8, VAR5->VAR9, VAR5->VAR10);
        VAR5->VAR8->VAR9 -= (2 >> VAR18) * FUN5(VAR2->VAR11.VAR13, (8 << VAR18) - 1);
        VAR5->VAR8->VAR10 -= (1 << VAR5->VAR19) * FUN5(VAR2->VAR11.VAR14, (16 >> VAR5->VAR19) - 1) * (2 - VAR2->VAR11.VAR12);
    }
    VAR5->VAR8->VAR20 = VAR2->VAR11.VAR21;
    FUN6(VAR5->VAR8->VAR20.VAR22);
    if (VAR2->VAR11.VAR23)
    {
        int64_t VAR22 = VAR2->VAR11.VAR24;
        if (VAR2->VAR25 < 44U)
            VAR22 *= 2;
        FUN7(&VAR5->VAR8->VAR26.VAR27, &VAR5->VAR8->VAR26.VAR22, VAR2->VAR11.VAR28, VAR22, 1 << 30);
    }
    VAR5->VAR8->VAR29 = FUN8(VAR5->VAR8->VAR30->VAR31, VAR5->VAR8->VAR32);
    if (VAR3)
    {
        FUN9(VAR2, 0);
        if ((VAR7 = FUN10(VAR5)) < 0)
        {
            FUN3(VAR2->VAR5.VAR8, VAR33, "");
            return VAR7;
        }
    }
    else
    {
        if ((VAR7 = FUN11(VAR5) < 0))
        {
            FUN3(VAR2->VAR5.VAR8, VAR33, "");
            return VAR7;
        }
    }
    VAR5->VAR34 = 0;
    VAR2->VAR35 = 1;
    FUN12(VAR2);
    if (FUN13(VAR2) < 0)
    {
        FUN3(VAR2->VAR5.VAR8, VAR33, "");
        return FUN14(VAR36);
    }
    if (!VAR37 || !(VAR5->VAR8->VAR38 & VAR39))
    {
        if (FUN15(VAR2) < 0)
        {
            FUN3(VAR2->VAR5.VAR8, VAR33, "");
            return -1;
        }
    }
    else
    {
        for (VAR6 = 1; VAR6 < VAR5->VAR40; VAR6++)
        {
            VAR1 *VAR41;
            VAR41 = VAR2->VAR42[VAR6] = FUN16(sizeof(VAR1));
            memcpy(VAR41, VAR2->VAR5.VAR42[VAR6], sizeof(VAR4));
            memset(&VAR41->VAR5 + 1, 0, sizeof(VAR1) - sizeof(VAR4));
            VAR41->VAR43 = VAR2->VAR43;
            VAR41->VAR11 = VAR2->VAR11;
            VAR41->VAR44 = VAR2->VAR44;
            VAR41->VAR45 = VAR2->VAR45;
            VAR41->VAR46 = VAR2->VAR46;
            FUN12(VAR41);
            FUN17(VAR41, VAR2, VAR6);
        }
        for (VAR6 = 0; VAR6 < VAR5->VAR40; VAR6++)
            if (FUN15(VAR2->VAR42[VAR6]) < 0)
            {
                FUN3(VAR2->VAR5.VAR8, VAR33, "");
                return -1;
            }
    }
    return 0;
}