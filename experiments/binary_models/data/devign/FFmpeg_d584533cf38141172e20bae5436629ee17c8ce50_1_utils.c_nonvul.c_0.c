static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
        if (VAR2->VAR6[VAR3]->VAR7 & VAR8 && VAR2->VAR6[VAR3]->VAR9 < VAR10)
        {
            VAR4 = FUN2(&VAR2->VAR11->VAR12, &VAR2->VAR6[VAR3]->VAR13, &VAR2->VAR11->VAR14, 1);
            if (VAR4 < 0)
                return VAR4;
        }
    return 0;
}