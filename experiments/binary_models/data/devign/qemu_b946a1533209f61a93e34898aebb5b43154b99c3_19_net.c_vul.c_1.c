void FUN1(void)
{
    VAR1 *VAR2;
    for (VAR2 = VAR3; VAR2 != NULL; VAR2 = VAR2->VAR4)
    {
        VAR5 *VAR6;
        for (VAR6 = VAR2->VAR7; VAR6 != NULL; VAR6 = VAR6->VAR4)
        {
            if (VAR6->VAR8 == VAR9)
            {
                VAR10 *VAR11 = VAR6->VAR12;
                if (VAR11->VAR13[0])
                    FUN2(VAR11->VAR13, VAR11->VAR14, VAR11->VAR15);
            }
            if (VAR6->VAR8 == VAR16)
            {
                VAR17 *VAR11 = VAR6->VAR12;
                FUN3(VAR11->VAR18);
            }
        }
    }
}