static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    char VAR6[VAR7];
    char VAR8[VAR9];
    unsigned long long VAR10, VAR11, VAR12, VAR13;
    char *VAR14, *VAR15;
    uint8_t VAR16;
    VAR4 = FUN2(VAR2, "", VAR6, sizeof(VAR6));
    if (VAR4)
    {
        return VAR4;
    }
    VAR5 = open(VAR6, VAR17);
    if (VAR5 == -1)
    {
        FUN3("", VAR6, strerror(VAR18));
        return -VAR18;
    }
    do
    {
        VAR4 = read(VAR5, &VAR8, sizeof(VAR8) - 1);
        if (VAR4 < 0 && VAR18 != VAR19)
        {
            VAR4 = -VAR18;
            goto VAR20;
        }
    } while (VAR4 < 0);
    VAR8[VAR4] = 0;
    VAR4 = 0;
    VAR15 = VAR8;
    for (VAR3 = 0; VAR3 < VAR21; VAR3++)
    {
        VAR16 = 0;
        VAR10 = FUN4(VAR15, &VAR14, 16);
        if (*VAR14 != '' || VAR15 == VAR14)
        {
            break;
        }
        VAR15 = VAR14 + 1;
        VAR11 = FUN4(VAR15, &VAR14, 16);
        if (*VAR14 != '' || VAR15 == VAR14)
        {
            break;
        }
        VAR15 = VAR14 + 1;
        VAR12 = FUN4(VAR15, &VAR14, 16);
        if (*VAR14 != '' || VAR15 == VAR14)
        {
            break;
        }
        VAR15 = VAR14 + 1;
        if (VAR10)
        {
            VAR13 = VAR11 - VAR10 + 1;
        }
        else
        {
            VAR13 = 0;
        }
        if (VAR12 & VAR22)
        {
            VAR16 |= VAR23;
        }
        if (VAR12 & VAR24)
        {
            VAR16 |= VAR25;
        }
        if (VAR12 & VAR26)
        {
            VAR16 |= VAR27;
        }
        if (VAR12 & VAR28)
        {
            VAR16 |= VAR29;
        }
        if (VAR3 < VAR30)
        {
            VAR2->VAR31[VAR3].VAR32 = VAR10;
            VAR2->VAR31[VAR3].VAR13 = VAR13;
            VAR2->VAR31[VAR3].VAR16 = VAR16;
            VAR2->VAR31[VAR3].VAR33 = VAR12 & VAR34;
        }
        else
        {
            VAR2->VAR35.VAR32 = VAR10;
            VAR2->VAR35.VAR13 = VAR13;
            VAR2->VAR35.VAR16 = VAR16;
            VAR2->VAR35.VAR33 = VAR12 & VAR34;
        }
    }
    if (VAR3 != VAR21)
    {
        VAR4 = -VAR36;
    }
VAR20:
    close(VAR5);
    return VAR4;
}