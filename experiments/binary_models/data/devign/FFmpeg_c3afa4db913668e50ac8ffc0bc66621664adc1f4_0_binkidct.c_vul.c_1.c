void FUN1(VAR1 *VAR2)
{
    int VAR3;
    DCTELEM VAR4[64];
    for (VAR3 = 0; VAR3 < 8; VAR3++)
        FUN2(&VAR4[VAR3], &VAR2[VAR3]);
    for (VAR3 = 0; VAR3 < 8; VAR3++)
    {
        FUN3((&VAR2[8 * VAR3]), (&VAR4[8 * VAR3]));
    }
}