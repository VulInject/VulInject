static void FUN1(int VAR1)
{
    pid_t VAR2;
    int VAR3;
    while ((VAR2 = FUN2(-1, &VAR3, VAR4)) > 0)
    {
        VAR5 *VAR6;
        for (VAR6 = VAR7.VAR8; VAR6; VAR6 = VAR6->VAR9)
        {
            if (VAR6->VAR2 == VAR2)
            {
                int VAR10 = FUN3(0) - VAR6->VAR11;
                VAR6->VAR2 = 0;
                fprintf(VAR12, "", VAR6->VAR13, VAR2, VAR3, VAR10);
                if (VAR10 < 30)
                    VAR6->VAR14 = 0;
            }
        }
    }
    VAR15 = 1;
}