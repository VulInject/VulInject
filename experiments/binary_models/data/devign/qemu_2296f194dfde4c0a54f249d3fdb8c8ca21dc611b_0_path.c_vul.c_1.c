static struct VAR1 *FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4;
    if ((VAR4 = FUN2(VAR2->VAR5)) != NULL)
    {
        struct VAR6 *VAR6;
        while ((VAR6 = FUN3(VAR4)) != NULL)
        {
            if (!FUN4(VAR6->VAR7, "") && !FUN4(VAR6->VAR7, ""))
            {
                VAR2 = FUN5(VAR2, VAR6->VAR7);
            }
        }
        FUN6(VAR4);
    }
    return VAR2;
}