static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    bool VAR9;
    FUN3("", VAR4->VAR10);
    if (VAR4->VAR10 == 0)
    {
        FUN4(&VAR4->VAR2, VAR11);
        return;
    }
    assert(VAR4->VAR2.VAR12 == NULL);
    FUN5(&VAR4->VAR2);
    if (VAR4->VAR2.VAR13.VAR14 == VAR15)
    {
        FUN3("");
        FUN6(VAR4, -VAR16);
        return;
    }
    if (!FUN7(VAR2->VAR8->VAR17.VAR18))
    {
        FUN6(VAR4, -VAR19);
        return;
    }
    VAR9 = !VAR4->VAR20;
    VAR4->VAR20 = true;
    if (VAR9 && VAR4->VAR21)
    {
        FUN8(FUN9(VAR6->VAR7.VAR17.VAR18), &VAR4->VAR22, 0, VAR23);
        VAR4->VAR2.VAR12 = FUN10(VAR6->VAR7.VAR17.VAR18, VAR24, VAR4);
    }
    else
    {
        FUN11(VAR4, 0);
    }
}