static int FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    int VAR6;
    assert(VAR2->VAR7);
    if (FUN2(VAR2->VAR8, VAR2->VAR7, VAR5) < 0)
    {
        return -VAR9;
    }
    VAR6 = FUN3(VAR2, VAR10, VAR5, "", FUN4(VAR2->VAR11));
    if (VAR3 && !VAR6)
    {
        FUN5(VAR5, "", FUN4(VAR2->VAR11));
        return -VAR12;
    }
    return VAR6;
}