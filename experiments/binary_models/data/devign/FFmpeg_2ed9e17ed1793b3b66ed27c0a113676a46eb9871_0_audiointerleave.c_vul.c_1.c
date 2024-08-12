int FUN1(VAR1 *VAR2, const int *VAR3, AVRational VAR4)
{
    int VAR5;
    if (!VAR3)
        return -1;
    if (!VAR4.VAR6)
    {
        FUN2(VAR2, VAR7, "");
        return -1;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR8; VAR5++)
    {
        VAR9 *VAR10 = VAR2->VAR11[VAR5];
        VAR12 *VAR13 = VAR10->VAR14;
        if (VAR10->VAR15->VAR16 == VAR17)
        {
            VAR13->VAR18 = (VAR10->VAR15->VAR19 * FUN3(VAR10->VAR15->VAR20)) / 8;
            if (!VAR13->VAR18)
            {
                FUN2(VAR2, VAR7, "");
                return -1;
            }
            VAR13->VAR3 = VAR3;
            VAR13->VAR21 = VAR13->VAR3;
            VAR13->VAR4 = VAR4;
            VAR13->VAR22 = 100 * *VAR13->VAR21;
            VAR13->VAR23 = FUN4(100, *VAR13->VAR21);
        }
    }
    return 0;
}