int FUN1(const char *VAR1, int VAR2)
{
    VAR3 *VAR4;
    int VAR5 = FUN2(&VAR4, VAR1, VAR2, NULL);
    if (VAR5 < 0)
        return VAR5;
    if (VAR4->VAR6->VAR7)
    {
        VAR5 = VAR4->VAR6->FUN3(VAR4, VAR2);
    }
    else
    {
        VAR5 = FUN4(VAR4, NULL);
        if (VAR5 >= 0)
            VAR5 = VAR2;
    }
    FUN5(VAR4);
    return VAR5;
}