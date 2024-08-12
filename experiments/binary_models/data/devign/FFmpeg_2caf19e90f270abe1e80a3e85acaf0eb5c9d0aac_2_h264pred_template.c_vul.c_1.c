static void FUN1(VAR1)(VAR2 *VAR3, const VAR2 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR3;
    int VAR8 = VAR5 / sizeof(VAR6);
    ((VAR9 *)(VAR7 + 0 * VAR8))[0] = ((VAR9 *)(VAR7 + 1 * VAR8))[0] = ((VAR9 *)(VAR7 + 2 * VAR8))[0] = ((VAR9 *)(VAR7 + 3 * VAR8))[0] = FUN2((1 << (VAR10 - 1)) + 1);
}