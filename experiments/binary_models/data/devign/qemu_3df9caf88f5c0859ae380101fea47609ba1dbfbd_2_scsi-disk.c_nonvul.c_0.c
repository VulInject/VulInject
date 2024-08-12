static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    if (VAR4->VAR8.VAR10 != NULL)
    {
        VAR4->VAR8.VAR10 = NULL;
        FUN3(FUN4(VAR6->VAR7.VAR11.VAR12), &VAR4->VAR13);
    }
    if (VAR4->VAR8.VAR14)
    {
        goto VAR15;
    }
    if (VAR2 < 0)
    {
        if (FUN5(VAR4, -VAR2))
        {
            goto VAR15;
        }
    }
    VAR4->VAR16 += VAR4->VAR17;
    VAR4->VAR17 = 0;
    if (VAR4->VAR8.VAR18.VAR19 == VAR20)
    {
        FUN6(VAR4);
        return;
    }
    else
    {
        FUN7(&VAR4->VAR8, VAR21);
    }
VAR15:
    FUN8(&VAR4->VAR8);
}