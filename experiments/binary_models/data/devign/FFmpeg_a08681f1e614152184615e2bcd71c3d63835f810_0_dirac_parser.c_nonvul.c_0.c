static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 **VAR7, int *VAR8)
{
    int VAR9 = (VAR2->VAR10 == VAR11 && VAR2->VAR12 == VAR11);
    VAR13 *VAR14 = VAR2->VAR15;
    if (VAR14->VAR16)
    {
        memmove(VAR14->VAR17, VAR14->VAR17 + VAR14->VAR16, VAR14->VAR18 - VAR14->VAR16);
        VAR14->VAR18 -= VAR14->VAR16;
        VAR14->VAR16 = 0;
        if (*VAR8 == 0 && VAR14->VAR17[4] == 0x10)
        {
            *VAR7 = VAR14->VAR17;
            *VAR8 = VAR14->VAR18;
            return 0;
        }
    }
    if (VAR5 == -1)
    {
        void *VAR19 = FUN2(VAR14->VAR17, &VAR14->VAR20, VAR14->VAR18 + (*VAR8 - VAR14->VAR21));
        if (!VAR19)
            return FUN3(VAR22);
        VAR14->VAR17 = VAR19;
        memcpy(VAR14->VAR17 + VAR14->VAR18, (*VAR7 + VAR14->VAR21), *VAR8 - VAR14->VAR21);
        VAR14->VAR18 += *VAR8 - VAR14->VAR21;
        return -1;
    }
    else
    {
        DiracParseUnit VAR23, VAR24;
        void *VAR19 = FUN2(VAR14->VAR17, &VAR14->VAR20, VAR14->VAR18 + VAR5);
        if (!VAR19)
            return FUN3(VAR22);
        VAR14->VAR17 = VAR19;
        memcpy(VAR14->VAR17 + VAR14->VAR18, *VAR7, VAR5);
        VAR14->VAR18 += VAR5;
        if (!FUN4(&VAR23, VAR14, VAR14->VAR18 - 13) || !FUN4(&VAR24, VAR14, VAR14->VAR18 - 13 - VAR23.VAR25) || VAR24.VAR26 != VAR23.VAR25 || VAR14->VAR18 < VAR14->VAR27 + 13LL + VAR23.VAR25)
        {
            VAR14->VAR18 -= 9;
            *VAR8 = VAR5 - 9;
            VAR14->VAR28 = 9;
            return -1;
        }
        VAR14->VAR29 = VAR14->VAR17 + VAR14->VAR18 - 13 - VAR23.VAR25 - VAR14->VAR27;
        VAR14->VAR27 += VAR24.VAR26;
        if ((VAR24.VAR30 & 0x08) != 0x08)
        {
            VAR14->VAR28 = 9;
            *VAR8 = VAR5;
            return -1;
        }
        if (VAR9 && VAR23.VAR25 >= 13)
        {
            VAR6 *VAR31 = VAR14->VAR17 + VAR14->VAR18 - 13 - VAR23.VAR25;
            int VAR10 = FUN5(VAR31 + 13);
            if (VAR2->VAR32 == 0 && VAR2->VAR33 == 0)
                VAR2->VAR12 = VAR10 - 1;
            else
                VAR2->VAR12 = VAR2->VAR33 + 1;
            VAR2->VAR10 = VAR10;
            if (!VAR4->VAR34 && (VAR31[4] & 0x03))
                VAR4->VAR34 = 1;
        }
        if (VAR4->VAR34 && VAR2->VAR10 == VAR2->VAR12)
            VAR2->VAR35 = VAR36;
        *VAR7 = VAR14->VAR29;
        *VAR8 = VAR14->VAR27;
        VAR14->VAR27 = 0;
        VAR14->VAR16 = VAR14->VAR18 - 13;
        VAR14->VAR28 = 9;
    }
    return VAR5;
}