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
                FUN4("");
                FUN5(1);
            }
            if (!VAR2->VAR6)
            {
                char VAR8[1024];
                char *VAR9;
                int VAR10;
                FUN6(VAR8, VAR11, sizeof(VAR8));
                VAR9 = strrchr(VAR8, '');
                if (!VAR9)
                    VAR9 = VAR8;
                else
                    VAR9++;
                strcpy(VAR9, "");
                FUN4("");
                FUN4("", VAR8);
                for (VAR10 = 1; VAR2->VAR5[VAR10] && VAR2->VAR5[VAR10][0]; VAR10++)
                    FUN4("", VAR2->VAR5[VAR10]);
                FUN4("");
                for (VAR10 = 3; VAR10 < 256; VAR10++)
                    close(VAR10);
                if (!VAR12)
                {
                    VAR10 = open("", VAR13);
                    if (VAR10 != -1)
                    {
                        FUN7(VAR10, 0);
                        FUN7(VAR10, 1);
                        FUN7(VAR10, 2);
                        close(VAR10);
                    }
                }
                if (FUN8(VAR14) < 0)
                {
                    FUN4("");
                    FUN5(1);
                }
                signal(VAR15, VAR16);
                execvp(VAR8, VAR2->VAR5);
                FUN9(1);
            }
        }
    }
}