static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7;
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    for (VAR8 = 0; VAR8 < VAR6->VAR13; VAR8++)
        if (VAR4->VAR14[VAR8].VAR15->VAR16 & VAR17)
        {
            return 0;
        }
    VAR9 = FUN2(&VAR7);
    if (VAR9 < 0)
        return VAR9;
    if (VAR4->VAR18 & VAR19)
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
    else if (VAR4->VAR18 == VAR20)
    {
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN5(VAR7, "", VAR21, 0, 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
        FUN4(VAR6, VAR7, "", "", 0);
    }
    else
    {
        FUN6(VAR7, VAR4, VAR6);
    }
    if (VAR6->VAR22)
        FUN7(VAR7, VAR6);
    if ((VAR10 = FUN8(VAR7, &VAR12)) > 0)
    {
        FUN9(VAR2, VAR10 + 8);
        FUN10(VAR2, "");
        FUN11(VAR2, VAR12, VAR10);
        FUN12(VAR12);
    }
    return 0;
}