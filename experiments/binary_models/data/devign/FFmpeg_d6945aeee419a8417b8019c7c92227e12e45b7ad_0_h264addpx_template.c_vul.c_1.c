static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR3;
    VAR10 *VAR11 = (VAR10 *)VAR5;
    VAR6 /= sizeof(VAR8);
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        VAR9[0] += VAR11[0];
        VAR9[1] += VAR11[1];
        VAR9[2] += VAR11[2];
        VAR9[3] += VAR11[3];
        VAR9 += VAR6;
        VAR11 += 4;
    }
    memset(VAR5, 0, sizeof(VAR10) * 16);
}