static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR3;
    VAR4 /= sizeof(VAR6);
    for (VAR5 = 0; VAR5 < 8; VAR5++)
    {
        ((VAR8 *)(VAR7 + VAR5 * VAR4))[0] = ((VAR8 *)(VAR7 + VAR5 * VAR4))[1] = FUN2(VAR7[-1 + VAR5 * VAR4]);
    }
}