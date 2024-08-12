static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    if (VAR4->VAR8.VAR10 != NULL)
    {
        VAR4->VAR8.VAR10 = NULL;
        FUN3(VAR6->VAR7.VAR11.VAR12, &VAR4->VAR13);
    }
    if (VAR2 < 0)
    {
        if (FUN4(VAR4, -VAR2))
        {
            goto VAR14;
        }
    }
    VAR4->VAR15 += VAR4->VAR16;
    VAR4->VAR16 = 0;
    if (VAR4->VAR8.VAR17.VAR18 == VAR19)
    {
        FUN5(VAR4);
        return;
    }
    else
    {
        FUN6(&VAR4->VAR8, VAR20);
    }
VAR14:
    if (!VAR4->VAR8.VAR21)
    {
        FUN7(&VAR4->VAR8);
    }
}