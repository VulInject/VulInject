static void FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4, VAR5;
    for (VAR4 = 0; VAR2[VAR4].VAR6; VAR4++)
    {
        void *VAR7 = (char *)VAR3 + VAR2[VAR4].VAR8;
        switch (VAR2[VAR4].VAR9)
        {
        case VAR10:
        case VAR11:
            FUN2(VAR7);
            break;
        case VAR12:
            FUN2(&((VAR13 *)VAR7)->VAR3);
            break;
        case VAR14:
        case VAR15:
            if (VAR2[VAR4].VAR16)
            {
                VAR17 *VAR18 = VAR7;
                char *VAR19 = VAR18->VAR20;
                for (VAR5 = 0; VAR5 < VAR18->VAR21; VAR5++, VAR19 += VAR2[VAR4].VAR16)
                    FUN1(VAR2[VAR4].VAR22.VAR23, VAR19);
                FUN2(&VAR18->VAR20);
            }
            else
                FUN1(VAR2[VAR4].VAR22.VAR23, VAR7);
        default:
            break;
        }
    }