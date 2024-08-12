static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR3;
    int VAR8 = VAR4 / sizeof(VAR6);
    const pixel4 VAR9 = ((VAR10 *)(VAR7 - VAR8))[0];
    const pixel4 VAR11 = ((VAR10 *)(VAR7 - VAR8))[1];
    const pixel4 VAR12 = ((VAR10 *)(VAR7 - VAR8))[2];
    const pixel4 VAR13 = ((VAR10 *)(VAR7 - VAR8))[3];
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        ((VAR10 *)(VAR7 + VAR5 * VAR8))[0] = VAR9;
        ((VAR10 *)(VAR7 + VAR5 * VAR8))[1] = VAR11;
        ((VAR10 *)(VAR7 + VAR5 * VAR8))[2] = VAR12;
        ((VAR10 *)(VAR7 + VAR5 * VAR8))[3] = VAR13;
    }
}