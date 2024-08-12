static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    if (VAR5 != 16)
    {
        FUN2(VAR7, "", VAR5);
        return -1;
    }
    FUN3(VAR9->VAR11.VAR12.VAR4);
    VAR9->VAR11.VAR12.VAR4 = FUN4(VAR3, VAR5);
    memcpy(VAR9->VAR11.VAR12.VAR4, VAR4, VAR5);
    VAR9->VAR11.VAR12.VAR5 = VAR5;
    return 0;
}