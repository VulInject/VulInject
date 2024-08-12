static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8;
    if (FUN2(VAR2, VAR7, VAR2->VAR9))
        return VAR10;
    VAR5 = VAR2->VAR5;
    VAR4 = VAR2->VAR8;
    while (VAR5--)
        *VAR4++ = FUN3(*VAR4);
    return 0;
}