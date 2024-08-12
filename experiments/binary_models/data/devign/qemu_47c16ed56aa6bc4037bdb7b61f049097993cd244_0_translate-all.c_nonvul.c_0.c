static void FUN1(void)
{
    FUN2();
    {
        struct VAR1 *VAR2;
        int VAR3, VAR4;
        VAR2 = FUN3(FUN4(), &VAR4);
        if (VAR2)
        {
            FUN5();
            for (VAR3 = 0; VAR3 < VAR4; VAR3++)
            {
                unsigned long VAR5, VAR6;
                VAR5 = VAR2[VAR3].VAR7;
                VAR6 = VAR2[VAR3].VAR8;
                if (FUN6(VAR5))
                {
                    VAR5 = FUN7(VAR5) & VAR9;
                    if (FUN6(VAR6))
                    {
                        VAR6 = FUN7(VAR6);
                        FUN8(VAR5, VAR6, VAR10);
                    }
                    else
                    {
                        VAR6 = ~0ul;
                        FUN8(VAR5, VAR6, VAR10);
                    }
                }
            }
            free(VAR2);
            FUN9();
        }
        VAR11 *VAR12;
        VAR13 = (unsigned long)FUN10(0);
        VAR12 = fopen("", "");
        if (VAR12)
        {
            FUN5();
            do
            {
                unsigned long VAR5, VAR6;
                int VAR14;
                VAR14 = fscanf(VAR12, "", &VAR5, &VAR6);
                if (VAR14 == 2 && FUN6(VAR5))
                {
                    VAR5 = FUN7(VAR5) & VAR9;
                    if (FUN6(VAR6))
                    {
                        VAR6 = FUN7(VAR6);
                    }
                    else
                    {
                        VAR6 = ~0ul;
                    }
                    FUN8(VAR5, VAR6, VAR10);
                }
            } while (!FUN11(VAR12));
            fclose(VAR12);
            FUN9();
        }
    }
}