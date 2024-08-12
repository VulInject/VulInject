static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    int VAR6, VAR7;
    if (VAR3 == 0)
    {
        VAR7 = 0;
        FUN2(&VAR5->VAR8, VAR9[VAR7][1], VAR9[VAR7][0]);
    }
    else
    {
        if (VAR3 > 15)
            VAR3 -= 32;
        if (VAR3 < -16)
            VAR3 += 32;
        VAR6 = VAR3 < 0;
        VAR7 = VAR6 ? -VAR3 : VAR3;
        FUN2(&VAR5->VAR8, VAR9[VAR7][1], VAR9[VAR7][0]);
        FUN2(&VAR5->VAR8, 1, VAR6);
    }
}