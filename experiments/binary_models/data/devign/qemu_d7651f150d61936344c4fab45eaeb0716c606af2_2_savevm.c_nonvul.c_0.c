static int FUN1(VAR1 *VAR2)
{
    PostcopyState VAR3 = FUN2(VAR4);
    uint64_t VAR5, VAR6, VAR7;
    FUN3();
    if (VAR3 != VAR8)
    {
        FUN4("", VAR3);
        return -1;
    }
    if (!FUN5())
    {
        return 0;
    }
    if (!FUN6(VAR2))
    {
        FUN2(VAR8);
        return -1;
    }
    VAR5 = FUN7(VAR2->VAR9);
    VAR6 = FUN8();
    if (VAR5 != VAR6)
    {
        FUN4("" VAR10 "" VAR10 "", VAR5, VAR6);
        return -1;
    }
    VAR7 = FUN7(VAR2->VAR9);
    if (VAR7 != FUN9())
    {
        FUN4("", (int)VAR7, FUN9());
        return -1;
    }
    if (FUN10(VAR2))
    {
        return -1;
    }
    FUN2(VAR4);
    return 0;
}