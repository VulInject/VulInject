static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR3);
    int VAR8 = VAR9;
    if (VAR7)
    {
        return -VAR10;
    }
    VAR7 = FUN3(VAR3);
    if (!VAR7)
    {
        return -VAR11;
    }
    VAR8 = FUN4(VAR2, VAR7, VAR5);
    if (VAR8)
    {
        FUN5(VAR7);
        return VAR8;
    }
    return FUN6(VAR2, VAR7);
}