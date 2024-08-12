void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        VAR6 *VAR7 = &VAR2->VAR8[VAR3];
        for (VAR4 = 0; VAR4 < 2; VAR4++)
        {
            VAR9 *VAR2 = &VAR7->VAR10.VAR11[VAR4];
            FUN2(VAR2);
        }
    }
    FUN3(VAR2->VAR8);