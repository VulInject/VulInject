static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++)
    {
        VAR4->VAR7[VAR5] = 0;
    }
    for (VAR5 = 0; VAR5 < FUN3(VAR4->VAR8); ++VAR5)
    {
        if (VAR4->VAR8[VAR5])
        {
            FUN4(VAR4->VAR8[VAR5]);
        }
    }
    return 1;
}