static int FUN1(VAR1 *VAR2, VAR3 *VAR4, double *VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    double VAR12;
    for (;;)
    {
        while (VAR2->VAR13 > 0)
        {
            VAR10 = FUN2(&VAR2->VAR14->VAR15, (VAR16 *)VAR4, &VAR11, VAR2->VAR17, VAR2->VAR13);
            if (VAR10 < 0)
            {
                VAR2->VAR13 = 0;
                break;
            }
            VAR2->VAR17 += VAR10;
            VAR2->VAR13 -= VAR10;
            if (VAR11 <= 0)
                continue;
            VAR12 = VAR2->VAR18;
            *VAR5 = VAR12;
            VAR9 = 2 * VAR2->VAR14->VAR15.VAR19;
            VAR2->VAR18 += (double)VAR11 / (double)(VAR9 * VAR2->VAR14->VAR15.VAR20);
            {
                static double VAR21;
                FUN3("", VAR2->VAR18 - VAR21, VAR2->VAR18, VAR12);
                VAR21 = VAR2->VAR18;
            }
            return VAR11;
        }
        if (VAR7->VAR22)
            FUN4(VAR7);
        if (VAR2->VAR23 || VAR2->VAR24.VAR25)
        {
            return -1;
        }
        if (FUN5(&VAR2->VAR24, VAR7, 1) < 0)
            return -1;
        VAR2->VAR17 = VAR7->VAR22;
        VAR2->VAR13 = VAR7->VAR26;
        if (VAR7->VAR12 != VAR27)
        {
            VAR2->VAR18 = (double)VAR7->VAR12 / VAR28;
        }
    }
}