static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12 = 0;
    for (VAR10 = 0; VAR10 < VAR6->VAR13; VAR10++)
    {
        char VAR14[2048];
        const char *VAR15 = VAR6->VAR16[VAR10]->VAR15;
        if (VAR6->VAR16[VAR10]->VAR17 != VAR18)
        {
            FUN2(VAR2, VAR19, "");
            return -1;
        }
        if (FUN3(VAR15, "", 10))
        {
            FUN2(VAR2, VAR19, ""%VAR8\""
                                        "",
                   VAR15);
            return VAR20;
        }
        if (VAR2->VAR21->VAR22 == VAR23)
        {
            long int VAR24;
            char *VAR25;
            if (VAR10 > 0)
            {
                FUN2(VAR2, VAR19, ""
                                            "");
                return VAR20;
            }
            VAR15 += 10;
            VAR24 = FUN4(VAR15, &VAR25, 10);
            if (*VAR25)
                VAR25 += strcspn(VAR25, "") + 1;
            if (*VAR25)
                VAR25 += strcspn(VAR25, "") + 1;
            if (*VAR25)
                VAR25 += strcspn(VAR25, "") + 1;
            snprintf(VAR14, sizeof(VAR14), "", ++VAR8->VAR22, VAR24, VAR25);
            VAR14[strcspn(VAR14, "")] = 0;
            VAR15 = VAR14;
        }
        VAR11 = FUN5(VAR3 + VAR12, VAR15, VAR4 - VAR12);
        if (VAR11 > VAR4 - VAR12 - 1)
        {
            FUN2(VAR2, VAR19, "");
            return -1;
        }
        VAR12 += VAR11;
    }
    return VAR12;
}