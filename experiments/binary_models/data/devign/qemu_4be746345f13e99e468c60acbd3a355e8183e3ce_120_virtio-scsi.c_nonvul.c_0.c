bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR10 = FUN2(VAR4, sizeof(VAR11) + VAR6->VAR12, sizeof(VAR13) + VAR6->VAR14);
    if (VAR10 < 0)
    {
        if (VAR10 == -VAR15)
        {
            FUN3(VAR4);
        }
        else
        {
            FUN4();
        }
        return false;
    }
    VAR9 = FUN5(VAR2, VAR4->VAR4.VAR16.VAR17);
    if (!VAR9)
    {
        VAR4->VAR18.VAR16.VAR19 = VAR20;
        FUN6(VAR4);
        return false;
    }
    if (VAR2->VAR21 && FUN7(VAR9->VAR22.VAR23) != VAR2->VAR24)
    {
        FUN8(VAR2->VAR24);
        FUN9(VAR9->VAR22.VAR23, VAR2->VAR24);
        FUN10(VAR2->VAR24);
    }
    VAR4->VAR25 = FUN11(VAR9, VAR4->VAR4.VAR16.VAR26, FUN12(VAR4->VAR4.VAR16.VAR17), VAR4->VAR4.VAR27, VAR4);
    if (VAR4->VAR25->VAR16.VAR28 != VAR29 && (VAR4->VAR25->VAR16.VAR28 != VAR4->VAR28 || VAR4->VAR25->VAR16.VAR30 > VAR4->VAR31.VAR32))
    {
        VAR4->VAR18.VAR16.VAR19 = VAR33;
        FUN6(VAR4);
        return false;
    }
    FUN13(VAR4->VAR25);
    FUN14(VAR9->VAR22.VAR23);
    return true;
}