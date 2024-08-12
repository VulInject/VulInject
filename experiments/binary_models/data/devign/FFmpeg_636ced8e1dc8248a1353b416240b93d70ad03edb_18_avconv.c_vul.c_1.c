static int FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    AVPacket VAR7;
    int VAR8, VAR9, VAR10;
    VAR2 = FUN2();
    if (!VAR2)
    {
        if (FUN3())
        {
            FUN4();
            FUN5(10000);
            return FUN6(VAR11);
        }
        FUN7(NULL, VAR12, "");
        return VAR13;
    }
    VAR4 = VAR2->VAR14;
    VAR8 = FUN8(VAR2, &VAR7);
    if (VAR8 == FUN6(VAR11))
    {
        VAR2->VAR15 = 1;
        return VAR8;
    }
    if (VAR8 < 0)
    {
        if (VAR8 != VAR13)
        {
            FUN9(VAR4->VAR16, VAR8);
            if (VAR17)
                FUN10(1);
        }
        VAR2->VAR18 = 1;
        for (VAR9 = 0; VAR9 < VAR2->VAR19; VAR9++)
        {
            VAR6 = VAR20[VAR2->VAR21 + VAR9];
            if (VAR6->VAR22)
                FUN11(VAR6, NULL);
            for (VAR10 = 0; VAR10 < VAR23; VAR10++)
            {
                VAR24 *VAR25 = VAR26[VAR10];
                if (VAR25->VAR27 == VAR2->VAR21 + VAR9 && (VAR25->VAR28 || VAR25->VAR29->VAR30 == VAR31))
                    VAR25->VAR32 = 1;
            }
        }
        return FUN6(VAR11);
    }
    FUN4();
    if (VAR33)
    {
        FUN12(NULL, VAR34, &VAR7, VAR35, VAR4->VAR36[VAR7.VAR37]);
    }
    if (VAR7.VAR37 >= VAR2->VAR19)
        goto VAR38;
    VAR6 = VAR20[VAR2->VAR21 + VAR7.VAR37];
    if (VAR6->VAR39)
        goto VAR38;
    if (VAR7.VAR40 != VAR41)
        VAR7.VAR40 += FUN13(VAR2->VAR42, VAR43, VAR6->VAR44->VAR45);
    if (VAR7.VAR46 != VAR41)
        VAR7.VAR46 += FUN13(VAR2->VAR42, VAR43, VAR6->VAR44->VAR45);
    if (VAR7.VAR46 != VAR41)
        VAR7.VAR46 *= VAR6->VAR47;
    if (VAR7.VAR40 != VAR41)
        VAR7.VAR40 *= VAR6->VAR47;
    if (VAR7.VAR40 != VAR41 && VAR6->VAR48 != VAR41 && (VAR4->VAR49->VAR50 & VAR51))
    {
        int64_t VAR52 = FUN13(VAR7.VAR40, VAR6->VAR44->VAR45, VAR43);
        int64_t VAR53 = VAR52 - VAR6->VAR48;
        if ((FUN14(VAR53) > 1LL * VAR54 * VAR55 || VAR52 + 1 < VAR6->VAR56) && !VAR57)
        {
            VAR2->VAR42 -= VAR53;
            FUN7(NULL, VAR34, "" VAR58 "" VAR58 "", VAR53, VAR2->VAR42);
            VAR7.VAR40 -= FUN13(VAR53, VAR43, VAR6->VAR44->VAR45);
            if (VAR7.VAR46 != VAR41)
                VAR7.VAR46 -= FUN13(VAR53, VAR43, VAR6->VAR44->VAR45);
        }
    }
    VAR8 = FUN11(VAR6, &VAR7);
    if (VAR8 < 0)
    {
        FUN7(NULL, VAR59, "", VAR6->VAR60, VAR6->VAR44->VAR61);
        if (VAR17)
            FUN10(1);
    }
VAR38:
    FUN15(&VAR7);
    return 0;
}