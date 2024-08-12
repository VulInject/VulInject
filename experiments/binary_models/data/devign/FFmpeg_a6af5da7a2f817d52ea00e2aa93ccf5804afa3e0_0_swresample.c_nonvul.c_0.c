static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6, int VAR7)
{
    AudioData VAR8, VAR9, VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = VAR14 && VAR2->VAR15 == VAR16 ? 7 : 0;
    FUN2(VAR2->VAR17.VAR18 == VAR6->VAR18);
    FUN2(VAR2->VAR17.VAR19 == VAR6->VAR19);
    FUN2(VAR2->VAR17.VAR20 == VAR6->VAR20);
    VAR10 = VAR9 = *VAR4;
    VAR8 = *VAR6;
    do
    {
        int VAR21, VAR22, VAR23;
        if (!VAR2->VAR24 && VAR2->VAR25)
        {
            FUN3(&VAR10, &VAR2->VAR17, VAR2->VAR26);
            VAR21 = VAR2->VAR27->FUN4(VAR2->VAR28, &VAR9, VAR5, &VAR10, VAR2->VAR25, &VAR23);
            VAR5 -= VAR21;
            VAR11 += VAR21;
            FUN3(&VAR9, &VAR9, VAR21);
            VAR2->VAR25 -= VAR23;
            VAR2->VAR26 += VAR23;
            if (!VAR7)
                break;
            if (VAR2->VAR25 <= VAR12)
            {
                FUN3(&VAR8, &VAR8, -VAR2->VAR25);
                VAR7 += VAR2->VAR25;
                VAR2->VAR25 = 0;
                VAR2->VAR26 = 0;
                VAR12 = 0;
            }
        }
        if ((VAR2->VAR29 || VAR7 > VAR13) && !VAR2->VAR25)
        {
            VAR2->VAR26 = 0;
            VAR21 = VAR2->VAR27->FUN4(VAR2->VAR28, &VAR9, VAR5, &VAR8, FUN5(VAR7 - VAR13, 0), &VAR23);
            VAR5 -= VAR21;
            VAR11 += VAR21;
            FUN3(&VAR9, &VAR9, VAR21);
            VAR7 -= VAR23;
            FUN3(&VAR8, &VAR8, VAR23);
        }
        VAR22 = VAR2->VAR26 + VAR2->VAR25 + VAR7;
        if (VAR22 > VAR2->VAR17.VAR30 && VAR2->VAR25 + VAR7 <= VAR2->VAR26)
        {
            FUN3(&VAR10, &VAR2->VAR17, VAR2->VAR26);
            copy(&VAR2->VAR17, &VAR10, VAR2->VAR25);
            VAR2->VAR26 = 0;
        }
        else if ((VAR21 = FUN6(&VAR2->VAR17, VAR22)) < 0)
            return VAR21;
        if (VAR7)
        {
            int VAR30 = VAR7;
            if (VAR2->VAR25 && VAR2->VAR25 + 2 < VAR30 && VAR5)
                VAR30 = VAR2->VAR25 + 2;
            FUN3(&VAR10, &VAR2->VAR17, VAR2->VAR26 + VAR2->VAR25);
            copy(&VAR10, &VAR8, VAR30);
            VAR2->VAR25 += VAR30;
            VAR7 -= VAR30;
            VAR12 += VAR30;
            FUN3(&VAR8, &VAR8, VAR30);
            VAR2->VAR24 = 0;
            if (VAR2->VAR25 != VAR30 || VAR7)
                continue;
            if (VAR13)
            {
                VAR13 = 0;
                continue;
            }
        }
        break;
    } while (1);
    VAR2->VAR24 = !!VAR5;
    return VAR11;
}