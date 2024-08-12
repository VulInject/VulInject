void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = FUN2(VAR2->VAR5->VAR4, 1);
    if (VAR2->VAR6)
    {
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            FUN3(FUN4(VAR2, VAR3)->VAR7);
        }
    }
    for (VAR3 = VAR4 - 1; VAR3 >= 0; VAR3--)
    {
        VAR8 *VAR9 = FUN4(VAR2, VAR3);
        FUN5(VAR9);
        FUN3(VAR9);
    }
}