static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7;
    if (VAR6->VAR8)
    {
        int64_t VAR9 = FUN3(VAR6->VAR8);
        if (VAR9 < 0)
        {
            FUN4(VAR4, -VAR9, "");
            return;
        }
        VAR6->VAR10 = VAR9;
        VAR7 = FUN5(VAR6->VAR8, VAR11 | VAR12, VAR13, VAR4);
        if (VAR7 < 0)
        {
            return;
        }
    }
    else
    {
        VAR6->VAR10 = VAR14;
    }
    VAR6->VAR15 = FUN6(VAR6->VAR10);
    if ((VAR6->VAR10 < VAR16) || (VAR6->VAR10 > VAR17))
    {
        FUN7(VAR4, "", VAR16, VAR17);
        return;
    }
    if (VAR6->VAR8)
    {
        int VAR18 = FUN8(VAR6->VAR8, 0, VAR6->VAR15, VAR6->VAR10);
        if (VAR18 != VAR6->VAR10)
        {
            FUN7(VAR4, "");
            return;
        }
    }
    else if (VAR19 > 0)
    {
        FUN9(VAR6->VAR15, VAR16 / 4);
        FUN10(&VAR6->VAR15[VAR16 / 4], VAR6->VAR10 - VAR16 / 4);
    }
    FUN11(VAR20, "", VAR21);
    FUN11(VAR22, "", VAR23);
}