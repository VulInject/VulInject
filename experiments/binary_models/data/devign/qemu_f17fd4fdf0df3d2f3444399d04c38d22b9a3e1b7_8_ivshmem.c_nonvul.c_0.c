static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (!FUN3())
    {
        FUN4(""
                     "");
    }
    if (!!FUN5(&VAR6->VAR7) + !!VAR6->VAR8 != 1)
    {
        FUN6(VAR4, "");
        return;
    }
    if (VAR6->VAR9 == NULL)
    {
        VAR6->VAR10 = 4 << 20;
    }
    else
    {
        int VAR11;
        int64_t VAR12;
        VAR11 = FUN7(VAR6->VAR9, NULL, &VAR12);
        if (VAR11 < 0 || (VAR13)VAR12 != VAR12 || !FUN8(VAR12))
        {
            FUN6(VAR4, "", VAR6->VAR9);
            return;
        }
        VAR6->VAR10 = VAR12;
    }
    if (VAR6->VAR14)
    {
        if (FUN9(VAR6->VAR14, "", 5) == 0)
        {
            VAR6->VAR15 = VAR16;
        }
        else if (FUN9(VAR6->VAR14, "", 7) == 0)
        {
            VAR6->VAR15 = VAR17;
        }
        else
        {
            FUN6(VAR4, "");
            return;
        }
    }
    else
    {
        VAR6->VAR15 = VAR18;
    }
    if (VAR6->VAR8)
    {
        FUN10(VAR6);
    }
    FUN11(VAR2->VAR19, 1);
    FUN12(VAR2, VAR4);
}