static int FUN1(struct VAR1 *VAR1)
{
    XenGnttab VAR2 = VAR1->VAR3->VAR4.VAR5;
    uint32_t VAR6[VAR7];
    uint32_t VAR8[VAR7];
    void *VAR9[VAR7];
    int VAR10, VAR11, VAR12 = 0;
    VAR13 *VAR14;
    if (VAR1->VAR15.VAR16 == 0 || VAR1->VAR17 == 1)
    {
        return 0;
    }
    if (VAR1->VAR3->VAR18)
    {
        for (VAR10 = 0; VAR10 < VAR1->VAR15.VAR16; VAR10++)
        {
            VAR14 = FUN2(VAR1->VAR3->VAR19, FUN3(VAR1->VAR8[VAR10]));
            if (VAR14 != NULL)
            {
                VAR9[VAR10] = VAR14->VAR9;
                FUN4(&VAR1->VAR3->VAR4, 3, "" VAR20 "", VAR1->VAR8[VAR10]);
            }
            else
            {
                VAR6[VAR12] = VAR1->VAR6[VAR10];
                VAR8[VAR12] = VAR1->VAR8[VAR10];
                VAR9[VAR10] = NULL;
                VAR12++;
            }
        }
        VAR1->VAR21 = VAR22 | VAR23;
    }
    else
    {
        memcpy(VAR8, VAR1->VAR8, sizeof(VAR8));
        memcpy(VAR6, VAR1->VAR6, sizeof(VAR6));
        memset(VAR9, 0, sizeof(VAR9));
        VAR12 = VAR1->VAR15.VAR16;
    }
    if (VAR24 && VAR12)
    {
        VAR1->VAR25 = FUN5(VAR2, VAR12, VAR6, VAR8, VAR1->VAR21);
        if (VAR1->VAR25 == NULL)
        {
            FUN4(&VAR1->VAR3->VAR4, 0, "", VAR12, strerror(VAR26), VAR1->VAR3->VAR27);
            return -1;
        }
        for (VAR10 = 0, VAR11 = 0; VAR10 < VAR1->VAR15.VAR16; VAR10++)
        {
            if (VAR9[VAR10] == NULL)
            {
                VAR9[VAR10] = VAR1->VAR25 + (VAR11++) * VAR28;
            }
        }
        VAR1->VAR3->VAR27 += VAR12;
    }
    else if (VAR12)
    {
        for (VAR10 = 0; VAR10 < VAR12; VAR10++)
        {
            VAR1->VAR9[VAR10] = FUN6(VAR2, VAR6[VAR10], VAR8[VAR10], VAR1->VAR21);
            if (VAR1->VAR9[VAR10] == NULL)
            {
                FUN4(&VAR1->VAR3->VAR4, 0, "", VAR8[VAR10], strerror(VAR26), VAR1->VAR3->VAR27);
                VAR1->VAR17 = 1;
                FUN7(VAR1);
                return -1;
            }
            VAR1->VAR3->VAR27++;
        }
        for (VAR10 = 0, VAR11 = 0; VAR10 < VAR1->VAR15.VAR16; VAR10++)
        {
            if (VAR9[VAR10] == NULL)
            {
                VAR9[VAR10] = VAR1->VAR9[VAR11++];
            }
        }
    }
    if (VAR1->VAR3->VAR18)
    {
        while ((VAR1->VAR3->VAR29 < VAR1->VAR3->VAR30) && VAR12)
        {
            VAR14 = FUN8(sizeof(*VAR14));
            VAR12--;
            if (VAR24)
            {
                VAR14->VAR9 = VAR1->VAR25 + (VAR12)*VAR28;
            }
            else
            {
                VAR14->VAR9 = VAR1->VAR9[VAR12];
            }
            VAR14->VAR3 = VAR1->VAR3;
            FUN4(&VAR1->VAR3->VAR4, 3, "" VAR20 "", VAR8[VAR12], VAR14->VAR9);
            FUN9(VAR1->VAR3->VAR19, FUN3(VAR8[VAR12]), VAR14);
            VAR1->VAR3->VAR29++;
        }
    }
    for (VAR10 = 0; VAR10 < VAR1->VAR15.VAR16; VAR10++)
    {
        VAR1->VAR15.VAR31[VAR10].VAR32 += (VAR33)VAR9[VAR10];
    }
    VAR1->VAR17 = 1;
    VAR1->VAR34 = VAR12;
    return 0;
}