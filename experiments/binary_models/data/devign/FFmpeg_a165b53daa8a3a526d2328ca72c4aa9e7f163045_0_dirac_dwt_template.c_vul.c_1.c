static void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, int VAR6)
{
    int VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR3;
    VAR8 *VAR10 = (VAR8 *)VAR4;
    VAR8 *VAR11 = (VAR8 *)VAR5;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
        VAR10[VAR7] -= (VAR9[VAR7] + VAR11[VAR7] + 2) >> 2;
}