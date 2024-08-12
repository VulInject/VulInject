static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, size_t VAR5, VAR6 *VAR7)
{
    GIOStatus VAR8;
    OVERLAPPED VAR9 = {0};
    BOOL VAR10;
    DWORD VAR11;
    VAR9.VAR12 = FUN2(NULL, VAR13, VAR13, NULL);
    VAR10 = FUN3(VAR3->VAR14, VAR4, VAR5, &VAR11, &VAR9);
    if (!VAR10)
    {
        if (FUN4() == VAR15)
        {
            VAR10 = FUN5(VAR3->VAR14, &VAR9, &VAR11, VAR16);
            if (!VAR10)
            {
                if (!FUN4())
                {
                    VAR8 = VAR17;
                }
                else
                {
                    VAR8 = VAR18;
                }
                else
                {
                    VAR8 = VAR19;
                    *VAR7 = VAR11;
                }
                else { VAR8 = VAR18; }
                else
                {
                    VAR8 = VAR19;
                    *VAR7 = VAR11;
                    return VAR8;