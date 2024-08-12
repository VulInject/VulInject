static struct VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    struct VAR1 *VAR6;
VAR7:
    VAR6 = FUN2(VAR5->VAR8.VAR9);
    if (!VAR6)
    {
        return NULL;
    }
    if (VAR3->VAR10 & VAR11)
    {
        VAR6->VAR12 = VAR13;
    }
    else if (VAR3->VAR10 & VAR14)
    {
        if (FUN3(VAR3, VAR6->VAR15))
        {
            goto VAR7;
        }
        VAR6->VAR12 = VAR13;
    }
    return VAR6;
}