static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7);
    VAR3 *VAR8 = NULL;
    int VAR9;
    VAR9 = FUN3(VAR6->VAR10, NULL, &VAR8);
    if (VAR9 < 0)
    {
        FUN4(VAR4, VAR8);
        return;
    }
    if (!VAR6->VAR11)
    {
        FUN5(VAR4, VAR12, FUN6(VAR2->VAR13));
        return;
    }
    if (VAR6->VAR14)
    {
        VAR15 *VAR16;
        VAR6->VAR17 = FUN7(VAR6->VAR14);
        if (!VAR6->VAR17)
        {
            FUN5(VAR4, "", VAR6->VAR14);
            return;
        }
        VAR16 = FUN8(VAR6->VAR17);
        FUN9(VAR16);
        FUN5(&VAR6->VAR18, "");
        FUN10(VAR6->VAR17, VAR6->VAR18);
        FUN11(VAR6->VAR17);
        FUN12(VAR16);
    }
    VAR6->VAR19 = true;
    FUN13(&VAR6->VAR7);
}