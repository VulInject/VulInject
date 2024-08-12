static void FUN1(VAR1 *VAR2, unsigned int VAR3, uint64_t VAR4)
{
    int VAR5, VAR6 = 1;
    while (VAR4 >> VAR6 * 8 && VAR6 < 8)
        VAR6++;
    FUN2(VAR2, VAR3);
    FUN3(VAR2, VAR6, 0);
    for (VAR5 = VAR6 - 1; VAR5 >= 0; VAR5--)
        FUN4(VAR2, VAR4 >> VAR5 * 8);
}