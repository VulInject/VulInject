static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const enum Mode VAR5, const int VAR6)
{
    FUN2(VAR7 <= (signed)VAR5 && VAR5 <= VAR8);
    if (VAR5 == VAR8)
    {
        FUN3(VAR4, VAR2, VAR9, 5, 3);
    }
    else if (VAR5 == VAR10)
    {
        FUN4(VAR4, VAR2);
    }
    else
    {
        int *VAR11 = VAR2->VAR12;
        int VAR13, VAR14;
        const int VAR15 = VAR4[0];
        if (VAR5 <= VAR16)
        {
            VAR14 = ((VAR15 >> 3) & 8) + (VAR6 << 1);
            VAR11[0] = (VAR15 & 7) * 5 + VAR17[VAR14];
            VAR11[1] = ((VAR15 >> 3) & 7) * 5 + VAR17[VAR14 + 1];
            VAR2->VAR18 = 2;
        }
        else if (VAR5 == VAR19)
        {
            VAR14 = ((VAR15 & 1) << 1) + 1;
            VAR11[0] = ((VAR15 >> 1) & 7) * 5 + VAR14;
            VAR14 = (VAR15 >> 4) & 3;
            VAR11[1] = ((VAR15 >> 6) & 7) * 5 + VAR14 + (VAR14 == 3 ? 1 : 0);
            VAR2->VAR18 = VAR11[0] == VAR11[1] ? 1 : 2;
        }
        else if (VAR5 == VAR20)
        {
            VAR11[0] = (VAR15 & 7) * 5;
            VAR14 = (VAR15 >> 2) & 2;
            VAR11[1] = ((VAR15 >> 4) & 7) * 5 + VAR14 + 1;
            VAR14 = (VAR15 >> 6) & 2;
            VAR11[2] = ((VAR15 >> 8) & 7) * 5 + VAR14 + 2;
            VAR2->VAR18 = 3;
        }
        else
        {
            VAR11[0] = VAR9[VAR15 & 7];
            VAR11[1] = VAR9[(VAR15 >> 3) & 7] + 1;
            VAR11[2] = VAR9[(VAR15 >> 6) & 7] + 2;
            VAR14 = (VAR15 >> 9) & 1;
            VAR11[3] = VAR9[(VAR15 >> 10) & 7] + VAR14 + 3;
            VAR2->VAR18 = 4;
        }
        for (VAR13 = 0; VAR13 < VAR2->VAR18; VAR13++)
            VAR2->VAR21[VAR13] = (VAR4[1] >> VAR13) & 1 ? 1.0 : -1.0;
    }
}