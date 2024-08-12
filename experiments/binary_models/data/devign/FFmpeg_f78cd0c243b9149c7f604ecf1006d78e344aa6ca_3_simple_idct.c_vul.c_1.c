void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < 64; VAR5++)
        VAR2[VAR5] *= VAR4[VAR5];
    for (VAR5 = 0; VAR5 < 8; VAR5++)
        FUN2(VAR2 + VAR5 * 8);
    for (VAR5 = 0; VAR5 < 64; VAR5++)
        VAR2[VAR5] >>= 2;
    for (VAR5 = 0; VAR5 < 8; VAR5++)
        FUN3(VAR2 + VAR5);
}