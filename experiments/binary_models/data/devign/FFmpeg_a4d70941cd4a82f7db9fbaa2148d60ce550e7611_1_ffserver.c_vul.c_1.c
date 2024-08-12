static void FUN1(VAR1 *VAR2)
{
    if (VAR3)
        return;
    for (; VAR2; VAR2 = VAR2->VAR4)
    {
        if (VAR2->VAR5 && !VAR2->VAR6)
        {
            VAR2->VAR7 = FUN2(0);
            VAR2->VAR6 = FUN3();
            if (VAR2->VAR6 < 0)
            {
                fprintf(VAR8, "");
                FUN4(1);
            }
            if (!VAR2->VAR6)
            {
                char VAR9[1024];
                char *VAR10;
                int VAR11;
                for (VAR11 = 3; VAR11 < 256; VAR11++)
                {
                    close(VAR11);
                }
                if (!VAR12)
                {
                    VAR11 = open("", VAR13);
                    if (VAR11)
                        FUN5(VAR11, 0);
                    FUN5(VAR11, 1);
                    FUN5(VAR11, 2);
                    if (VAR11)
                        close(VAR11);
                }
                FUN6(VAR9, sizeof(VAR9), VAR14);
                VAR10 = strrchr(VAR9, '');
                if (!VAR10)
                {
                    VAR10 = VAR9;
                }
                else
                {
                    VAR10++;
                }
                strcpy(VAR10, "");
                FUN7(VAR15);
                execvp(VAR9, VAR2->VAR5);
                FUN8(1);
            }
        }
    }