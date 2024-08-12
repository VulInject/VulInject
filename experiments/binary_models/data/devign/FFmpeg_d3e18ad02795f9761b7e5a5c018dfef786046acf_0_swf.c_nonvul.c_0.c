static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    if (VAR9->VAR12 == 16000)
    {
        fprintf(VAR13, "");
    }
    if (VAR4->VAR14 == VAR15)
    {
        for (VAR11 = 0; VAR11 < VAR7; VAR11++)
        {
            VAR9->VAR16[(VAR9->VAR17 + VAR11) % VAR18] = VAR6[VAR11];
        }
        VAR9->VAR19 += VAR7;
        VAR9->VAR17 += VAR7;
        VAR9->VAR17 %= VAR18;
    }
    if (VAR9->VAR20 == 0)
    {
        FUN2(VAR2, VAR4, 0, 0);
    }
    return 0;
}