static int FUN1(VAR1 *VAR2, size_t VAR3, size_t VAR4, VAR5 *VAR6)
{
    int VAR7;
    size_t VAR8 = VAR3 + VAR4;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        VAR10 *VAR11 = &VAR2->VAR12[VAR7];
        size_t VAR13 = (VAR11->VAR14 + VAR11->VAR15);
        size_t VAR16 = (VAR11->VAR14 + VAR11->VAR17);
        if (!VAR11->VAR18)
            continue;
        if (!VAR11->VAR15)
            continue;
        if ((VAR3 >= VAR11->VAR14) && (VAR3 <= VAR13) && (VAR8 >= VAR11->VAR14) && (VAR8 <= VAR13))
        {
            char *VAR19 = VAR11->VAR18 + (VAR3 - VAR11->VAR14);
            FUN2(VAR6->VAR20, 0, VAR19, VAR4);
            VAR6->VAR21.FUN3(VAR6->VAR21.VAR22, 0);
            return VAR23;
        }
        if (VAR11->VAR24 && (VAR3 >= VAR11->VAR14) && (VAR3 <= VAR16) && (VAR8 >= VAR11->VAR14) && (VAR8 <= VAR16))
        {
            int VAR25;
            VAR6->VAR3 = VAR3 - VAR11->VAR14;
            VAR6->VAR8 = VAR6->VAR3 + VAR4;
            for (VAR25 = 0; VAR25 < VAR26; VAR25++)
            {
                if (!VAR11->VAR6[VAR25])
                {
                    VAR11->VAR6[VAR25] = VAR6;
                    return VAR27;
                }
            }
        }
    }
    return VAR28;
}