static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR2->VAR9[VAR4->VAR10]->VAR11->VAR8;
    int VAR12 = !!(VAR4->VAR13 & VAR14);
    int VAR15;
    int64_t VAR16;
    VAR17 *VAR18;
    int VAR19;
    if (VAR6->VAR20[VAR4->VAR10].VAR21)
        VAR16 = VAR4->VAR22 - VAR6->VAR23;
    else
        VAR16 = VAR4->VAR24 - VAR6->VAR23;
    if (VAR2->VAR18->VAR25)
    {
        VAR18 = VAR2->VAR18;
        VAR15 = FUN2(VAR18) - VAR6->VAR26;
    }
    else
    {
        VAR18 = VAR6->VAR27;
        VAR15 = FUN2(VAR18);
    }
    if (VAR6->VAR26 && (VAR15 > VAR6->VAR28 || VAR16 > VAR6->VAR29 || (VAR8 == VAR30 && VAR12 && VAR15 > 4 * 1024)))
    {
        FUN3(VAR2, VAR31, "" VAR32 "" VAR32 "" VAR32 "", FUN2(VAR18), VAR4->VAR24, VAR4->VAR22);
        FUN4(VAR18, VAR6->VAR33);
        VAR6->VAR26 = 0;
        if (VAR6->VAR27)
            FUN5(VAR2);
    }
    if (VAR6->VAR34.VAR35 > 0)
    {
        VAR19 = FUN6(VAR2, &VAR6->VAR34);
        FUN7(&VAR6->VAR34);
        if (VAR19 < 0)
        {
            FUN3(VAR2, VAR36, "", VAR19);
            return VAR19;
        }
    }
    if (VAR8 == VAR37)
    {
        VAR6->VAR34 = *VAR4;
        if (VAR4->VAR38)
        {
            VAR6->VAR34.VAR38 = FUN8(VAR4->VAR38);
            VAR19 = VAR6->VAR34.VAR38 ? 0 : FUN9(VAR39);
        }
        else
            VAR19 = FUN10(&VAR6->VAR34);
    }
    else
        VAR19 = FUN6(VAR2, VAR4);
    return VAR19;
}