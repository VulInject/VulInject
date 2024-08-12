void FUN1(bool VAR1, const char *VAR2, VAR3 **VAR4)
{
    UINT VAR5 = VAR6;
    FUN2("", VAR2);
    if (!VAR1 || strcmp(VAR2, "") == 0)
    {
        VAR5 |= VAR7;
    }
    else if (strcmp(VAR2, "") == 0)
    {
        VAR5 |= VAR8;
    }
    else if (strcmp(VAR2, "") == 0)
    {
        VAR5 |= VAR9;
    }
    else
    {
        FUN3(VAR4, VAR10, "", "");
        return;
    }
    FUN4(VAR11, VAR4);
    if (FUN5(VAR4))
    {
        return;
    }
    if (!FUN6(VAR5, VAR12))
    {
        FUN2("", FUN7());
        FUN3(VAR4, VAR13);
    }
}