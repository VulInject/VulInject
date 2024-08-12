void FUN1(VAR1)(VAR2 *VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR3;
    int VAR9;
    VAR4 /= sizeof(VAR7);
    for (VAR9 = 0; VAR9 < 8; VAR9++)
        FUN1(VAR10)
        (VAR6 + VAR9 * 8);
    for (VAR9 = 0; VAR9 < 8; VAR9++)
        FUN1(VAR11)
        (VAR8 + VAR9, VAR4, VAR6 + VAR9);
}