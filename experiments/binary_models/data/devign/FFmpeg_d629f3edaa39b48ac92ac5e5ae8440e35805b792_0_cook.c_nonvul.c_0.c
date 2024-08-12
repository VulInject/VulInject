static int FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5)
{
    int VAR6[128];
    int VAR7[102];
    int VAR8[128];
    int VAR9, VAR10;
    memset(&VAR8, 0, sizeof(VAR8));
    memset(&VAR6, 0, sizeof(VAR6));
    if ((VAR9 = FUN2(VAR2, VAR4, VAR7)) < 0)
        return VAR9;
    VAR2->VAR11 = FUN3(&VAR2->VAR12, VAR4->VAR13);
    FUN4(VAR2, VAR4, VAR7, VAR8, VAR6);
    FUN5(VAR2, VAR8, VAR6);
    for (VAR10 = 0; VAR10 < VAR4->VAR14; VAR10++)
    {
        if (VAR8[VAR10] > 7)
            return VAR15;
    }
    FUN6(VAR2, VAR4, VAR8, VAR7, VAR5);
    return 0;
}