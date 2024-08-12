static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    VAR6 = &VAR2->VAR6[VAR3];
    VAR8 = &VAR2->VAR8[VAR4];
    VAR9 = FUN2(VAR8->VAR10);
    if (VAR9 <= VAR6->VAR11)
    {
        FUN3("", VAR12, VAR4, VAR3);
        return;
    }
    if (FUN4(&VAR6->VAR13, VAR4))
    {
        FUN3("", VAR12, VAR4, VAR3);
        return;
    }
    FUN5(&VAR8->VAR10, VAR14);
    FUN6(&VAR6->VAR13, VAR4);
    if (VAR9 < VAR6->VAR13.VAR9)
    {
        FUN3("", VAR12, VAR4, VAR6->VAR13.VAR15, VAR3);
        return;
    }
    FUN7(VAR2, &VAR6->VAR13);
    if (FUN7(VAR2, &VAR6->VAR16) != -1 && VAR9 <= VAR6->VAR16.VAR9)
    {
        FUN3("", VAR12, VAR4, VAR6->VAR16.VAR15, VAR3);
        return;
    }
    FUN3("", VAR3, VAR4);
    FUN8(VAR2, VAR3, VAR8);
}