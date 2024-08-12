int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    VAR4 = FUN2(VAR2, VAR3);
    if (VAR4 < 0)
        return VAR4;
    if (!VAR3->VAR5)
    {
        VAR4 = FUN3(&VAR2->VAR5, VAR3->VAR6);
        if (VAR4 < 0)
            goto VAR7;
        memcpy(VAR2->VAR5->VAR8, VAR3->VAR8, VAR3->VAR6);
    }
    else
    {
        VAR2->VAR5 = FUN4(VAR3->VAR5);
        if (!VAR2->VAR5)
        {
            VAR4 = FUN5(VAR9);
            goto VAR7;
        }
    }
    VAR2->VAR6 = VAR3->VAR6;
    VAR2->VAR8 = VAR2->VAR5->VAR8;
    return 0;
VAR7:
    FUN6(VAR2);
    return VAR4;
}