static void FUN1(VAR1 *VAR2, const double *VAR3, int VAR4)
{
    int VAR5, VAR6;
    memset(VAR2->VAR7, 0, sizeof(VAR2->VAR7));
    memset(VAR2->VAR8, 0, sizeof(VAR2->VAR8));
    memset(VAR2->VAR9, 0, sizeof(VAR2->VAR9));
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
    {
        int VAR11 = 1;
        for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            if (VAR3[VAR6 * VAR4 + VAR5] != 0.0)
            {
                VAR11 = 0;
                break;
            }
        }
        if (VAR6 < VAR2->VAR12)
        {
            for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
            {
                if (VAR3[VAR5 * VAR4 + VAR6] != 0.0)
                {
                    VAR11 = 0;
                    break;
                }
            }
        }
        if (VAR11)
        {
            VAR2->VAR7[VAR6] = 1;
            VAR2->VAR13--;
        }
    }
    if (VAR2->VAR13 == 0)
    {
        VAR2->VAR14 = 0;
        return;
    }
    for (VAR5 = 0; VAR5 < FUN2(VAR2->VAR12, VAR2->VAR10); VAR5++)
    {
        int VAR15 = 1;
        for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
        {
            int VAR16;
            if ((VAR6 != VAR5 && VAR3[VAR6 * VAR4 + VAR5] != 0.0) || (VAR6 == VAR5 && VAR3[VAR6 * VAR4 + VAR5] != 1.0))
            {
                VAR15 = 0;
                break;
            }
            if (VAR6 == VAR5)
            {
                for (VAR16 = 0; VAR16 < VAR2->VAR12; VAR16++)
                {
                    if (VAR16 != VAR5 && VAR3[VAR6 * VAR4 + VAR16] != 0.0)
                    {
                        VAR15 = 0;
                        break;
                    }
                }
            }
        }
        if (VAR15)
        {
            VAR2->VAR8[VAR5] = 1;
            VAR2->VAR14--;
        }
    }
    for (; VAR5 < VAR2->VAR12; VAR5++)
    {
        int VAR17 = 0;
        for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
        {
            if (VAR3[VAR6 * VAR4 + VAR5] != 0.0)
            {
                VAR17 = 1;
                break;
            }
        }
        if (!VAR17)
        {
            VAR2->VAR8[VAR5] = 1;
            VAR2->VAR14--;
        }
    }
    if (VAR2->VAR14 == 0)
    {
        VAR2->VAR13 = 0;
        return;
    }
    for (VAR6 = 0; VAR6 < FUN2(VAR2->VAR12, VAR2->VAR10); VAR6++)
    {
        int VAR15 = 1;
        int VAR18;
        for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            if ((VAR6 != VAR5 && VAR3[VAR6 * VAR4 + VAR5] != 0.0) || (VAR6 == VAR5 && VAR3[VAR6 * VAR4 + VAR5] != 1.0))
            {
                VAR15 = 0;
                break;
            }
        }
        VAR5 = VAR6;
        for (VAR18 = 0; VAR18 < VAR2->VAR10; VAR18++)
        {
            if (VAR18 != VAR5 && VAR3[VAR18 * VAR4 + VAR5] != 0.0)
            {
                VAR15 = 0;
                break;
            }
        }
        if (VAR15)
        {
            VAR2->VAR9[VAR6] = 1;
            VAR2->VAR13--;
        }
    }
    if (VAR2->VAR13 == 0)
    {
        VAR2->VAR14 = 0;
        return;
    }
}