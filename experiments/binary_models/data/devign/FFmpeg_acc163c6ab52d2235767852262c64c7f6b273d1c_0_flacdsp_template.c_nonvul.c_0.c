static void FUN1(VAR1)(VAR2 **VAR3, VAR4 **VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = (VAR9 *)FUN2(VAR3);
    int VAR11, VAR12;
    for (VAR12 = 0; VAR12 < VAR7; VAR12++)
        for (VAR11 = 0; VAR11 < VAR6; VAR11++)
            FUN3(VAR10, VAR11, VAR12) = (int)((unsigned)VAR5[VAR11][VAR12] << VAR8);
}