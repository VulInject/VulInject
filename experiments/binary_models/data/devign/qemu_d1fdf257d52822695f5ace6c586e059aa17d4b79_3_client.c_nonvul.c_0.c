static int FUN1(VAR1 *VAR2, const char *VAR3, bool *VAR4, VAR5 **VAR6)
{
    nbd_opt_reply VAR7;
    uint32_t VAR8;
    uint32_t VAR9;
    char VAR10[VAR11 + 1];
    int VAR12;
    if (FUN2(VAR2, VAR13, &VAR7, VAR6) < 0)
    {
        return -1;
    }
    VAR12 = FUN3(VAR2, &VAR7, VAR6);
    if (VAR12 <= 0)
    {
        *VAR4 = true;
        return VAR12;
    }
    VAR8 = VAR7.VAR14;
    if (VAR7.VAR15 == VAR16)
    {
        if (VAR8 != 0)
        {
            FUN4(VAR6, "");
            FUN5(VAR2);
            return -1;
        }
        return 0;
    }
    else if (VAR7.VAR15 != VAR17)
    {
        FUN4(VAR6, "" VAR18 "", VAR7.VAR15, VAR17);
        FUN5(VAR2);
        return -1;
    }
    if (VAR8 < sizeof(VAR9) || VAR8 > VAR19)
    {
        FUN4(VAR6, "" VAR20, VAR8);
        FUN5(VAR2);
        return -1;
    }
    if (FUN6(VAR2, &VAR9, sizeof(VAR9), VAR6) < 0)
    {
        FUN7(VAR6, "");
        FUN5(VAR2);
        return -1;
    }
    VAR9 = FUN8(VAR9);
    VAR8 -= sizeof(VAR9);
    if (VAR8 < VAR9)
    {
        FUN4(VAR6, "");
        FUN5(VAR2);
        return -1;
    }
    if (VAR9 != strlen(VAR3))
    {
        if (FUN9(VAR2, VAR8, VAR6) < 0)
        {
            FUN7(VAR6, "");
            FUN5(VAR2);
            return -1;
        }
        return 1;
    }
    assert(VAR9 < sizeof(VAR10));
    if (FUN6(VAR2, VAR10, VAR9, VAR6) < 0)
    {
        FUN7(VAR6, "");
        FUN5(VAR2);
        return -1;
    }
    VAR10[VAR9] = '';
    VAR8 -= VAR9;
    if (FUN9(VAR2, VAR8, VAR6) < 0)
    {
        FUN7(VAR6, "");
        FUN5(VAR2);
        return -1;
    }
    if (!strcmp(VAR10, VAR3))
    {
        *VAR4 = true;
    }
    return 1;
}