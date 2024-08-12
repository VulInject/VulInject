static int FUN1(VAR1 *VAR2, int VAR3, char *VAR4, VAR5 *VAR6, VAR7 **VAR8);
static char *FUN2(VAR1 *VAR9, uint64_t VAR10, VAR7 **VAR8)
{
    int64_t VAR11;
    char *VAR4;
    int VAR12;
    VAR11 = FUN3(VAR9);
    if (VAR11 < 0)
    {
        FUN4(VAR8, -VAR11, "");
        return NULL;
    }
    if (VAR11 < 4)
    {
        FUN5(VAR8, "");
        return NULL;
    }
    VAR11 = FUN6(VAR11, (1 << 20) - 1);
    VAR4 = FUN7(VAR11 + 1);
    VAR12 = FUN8(VAR9, VAR10, VAR4, VAR11);
    if (VAR12 < 0)
    {
        FUN4(VAR8, -VAR12, "");
        FUN9(VAR4);
        return NULL;
    }
    VAR4[VAR12] = 0;
    return VAR4;
}