static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
        FUN2(VAR2, VAR2->VAR5[VAR3]->VAR6);
    FUN3(VAR2, 1);
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        VAR7 *VAR8 = VAR2->VAR5[VAR3];
        VAR9 *VAR10 = VAR8->VAR6;
        if (VAR8->VAR11->VAR12 == VAR13 || VAR8->VAR11->VAR12 == VAR14)
        {
            FUN4(VAR10->VAR15[0]);
        }
        FUN5(&VAR8->VAR6);
    }
    return 0;