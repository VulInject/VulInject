enum VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, enum AVPixelFormat VAR6)
{
    if (VAR5 && VAR5->VAR7)
    {
        const enum VAR1 *VAR8 = VAR5->VAR7;
        const VAR9 *VAR10 = FUN2(VAR6);
        int VAR11 = VAR10 ? VAR10->VAR12 % 2 == 0 : 0;
        enum AVPixelFormat VAR13 = VAR14;
        if (VAR3->VAR5->VAR15 <= VAR16)
        {
            if (VAR3->VAR5->VAR17 == VAR18)
            {
                VAR8 = (const enum VAR1[]){VAR19, VAR20, VAR21, VAR22, VAR14};
            }
            else if (VAR3->VAR5->VAR17 == VAR23)
            {
                VAR8 = (const enum VAR1[]){VAR19, VAR20, VAR24, VAR21, VAR22, VAR25, VAR26, VAR14};
            }
        }
        for (; *VAR8 != VAR14; VAR8++)
        {
            VAR13 = FUN3(VAR13, *VAR8, VAR6, VAR11, NULL);
            if (*VAR8 == VAR6)
                break;
        }
        if (*VAR8 == VAR14)
        {
            if (VAR6 != VAR14)
                FUN4(NULL, VAR27, "", FUN5(VAR6), VAR5->VAR28, FUN5(VAR13));
            return VAR13;
        }
    }
    return VAR6;
}