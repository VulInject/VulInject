static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
    uint64_t VAR10;
    uint32_t VAR11;
    if (VAR2->VAR12 != sizeof(VAR10) + sizeof(VAR11))
    {
        FUN2(VAR9, ""
                         "");
        return -VAR13;
    }
    VAR10 = FUN3(&VAR4);
    VAR11 = FUN4(&VAR4);
    if (VAR10 < VAR5 || VAR11 > VAR7->VAR14 || VAR10 > VAR5 + VAR7->VAR14 - VAR11)
    {
        FUN2(VAR9, ""
                         "");
        return -VAR13;
    }
    FUN5(VAR7, VAR10 - VAR5, 0, VAR11);
    return 0;
}