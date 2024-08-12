static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(&VAR2->VAR4, 4);
    for (VAR3 = 0; VAR3 < 128; VAR3++)
    {
        VAR2->VAR5[VAR3] = 0xFF << 24 | FUN3(&VAR2->VAR4);
        VAR2->VAR5[VAR3 + 128] = VAR2->VAR5[VAR3] << 2;
    }
    return 0;
}