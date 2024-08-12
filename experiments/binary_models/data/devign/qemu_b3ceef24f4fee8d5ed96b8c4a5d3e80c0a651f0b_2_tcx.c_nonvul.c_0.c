static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    ram_addr_t VAR4, VAR5, VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12, *VAR13;
    void (*VAR14)(VAR2 * VAR15, VAR11 * VAR16, const VAR11 *VAR17, int VAR18);
    if (VAR3->VAR10->VAR19 == 0)
        return;
    VAR4 = VAR3->VAR20;
    VAR8 = -1;
    VAR5 = 0xffffffff;
    VAR6 = 0;
    VAR12 = VAR3->VAR10->VAR21;
    VAR13 = VAR3->VAR22;
    VAR9 = VAR3->VAR10->VAR23;
    VAR10 = 1024;
    switch (VAR3->VAR10->VAR19)
    {
    case 32:
        VAR14 = VAR24;
        break;
    case 15:
    case 16:
        VAR14 = VAR25;
        break;
    default:
    case 8:
        VAR14 = VAR26;
        break;
    case 0:
        return;
    }
    for (VAR7 = 0; VAR7 < VAR3->VAR27; VAR7 += 4, VAR4 += VAR28)
    {
        if (FUN2(VAR4, VAR29))
        {
            if (VAR8 < 0)
                VAR8 = VAR7;
            if (VAR4 < VAR5)
                VAR5 = VAR4;
            if (VAR4 > VAR6)
                VAR6 = VAR4;
            FUN3(VAR3, VAR12, VAR13, VAR3->VAR18);
            VAR12 += VAR9;
            VAR13 += VAR10;
            FUN3(VAR3, VAR12, VAR13, VAR3->VAR18);
            VAR12 += VAR9;
            VAR13 += VAR10;
            FUN3(VAR3, VAR12, VAR13, VAR3->VAR18);
            VAR12 += VAR9;
            VAR13 += VAR10;
            FUN3(VAR3, VAR12, VAR13, VAR3->VAR18);
            VAR12 += VAR9;
            VAR13 += VAR10;
        }
        else
        {
            if (VAR8 >= 0)
            {
                FUN4(VAR3->VAR10, 0, VAR8, VAR3->VAR18, VAR7 - VAR8);
                VAR8 = -1;
            }
            VAR12 += VAR9 * 4;
            VAR13 += VAR10 * 4;
        }
    }
    if (VAR8 >= 0)
    {
        FUN4(VAR3->VAR10, 0, VAR8, VAR3->VAR18, VAR7 - VAR8);
    }
    if (VAR5 <= VAR6)
    {
        FUN5(VAR5, VAR6 + VAR28, VAR29);
    }
}