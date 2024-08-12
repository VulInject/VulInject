static void FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    int VAR4, VAR5;
    for (VAR2 = VAR6.VAR7; VAR2; VAR2 = VAR3)
    {
        VAR8 *VAR9 = NULL;
        VAR3 = VAR2->VAR10;
        if (VAR2->VAR11 == VAR12 && !VAR2->VAR13)
        {
            if (VAR2->VAR14 && !strcmp(VAR2->VAR14->VAR15, ""))
            {
                FUN2(&VAR2->VAR16, "", "", 0);
            }
            if (!VAR2->VAR17[0])
            {
                FUN3("", VAR2->VAR18);
                goto VAR19;
            }
            FUN3("", VAR2->VAR17, VAR2->VAR18);
            VAR5 = FUN4(&VAR9, VAR2->VAR17, VAR2->VAR20, &VAR2->VAR16);
            if (VAR5 < 0)
            {
                FUN3("", VAR2->VAR17, FUN5(VAR5));
            VAR19:
                FUN6(VAR2);
            }
            else
            {
                if (FUN7(VAR9, NULL) < 0)
                {
                    FUN3("", VAR2->VAR17);
                    FUN8(&VAR9);
                    goto VAR19;
                }
                FUN9(VAR9);
                for (VAR4 = 0; VAR4 < VAR9->VAR21; VAR4++)
                    FUN10(VAR2, VAR9->VAR22[VAR4]->VAR23, 1);
                FUN8(&VAR9);
            }
        }
    }
}