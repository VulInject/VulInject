void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    int VAR10;
    int64_t VAR11 = 0;
    if (VAR4->VAR7 == 1)
    {
        FUN2(VAR2, VAR4, 0, 1, -1);
        VAR4->VAR7 = 0;
        return;
    }
    VAR10 = FUN3(VAR4->VAR12[0]->VAR13->VAR2);
    FUN4(VAR4->VAR12, VAR4->VAR7, sizeof(*VAR4->VAR12), &VAR14);
    for (VAR5 = 0; VAR5 < VAR4->VAR7; VAR5++)
    {
        VAR15 *VAR16 = VAR4->VAR12[VAR5];
        if (VAR7 > 0)
        {
            if (VAR11 + VAR9 != VAR16->VAR11 || VAR8 > FUN5(VAR2) - VAR16->VAR17.VAR8 || VAR16->VAR17.VAR18 / VAR19 > VAR10 || VAR9 > VAR10 - VAR16->VAR17.VAR18 / VAR19)
            {
                FUN2(VAR2, VAR4, VAR6, VAR7, VAR8);
                VAR7 = 0;
            }
        }
        if (VAR7 == 0)
        {
            VAR11 = VAR16->VAR11;
            VAR9 = VAR8 = 0;
            VAR6 = VAR5;
        }
        VAR9 += VAR16->VAR17.VAR18 / VAR19;
        VAR8 += VAR16->VAR17.VAR8;
        VAR7++;
    }
    FUN2(VAR2, VAR4, VAR6, VAR7, VAR8);
    VAR4->VAR7 = 0;
}