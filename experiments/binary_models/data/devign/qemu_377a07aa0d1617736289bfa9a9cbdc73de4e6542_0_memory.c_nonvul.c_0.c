static void FUN1(fprintf_function VAR1, void *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8 = &VAR6->VAR9[0];
    VAR10 *VAR11;
    int VAR12 = VAR6->VAR13;
    if (VAR12 <= 0)
    {
        FUN3(VAR2, VAR14 ""
                          "",
          VAR4->VAR15);
        FUN4(VAR6);
        return;
    }
    while (VAR12--)
    {
        VAR11 = VAR8->VAR11;
        if (VAR8->VAR16)
        {
            FUN3(VAR2, MTREE_INDENT VAR17 "" VAR17 "" VAR17 "", FUN5(VAR8->VAR18.VAR19), FUN5(VAR8->VAR18.VAR19) + FUN6(VAR8->VAR18.VAR20), VAR11->VAR21, VAR8->VAR22 ? "" : FUN7(VAR11), FUN8(VAR11), VAR8->VAR16);
        }
        else
        {
            FUN3(VAR2, MTREE_INDENT VAR17 "" VAR17 "", FUN5(VAR8->VAR18.VAR19), FUN5(VAR8->VAR18.VAR19) + FUN6(VAR8->VAR18.VAR20), VAR11->VAR21, VAR8->VAR22 ? "" : FUN7(VAR11), FUN8(VAR11));
        }
        VAR8++;
    }
    FUN4(VAR6);
}