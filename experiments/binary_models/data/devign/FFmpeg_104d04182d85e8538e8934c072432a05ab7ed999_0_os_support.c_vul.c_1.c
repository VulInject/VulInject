int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
    const char *VAR4 = VAR1;
    unsigned int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
    VAR5 = FUN2(VAR4);
    VAR4 = strpbrk(VAR4, "");
    if (VAR4 == 0 || ++VAR4 == 0)
        goto VAR9;
    VAR6 = FUN2(VAR4);
    VAR4 = strpbrk(VAR4, "");
    if (VAR4 == 0 || ++VAR4 == 0)
        goto VAR9;
    VAR7 = FUN2(VAR4);
    VAR4 = strpbrk(VAR4, "");
    if (VAR4 == 0 || ++VAR4 == 0)
        goto VAR9;
    VAR8 = FUN2(VAR4);
VAR9:
    VAR3->VAR10 = (VAR8 << 24) + (VAR7 << 16) + (VAR6 << 8) + VAR5;
    return 1;
}