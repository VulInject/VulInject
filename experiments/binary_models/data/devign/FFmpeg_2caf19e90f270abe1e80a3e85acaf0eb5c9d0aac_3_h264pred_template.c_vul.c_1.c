static void FUN1(VAR1)(VAR2 *VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR3;
    int VAR10 = VAR6 / sizeof(VAR8);
    VAR11;
    VAR9[0] = VAR12;
    VAR9[1] = VAR13;
    VAR9[2] = VAR14;
    VAR9[3] = VAR15;
    VAR9[4] = VAR16;
    VAR9[5] = VAR17;
    VAR9[6] = VAR18;
    VAR9[7] = VAR19;
    for (VAR7 = 1; VAR7 < 8; VAR7++)
    {
        ((VAR20 *)(VAR9 + VAR7 * VAR10))[0] = ((VAR20 *)VAR9)[0];
        ((VAR20 *)(VAR9 + VAR7 * VAR10))[1] = ((VAR20 *)VAR9)[1];
    }
}