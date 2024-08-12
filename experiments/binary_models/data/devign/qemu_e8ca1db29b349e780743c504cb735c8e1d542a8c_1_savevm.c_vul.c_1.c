static int FUN1(VAR1 *VAR2)
{
    PostcopyState VAR3 = FUN2(VAR4);
    uint64_t VAR5, VAR6;
    FUN3();
    if (VAR3 != VAR7)
    {
        FUN4("", VAR3);
        return -1;
    }
    if (!FUN5())
    {
        FUN2(VAR7);
        return -1;
    }
    VAR5 = FUN6(VAR2->VAR8);
    if (VAR5 != FUN7())
    {
        FUN4("", (int)VAR5, FUN7());
        return -1;
    }
    VAR6 = FUN6(VAR2->VAR8);
    if (VAR6 != (1ul << FUN8()))
    {
        FUN4("", (int)VAR6, 1 << FUN8());
        return -1;
    }
    if (FUN9(VAR2))
    {
        return -1;
    }
    FUN2(VAR4);
    return 0;
}