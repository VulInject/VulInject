static int FUN1(const VAR1 *VAR2, int VAR3, const char *VAR4)
{
    const VAR5 *VAR6 = (const void *)VAR2;
    if (VAR3 >= sizeof(VAR5) && FUN2(VAR6->VAR7) == VAR8 && FUN2(VAR6->VAR9) >= 2)
        return 100;
    else
        return 0;
}