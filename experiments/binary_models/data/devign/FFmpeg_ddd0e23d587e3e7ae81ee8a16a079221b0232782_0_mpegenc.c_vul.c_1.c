static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
    {
        VAR6 *VAR7 = VAR2->VAR8[VAR4];
        VAR9 *VAR10 = VAR7->VAR11;
        VAR12 *VAR13;
        while ((VAR13 = VAR10->VAR14) && VAR3 > VAR13->VAR15)
        {
            if (VAR10->VAR16 < VAR13->VAR17 || VAR10->VAR14 == VAR10->VAR18)
            {
                FUN2(VAR2, VAR19, "", VAR4, VAR10->VAR16, VAR13->VAR17);
                break;
            }
            VAR10->VAR16 -= VAR13->VAR17;
            VAR10->VAR14 = VAR13->VAR20;
            FUN3(&VAR13);
        }
    }
    return 0;
}