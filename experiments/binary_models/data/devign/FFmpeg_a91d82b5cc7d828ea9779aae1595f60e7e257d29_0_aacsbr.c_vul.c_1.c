static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7 = 0;
    int VAR8 = VAR4->VAR6[0];
    int VAR9 = VAR4->VAR10[1];
    int VAR11 = ((1000 << 11) + (VAR4->VAR12 >> 1)) / VAR4->VAR12;
    VAR4->VAR13 = 0;
    if (VAR11 < VAR4->VAR10[1] + VAR4->VAR14[1])
    {
        for (VAR6 = 0; VAR4->VAR15[VAR6] < VAR11; VAR6++)
            ;
    }
    else
        VAR6 = VAR4->VAR16;
    do
    {
        int VAR17 = 0;
        for (VAR5 = VAR6; VAR5 == VAR6 || VAR7 > (VAR4->VAR6[0] - 1 + VAR8 - VAR17); VAR5--)
        {
            VAR7 = VAR4->VAR15[VAR5];
            VAR17 = (VAR7 + VAR4->VAR6[0]) & 1;
        }
        VAR4->VAR18[VAR4->VAR13] = FUN2(VAR7 - VAR9, 0);
        VAR4->VAR19[VAR4->VAR13] = VAR4->VAR6[0] - VAR17 - VAR4->VAR18[VAR4->VAR13];
        if (VAR4->VAR18[VAR4->VAR13] > 0)
        {
            VAR9 = VAR7;
            VAR8 = VAR7;
            VAR4->VAR13++;
        }
        else
            VAR8 = VAR4->VAR10[1];
        if (VAR4->VAR15[VAR6] - VAR7 < 3)
            VAR6 = VAR4->VAR16;
    } while (VAR7 != VAR4->VAR10[1] + VAR4->VAR14[1]);
    if (VAR4->VAR18[VAR4->VAR13 - 1] < 3 && VAR4->VAR13 > 1)
        VAR4->VAR13--;
    if (VAR4->VAR13 > 6)
    {
        FUN3(VAR2->VAR20, VAR21, "", VAR4->VAR13);
        return -1;
    }
    return 0;
}