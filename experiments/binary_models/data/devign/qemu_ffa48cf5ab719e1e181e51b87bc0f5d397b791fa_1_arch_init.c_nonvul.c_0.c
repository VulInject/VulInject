void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    for (VAR6 = VAR5; VAR6->VAR7; ++VAR6)
    {
        if (VAR6->VAR8)
        {
            if (VAR6->VAR9)
            {
                if (VAR2)
                {
                    VAR6->VAR10.FUN2(VAR2);
                }
            }
            else
            {
                if (VAR4)
                {
                    VAR6->VAR10.FUN3(VAR4);
                }
            }
        }
    }
}