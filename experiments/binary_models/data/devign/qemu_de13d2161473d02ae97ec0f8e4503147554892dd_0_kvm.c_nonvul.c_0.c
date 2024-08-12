static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    struct VAR7 *VAR8 = VAR6->VAR7;
    int VAR9;
    FUN3(VAR6);
    VAR9 = FUN4(VAR4, VAR4->VAR10[1], VAR8->VAR11.VAR12);
    if (VAR9 >= 0)
    {
        FUN5(VAR2, VAR9);
        VAR9 = 0;
    }
    else if (VAR9 < -1)
    {
        if (VAR8->VAR11.VAR13)
        {
            FUN6(VAR8->VAR11.VAR14, VAR8->VAR11.VAR15, VAR8->VAR11.VAR16, VAR8->VAR11.VAR17);
        }
        VAR9 = 0;
    }
    return VAR9;
}