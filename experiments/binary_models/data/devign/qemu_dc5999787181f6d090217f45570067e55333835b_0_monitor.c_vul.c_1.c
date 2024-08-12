FUN1(QAPIEvent VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    assert(VAR1 < VAR10);
    VAR7 = &VAR11[VAR1];
    FUN2(VAR1, VAR3, VAR7->VAR12);
    FUN3(&VAR13);
    if (!VAR7->VAR12)
    {
        FUN4(VAR1, VAR3);
    }
    else
    {
        VAR2 *VAR14 = FUN5(FUN6(VAR3, ""));
        MonitorQAPIEventState VAR15 = {.VAR1 = VAR1, .VAR14 = VAR14};
        VAR9 = FUN7(VAR16, &VAR15);
        assert(!VAR9 || FUN8(VAR9->VAR17));
        if (VAR9)
        {
            FUN9(VAR9->VAR3);
            VAR9->VAR3 = VAR3;
            FUN10(VAR9->VAR3);
        }
        else
        {
            int64_t VAR18 = FUN11(VAR19);
            FUN4(VAR1, VAR3);
            VAR9 = FUN12(VAR8, 1);
            VAR9->VAR1 = VAR1;
            VAR9->VAR14 = VAR14;
            FUN10(VAR9->VAR14);
            VAR9->VAR3 = NULL;
            VAR9->VAR17 = FUN13(VAR19, VAR20, VAR9);
            FUN14(VAR16, VAR9);
            FUN15(VAR9->VAR17, VAR18 + VAR7->VAR12);
        }
    }
    FUN16(&VAR13);
}