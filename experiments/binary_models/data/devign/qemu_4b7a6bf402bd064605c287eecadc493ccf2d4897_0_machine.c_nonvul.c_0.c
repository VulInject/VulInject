static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5, VAR6;
    for (VAR5 = 0, VAR6 = 0; VAR5 < VAR4->VAR7 && VAR6 < VAR4->VAR8; VAR5++)
    {
        if (VAR4->VAR9[VAR6] > VAR4->VAR10[VAR5])
        {
            continue;
        }
        if (VAR4->VAR9[VAR6] < VAR4->VAR10[VAR5])
        {
            return -1;
        }
        VAR4->VAR11[VAR5] = VAR4->VAR12[VAR6];
        VAR6++;
    }
    if (FUN2())
    {
        if (!FUN3(VAR4, VAR13))
        {
            return -1;
        }
        FUN4(VAR4);
    }
    else
    {
        if (!FUN4(VAR4))
        {
            return -1;
        }
    }
    FUN5(VAR4);
    FUN6(VAR4);
    return 0;
}