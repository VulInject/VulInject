FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, bool VAR5, bool VAR6)
{
    int64_t VAR7, VAR8, VAR9, VAR10;
    if (VAR2->VAR11 == NULL)
    {
        return;
    }
    VAR7 = VAR3 / VAR2->VAR12;
    VAR8 = FUN2(VAR3 + VAR4, VAR2->VAR12) - VAR7;
    VAR9 = FUN2(VAR3, VAR2->VAR12);
    VAR10 = (VAR3 + VAR4) / VAR2->VAR12 - VAR9;
    if (VAR5)
    {
        FUN3(VAR2->VAR11, VAR7, VAR8);
    }
    else
    {
        FUN4(VAR2->VAR11, VAR9, VAR10);
    }
    if (VAR2->VAR13 == NULL)
    {
        return;
    }
    if (VAR6)
    {
        FUN3(VAR2->VAR13, VAR9, VAR10);
    }
    else
    {
        FUN4(VAR2->VAR13, VAR7, VAR8);
    }
}