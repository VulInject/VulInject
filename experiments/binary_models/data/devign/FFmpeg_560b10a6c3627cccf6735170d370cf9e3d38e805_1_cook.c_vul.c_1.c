static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = VAR2->VAR5 / 8;
    for (VAR3 = 0; VAR3 < 23; VAR3++)
    {
        VAR2->VAR6[VAR3] = FUN2((double)VAR2->VAR7[VAR3 + 52], (1.0 / (double)VAR2->VAR4));
    }
    memset(&VAR2->VAR8, 0, sizeof(VAR9));
    memset(&VAR2->VAR10, 0, sizeof(VAR9));
    memset(&VAR2->VAR11, 0, sizeof(VAR9));
    memset(&VAR2->VAR12, 0, sizeof(VAR9));
}