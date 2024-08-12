static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    VAR6->VAR4 = VAR4;
    VAR8 = FUN2(VAR6, 0);
    if (VAR8 < 0)
    {
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
        {
            if (VAR6->VAR11[VAR9] && VAR6->VAR11[VAR9]->VAR12 == VAR13)
            {
                VAR14 *VAR15 = VAR6->VAR11[VAR9]->VAR16.VAR17.VAR18;
                if (VAR15->VAR19 == VAR20 && VAR15->VAR21 > 0)
                {
                    FUN3(VAR15, VAR4);
                    VAR15->VAR19 = VAR22;
                    VAR8 = 0;
                    break;
                }
            }
        }
    }
    if (!VAR8 && VAR4->VAR23 < 0)
        VAR8 = FUN4(VAR24);
    return VAR8;