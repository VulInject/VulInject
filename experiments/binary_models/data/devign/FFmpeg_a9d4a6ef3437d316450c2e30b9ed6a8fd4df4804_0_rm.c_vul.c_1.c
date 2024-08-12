static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR6->VAR10 = 1;
    VAR9 = FUN2(VAR2, 0);
    if (!VAR9)
        goto VAR11;
    FUN3(VAR2, VAR9, 1);
    return 0;
VAR11:
    return -1;
}