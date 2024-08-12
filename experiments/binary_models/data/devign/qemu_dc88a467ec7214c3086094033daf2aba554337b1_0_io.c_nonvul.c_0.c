FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, bool VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9 = -VAR10;
    FUN2(VAR2);
    if (!VAR8)
    {
        VAR9 = -VAR11;
    }
    else if (VAR8->VAR12)
    {
        if (VAR6)
        {
            VAR9 = VAR8->FUN3(VAR2, VAR4, VAR5);
        }
        else
        {
            VAR9 = VAR8->FUN4(VAR2, VAR4, VAR5);
        }
    }
    else if (VAR2->VAR13)
    {
        VAR9 = FUN1(VAR2->VAR13->VAR2, VAR4, VAR5, VAR6);
    }
    FUN5(VAR2);
    return VAR9;
}