void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    int VAR10 = 0;
    int64_t VAR11 = 0;
    if (VAR4->VAR7 == 1)
    {
        FUN2(VAR2, VAR4, 0, 1, -1);
        VAR4->VAR7 = 0;
        return;
    }
    VAR10 = FUN3(VAR4->VAR12[0]->VAR13->VAR2);
    VAR10 = FUN4(VAR10, VAR14);
    FUN5(VAR4->VAR12, VAR4->VAR7, sizeof(*VAR4->VAR12), &VAR15);
    for (VAR5 = 0; VAR5 < VAR4->VAR7; VAR5++)
    {
        VAR16 *VAR17 = VAR4->VAR12[VAR5];
        if (VAR7 > 0)
        {
            bool VAR18 = true;
            if (VAR8 + VAR17->VAR19.VAR8 > VAR20)
            {
                VAR18 = false;
            }
            if (VAR17->VAR19.VAR21 / VAR22 + VAR9 > VAR10)
            {
                VAR18 = false;
            }
            if (VAR11 + VAR9 != VAR17->VAR11)
            {
                VAR18 = false;
            }
            if (!VAR18)
            {
                FUN2(VAR2, VAR4, VAR6, VAR7, VAR8);
                VAR7 = 0;
            }
        }
        if (VAR7 == 0)
        {
            VAR11 = VAR17->VAR11;
            VAR9 = VAR8 = 0;
            VAR6 = VAR5;
        }
        VAR9 += VAR17->VAR19.VAR21 / VAR22;
        VAR8 += VAR17->VAR19.VAR8;
        VAR7++;
    }
    FUN2(VAR2, VAR4, VAR6, VAR7, VAR8);
    VAR4->VAR7 = 0;
}