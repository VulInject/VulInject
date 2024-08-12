static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    if (VAR6->VAR12 & VAR13)
        return 0;
    VAR8 = FUN2(&VAR7);
    if (VAR8 < 0)
        return VAR8;
    if (VAR4->VAR14 & VAR15)
    {
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
        FUN3(VAR7, VAR6, "", "");
    }
    else if (VAR4->VAR14 == VAR16)
    {
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
    }
    else
    {
        FUN5(VAR7, VAR4, VAR6);
    }
    if (VAR6->VAR17 && !(VAR4->VAR12 & VAR18))
        FUN6(VAR7, VAR6);
    if ((VAR9 = FUN7(VAR7, &VAR11)) > 0)
    {
        FUN8(VAR2, VAR9 + 8);
        FUN9(VAR2, "");
        FUN10(VAR2, VAR11, VAR9);
    }
    FUN11(VAR11);
    return 0;
}