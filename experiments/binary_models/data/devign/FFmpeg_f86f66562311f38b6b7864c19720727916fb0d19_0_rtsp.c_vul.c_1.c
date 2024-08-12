void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR7 *VAR8;
    for (VAR6 = 0; VAR6 < VAR4->VAR9; VAR6++)
    {
        VAR8 = VAR4->VAR10[VAR6];
        if (VAR8)
        {
            if (VAR8->VAR11)
            {
                if (VAR2->VAR12)
                {
                    VAR1 *VAR13 = VAR8->VAR11;
                    FUN2(VAR13);
                    FUN3(VAR13->VAR14);
                    FUN4(VAR13->VAR15[0]);
                    FUN4(VAR13);
                }
                else if (VAR4->VAR16 == VAR17)
                    FUN5(VAR8->VAR11);
                else
                    FUN6(VAR8->VAR11);
            }
            if (VAR8->VAR18)
                FUN7(VAR8->VAR18);
            if (VAR8->VAR19 && VAR8->VAR20)
                VAR8->VAR19->close(VAR8->VAR20);
        }
    }
    FUN4(VAR4->VAR10);
    if (VAR4->VAR21)
    {
        FUN8(VAR4->VAR21);
        VAR4->VAR21 = NULL;
    }
    FUN9(&VAR4->VAR22);