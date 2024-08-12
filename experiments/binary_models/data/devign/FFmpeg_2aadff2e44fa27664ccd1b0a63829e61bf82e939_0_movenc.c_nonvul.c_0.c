static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = &VAR2->VAR6[0];
    uint64_t VAR7 = VAR5->VAR8;
    VAR5->VAR9 = 1;
    VAR2->VAR10 = 1;
    for (VAR3 = 1; VAR3 < VAR2->VAR11; VAR3++)
    {
        if (VAR5->VAR12 + VAR7 == VAR2->VAR6[VAR3].VAR12 && VAR7 + VAR2->VAR6[VAR3].VAR8 < VAR13 / 4)
        {
            VAR7 += VAR2->VAR6[VAR3].VAR8;
            VAR5->VAR14 += VAR2->VAR6[VAR3].VAR15;
        }
        else
        {
            VAR2->VAR6[VAR3].VAR9 = VAR5->VAR9 + 1;
            VAR5 = &VAR2->VAR6[VAR3];
            VAR7 = VAR5->VAR8;
            VAR2->VAR10++;
        }
    }
}