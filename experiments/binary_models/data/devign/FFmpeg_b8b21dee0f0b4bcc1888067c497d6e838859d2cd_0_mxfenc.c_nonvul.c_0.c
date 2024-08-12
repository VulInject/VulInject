static const VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4 = 1;
    if (VAR3->VAR5 == 4)
    {
        if (VAR3->VAR6 == 8)
            return &VAR7[0 + VAR4];
        else if (VAR3->VAR6 == 4)
            return &VAR7[4 + VAR4];
        else if (VAR3->VAR6 == 6)
            return &VAR7[8 + VAR4];
    }
    else if (VAR3->VAR5 == 0)
    {
        if (VAR3->VAR6 == 5)
            return &VAR7[2 + VAR4];
        else if (VAR3->VAR6 == 2)
            return &VAR7[6 + VAR4];
    }
    return NULL;
}