int FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4)
{
    int VAR5, VAR6 = 0;
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        VAR6 |= FUN2(VAR3[VAR7]);
    VAR5 = 14 - FUN3(VAR6);
    VAR5 = FUN4(VAR5, 0);
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        VAR2[VAR7] = VAR3[VAR7] << VAR5 >> 3;
    return VAR5 - 3;
}