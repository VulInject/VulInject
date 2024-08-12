const VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, int VAR5)
{
    VAR1 *VAR6 = NULL;
    hwaddr VAR7 = VAR4 * VAR8;
    if (VAR3->VAR9.VAR10 == VAR11)
    {
        VAR6 = FUN2(VAR12);
        FUN3(VAR6, VAR4, VAR5);
    }
    else if (VAR3->VAR9.VAR10)
    {
        VAR6 = (VAR1 *)(VAR3->VAR9.VAR10 + VAR7);
    }
    else if (FUN4(VAR3))
    {
        hwaddr VAR13 = FUN4(VAR3);
        hwaddr VAR14 = VAR5 * VAR8;
        VAR6 = FUN5(FUN6(VAR3)->VAR15, VAR13 + VAR7, &VAR14, false);
        if (VAR14 < (VAR5 * VAR8))
        {
            FUN7("", VAR16);
        }
    }
    return VAR6;
}