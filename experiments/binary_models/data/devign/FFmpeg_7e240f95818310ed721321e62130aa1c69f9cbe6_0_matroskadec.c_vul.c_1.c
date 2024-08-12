static VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    int VAR5;
    VAR1 *VAR6;
    if (VAR4 == VAR7)
        if (VAR4 != VAR8)
        {
            for (VAR5 = 0; VAR5 < VAR3->VAR9; VAR5++)
            {
                if (VAR3->VAR10[VAR5].VAR4 == VAR4)
                    return &VAR3->VAR10[VAR5];
            }
        }
    if (VAR3->VAR9 >= FUN2(VAR3->VAR10))
    {
        FUN3(VAR3->VAR11, VAR12, "");
    }
    VAR6 = &VAR3->VAR10[VAR3->VAR9++];
    *VAR6 = (VAR1){.VAR4 = VAR4};
    return VAR6;