static void FUN1(const struct VAR1 *VAR2)
{
    hwaddr VAR3;
    const char *VAR4;
    int VAR5 = VAR2->VAR5;
    hwaddr VAR6 = VAR2->VAR7;
    VAR3 = VAR6 + VAR8;
    FUN2(VAR3, 4096);
    FUN2(VAR3, VAR2->VAR9 / 4096);
    FUN2(VAR3, 0);
    FUN2(VAR3, VAR10 | VAR11 | VAR12);
    FUN2(VAR3, (31 << 8) | 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    if (VAR5)
        FUN2(VAR3, VAR2->VAR7 + VAR13);
    else
        FUN2(VAR3, 0);
    FUN2(VAR3, VAR5);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    FUN2(VAR3, 0);
    while (VAR3 < VAR6 + VAR8 + 256 + 1024)
    {
        FUN2(VAR3, 0);
    }
    VAR4 = VAR2->VAR14;
    if (VAR4)
    {
        FUN3(VAR3, (void *)VAR4, strlen(VAR4) + 1);
    }
    else
    {
        FUN2(VAR3, 0);
    }
}