static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = -1;
    int VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = 0;
    int VAR12;
    uint32_t VAR13 = 0;
    for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    {
        VAR3 = (VAR3 << 8) + VAR2->VAR15[VAR12];
        if ((VAR3 & 0xffffff00) == 0x100)
        {
            switch (VAR3)
            {
            case VAR16:
                VAR5++;
                break;
            case VAR17:
                VAR4++;
                break;
            case VAR18:
                VAR7++;
                break;
            case 0x1b6:
                VAR10++;
                break;
            }
            if (VAR3 >= VAR19 && VAR3 <= 0x1af)
            {
                if (VAR13 >= VAR19 && VAR13 <= 0x1af)
                {
                    if (VAR3 >= VAR13)
                        VAR6++;
                    else
                        VAR11++;
                }
                else
                {
                    if (VAR3 == VAR19)
                        VAR6++;
                    else
                        VAR11++;
                }
            }
            if ((VAR3 & 0x1f0) == VAR20)
                VAR8++;
            else if ((VAR3 & 0x1e0) == VAR21)
                VAR9++;
            VAR13 = VAR3;
        }
    }
    if (VAR5 && VAR5 * 9 <= VAR4 * 10 && VAR4 * 9 <= VAR6 * 10 && !VAR7 && !VAR9 && !VAR10 && VAR6 > VAR11)
    {
        if (VAR8)
            return VAR22 / 8;
        else
            return VAR4 > 1 ? VAR22 / 2 + 1 : VAR22 / 4;
    }
    return 0;
}