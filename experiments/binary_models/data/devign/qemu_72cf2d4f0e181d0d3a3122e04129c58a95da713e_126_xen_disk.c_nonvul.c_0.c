static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
    struct VAR1 *VAR1 = NULL;
    if (FUN2(&VAR3->VAR4))
    {
        if (VAR3->VAR5 >= VAR6)
            goto VAR7;
        VAR1 = FUN3(sizeof(*VAR1));
        VAR1->VAR3 = VAR3;
        VAR3->VAR5++;
        FUN4(&VAR1->VAR8, VAR9);
    }
    else
    {
        VAR1 = FUN5(&VAR3->VAR4);
        FUN6(VAR1, VAR10);
        FUN7(&VAR1->VAR8);
    }
    FUN8(&VAR3->VAR11, VAR1, VAR10);
    VAR3->VAR12++;
VAR7:
    return VAR1;
}