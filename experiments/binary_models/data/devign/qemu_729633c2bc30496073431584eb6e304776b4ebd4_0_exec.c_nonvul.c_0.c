static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, bool VAR5)
{
    VAR1 *VAR6 = FUN2(&VAR3->VAR7);
    VAR8 *VAR9;
    bool update;
    if (VAR6 && VAR6 != &VAR3->VAR10.VAR11[VAR12] && FUN3(VAR6, VAR4))
    {
        update = false;
    }
    else
    {
        VAR6 = FUN4(VAR3->VAR13, VAR4, VAR3->VAR10.VAR14, VAR3->VAR10.VAR11);
        update = true;
    }
    if (VAR5 && VAR6->VAR15->VAR9)
    {
        VAR9 = FUN5(VAR6->VAR15, VAR8, VAR16);
        VAR6 = &VAR3->VAR10.VAR11[VAR9->VAR17[FUN6(VAR4)]];
    }
    if (update)
    {
        FUN7(&VAR3->VAR7, VAR6);
    }
    return VAR6;
}