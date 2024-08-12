void FUN1(const char *VAR1, const char *VAR2, bool VAR3, uint32_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    if (!VAR2 || VAR2[0] == '')
    {
        FUN2(VAR6, "");
        return;
    }
    VAR8 = FUN3(VAR1, VAR1, VAR6);
    if (!VAR8)
    {
        return;
    }
    if (VAR3)
    {
        if (VAR4 < 512 || !FUN4(VAR4))
        {
            FUN2(VAR6, ""
                             "");
            return;
        }
    }
    else
    {
        VAR4 = FUN5(VAR8);
    }
    FUN6(VAR8, VAR4, VAR2, VAR6);
}