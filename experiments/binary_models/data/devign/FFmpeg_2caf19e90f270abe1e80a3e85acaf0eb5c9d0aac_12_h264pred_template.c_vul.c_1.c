static void FUN1(VAR1)(VAR2 *VAR3, const VAR2 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR3;
    int VAR8 = VAR5 / sizeof(VAR6);
    const pixel4 VAR9 = ((VAR10 *)(VAR7 - VAR8))[0];
    ((VAR10 *)(VAR7 + 0 * VAR8))[0] = VAR9;
    ((VAR10 *)(VAR7 + 1 * VAR8))[0] = VAR9;
    ((VAR10 *)(VAR7 + 2 * VAR8))[0] = VAR9;
    ((VAR10 *)(VAR7 + 3 * VAR8))[0] = VAR9;
}