static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    VAR6->VAR9 = VAR10;
    VAR8 = FUN2(VAR2, VAR3, VAR4, VAR11);
    if (VAR8)
        return VAR8;
    close(VAR6->VAR12);
    VAR6->VAR12 = -1;
    VAR6->VAR13 = 1;
    return 0;
}