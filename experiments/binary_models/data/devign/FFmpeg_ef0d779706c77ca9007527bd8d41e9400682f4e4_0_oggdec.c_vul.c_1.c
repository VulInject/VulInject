static int FUN1(struct VAR1 *VAR1, int VAR2)
{
    struct VAR3 *VAR4 = VAR1->VAR5 + VAR2;
    VAR6 *VAR7 = FUN2(VAR4->VAR8);
    int VAR9 = VAR4->VAR10 - VAR4->VAR11;
    if (VAR4->VAR12)
    {
        memcpy(VAR7, VAR4->VAR12 + VAR4->VAR11, VAR9);
        FUN3(VAR4->VAR12);
    }
    VAR4->VAR12 = VAR7;
    VAR4->VAR10 = VAR9;
    VAR4->VAR11 = 0;
    return 0;
}