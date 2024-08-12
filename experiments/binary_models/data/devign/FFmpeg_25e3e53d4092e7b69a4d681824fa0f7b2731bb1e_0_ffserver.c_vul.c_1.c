static void FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    VAR4 *VAR5;
    int VAR6;
    for (VAR2 = VAR7; VAR2 != NULL; VAR2 = VAR3)
    {
        VAR3 = VAR2->VAR8;
        if (VAR2->VAR9 == VAR10 && !VAR2->VAR11)
        {
            VAR2->VAR12 = FUN2(sizeof(VAR13));
            if (!strcmp(VAR2->VAR14->VAR15, ""))
            {
                VAR2->VAR12->VAR16 = 1;
                VAR2->VAR12->VAR17 = 1;
            }
            if (FUN3(&VAR5, VAR2->VAR18, VAR2->VAR19, 0, VAR2->VAR12) < 0)
            {
                FUN4("", VAR2->VAR18);
            VAR20:
                FUN5(VAR2);
            }
            else
            {
                if (FUN6(VAR5) < 0)
                {
                    FUN4("", VAR2->VAR18);
                    FUN7(VAR5);
                    goto VAR20;
                }
                FUN8(VAR5);
                for (VAR6 = 0; VAR6 < VAR5->VAR21; VAR6++)
                    FUN9(VAR2, VAR5->VAR22[VAR6]->VAR23);
                FUN7(VAR5);
            }
        }
    }
}