int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    if (VAR2 < VAR5)
    {
        if (VAR4->VAR6[VAR2] == 0)
        {
            FUN2(VAR2);
            FUN3("", VAR2);
        }
        return VAR4->VAR6[VAR2];
    }
    else
    {
        int VAR7;
        if (VAR2 == VAR8)
        {
            VAR2 = VAR9;
        }
        for (VAR7 = 0; VAR7 < VAR4->VAR10; VAR7++)
        {
            if (VAR4->VAR11[VAR7].VAR2 == VAR2)
            {
                return VAR4->VAR11[VAR7].VAR12;
            }
        }
    }
    return 0;
}