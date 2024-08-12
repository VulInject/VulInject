static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    if (VAR9->VAR11)
        FUN2(&VAR9->VAR11);
    VAR9->VAR11 = VAR9->VAR12;
    VAR9->VAR12 = VAR9->VAR13;
    VAR9->VAR13 = VAR4;
    if (!VAR9->VAR12 && !(VAR9->VAR12 = FUN3(VAR9->VAR13)))
        return FUN4(VAR14);
    if (!VAR9->VAR11)
        return 0;
    if (!VAR9->VAR15)
        VAR9->VAR15 = FUN5(VAR2->VAR16);
    if (VAR9->VAR15->VAR17[0].VAR18 / 8 == 1)
    {
        VAR9->VAR19 = (VAR20)VAR21;
        if (VAR22)
            FUN6(VAR9, 1);
    }
    FUN7(VAR6);
    return FUN8(VAR6->VAR23[0], FUN3(VAR9->VAR12));
}