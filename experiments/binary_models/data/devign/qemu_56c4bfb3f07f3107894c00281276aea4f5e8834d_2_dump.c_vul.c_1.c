static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    if (!VAR3->VAR6)
    {
        VAR3->VAR5 = FUN2(&VAR7.VAR8);
        return 0;
    }
    FUN3(VAR5, &VAR7.VAR8, VAR9)
    {
        if (VAR5->VAR10 >= VAR3->VAR11 + VAR3->VAR12 || VAR5->VAR10 + VAR5->VAR12 <= VAR3->VAR11)
        {
            continue;
        }
        VAR3->VAR5 = VAR5;
        if (VAR3->VAR11 > VAR5->VAR10)
        {
            VAR3->VAR13 = VAR3->VAR11 - VAR5->VAR10;
        }
        else
        {
            VAR3->VAR13 = 0;
        }
        return VAR3->VAR13;
    }
    return -1;
}