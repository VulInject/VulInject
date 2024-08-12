int FUN1(VAR1 *VAR2)
{
    if (VAR3)
    {
        if ((*VAR3)(&VAR4, VAR5))
            return -1;
    }
    VAR6++;
    if (VAR6 != 1)
    {
        FUN2(VAR2, VAR7, "");
        VAR6--;
        return -1;
    }
    if (VAR8 && VAR2->VAR9)
        FUN3(VAR2);
    if (VAR2->VAR10 && VAR2->VAR10->close)
        VAR2->VAR10->close(VAR2);
    FUN4(VAR2);
    FUN5(&VAR2->VAR11);
    VAR2->VAR10 = NULL;
    VAR6--;
    if (VAR3)
    {
        (*VAR3)(&VAR4, VAR12);
    }
    return 0;
}