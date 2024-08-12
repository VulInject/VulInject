static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = VAR4->VAR6;
    FUN2(VAR4, VAR4->VAR7.VAR8);
    FUN3(&VAR6->VAR9);
    if (VAR4->VAR10 == VAR11 && FUN4(&VAR6->VAR12, 0) == 0)
    {
        FUN5(&VAR6->VAR13, VAR4, VAR14);
        VAR4->VAR10 = VAR15;
        FUN6(VAR6->VAR16);
    }
    else
    {
        VAR6->VAR17++;
        while (VAR4->VAR10 != VAR15 && VAR4->VAR10 != VAR18)
        {
            FUN7(&VAR6->VAR19, &VAR6->VAR9);
        }
        VAR6->VAR17--;
    }
    FUN8(&VAR6->VAR9);
    FUN9(VAR6);
}