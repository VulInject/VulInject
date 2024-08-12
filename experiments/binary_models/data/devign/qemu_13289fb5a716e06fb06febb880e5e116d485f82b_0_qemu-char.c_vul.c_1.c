void FUN1(const char *VAR1, const char *VAR2, bool VAR3, enum DataFormat VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    const VAR9 *VAR10;
    int VAR11;
    size_t VAR12;
    VAR8 = FUN2(VAR1);
    if (!VAR8)
    {
        FUN3(VAR6, "", VAR1);
        return;
        if (FUN4(VAR8, ""))
        {
            FUN3(VAR6, "", VAR1);
            return;
            if (VAR3 && (VAR4 == VAR13))
            {
                VAR10 = FUN5(VAR2, &VAR12);
            }
            else
            {
                VAR10 = (VAR9 *)VAR2;
                VAR12 = strlen(VAR2);
                VAR11 = FUN6(VAR8, VAR10, VAR12);
                if (VAR11 < 0)
                {
                    FUN3(VAR6, "", VAR1);
                    return