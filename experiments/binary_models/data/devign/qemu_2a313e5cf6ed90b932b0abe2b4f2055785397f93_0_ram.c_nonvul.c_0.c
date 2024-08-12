VAR1 FUN1(int64_t VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int64_t VAR7;
    if (VAR2 != (VAR8)VAR2)
    {
        FUN2(VAR4, VAR9, "", "");
        return -1;
    }
    if (VAR2 > FUN3())
    {
        FUN2(VAR4, VAR9, "", "");
        return -1;
    }
    if (VAR2 == FUN4())
    {
        return VAR2;
    }
    FUN5();
    if (VAR10.VAR11 != NULL)
    {
        VAR6 = FUN6(VAR2, VAR12, VAR4);
        if (!VAR6)
        {
            VAR7 = -1;
            goto VAR13;
        }
        FUN7(VAR10.VAR11);
        VAR10.VAR11 = VAR6;
    }
    VAR7 = VAR2;
VAR13:
    FUN8();
    return VAR7;
}