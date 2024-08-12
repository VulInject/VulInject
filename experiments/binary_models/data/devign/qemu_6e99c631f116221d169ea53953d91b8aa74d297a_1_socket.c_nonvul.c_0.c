static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4, VAR5;
    unsigned VAR6;
    uint8_t VAR7[VAR8];
    const VAR9 *VAR10;
    VAR4 = FUN2(VAR3->VAR11, VAR7, sizeof(VAR7), 0);
    if (VAR4 < 0)
    {
        VAR5 = FUN3();
        if (VAR5 != VAR12)
            goto VAR13;
    }
    else if (VAR4 == 0)
    {
    VAR13:
        FUN4(VAR3, false);
        FUN5(VAR3, false);
        if (VAR3->VAR14 != -1)
        {
            FUN6(VAR3->VAR14, VAR15, NULL, VAR3);
        }
        FUN7(VAR3->VAR11);
        VAR3->VAR11 = -1;
        VAR3->VAR16 = 0;
        VAR3->VAR17 = 0;
        VAR3->VAR18 = 0;
        VAR3->VAR19.VAR20 = true;
        memset(VAR3->VAR10, 0, sizeof(VAR3->VAR10));
        memset(VAR3->VAR19.VAR21, 0, sizeof(VAR3->VAR19.VAR21));
        return;
    }
    VAR10 = VAR7;
    while (VAR4 > 0)
    {
        switch (VAR3->VAR16)
        {
        case 0:
            VAR6 = 4 - VAR3->VAR17;
            if (VAR6 > VAR4)
                VAR6 = VAR4;
            memcpy(VAR3->VAR10 + VAR3->VAR17, VAR10, VAR6);
            VAR10 += VAR6;
            VAR4 -= VAR6;
            VAR3->VAR17 += VAR6;
            if (VAR3->VAR17 == 4)
            {
                VAR3->VAR18 = FUN8(*(VAR22 *)VAR3->VAR10);
                VAR3->VAR17 = 0;
                VAR3->VAR16 = 1;
            }
            break;
        case 1:
            VAR6 = VAR3->VAR18 - VAR3->VAR17;
            if (VAR6 > VAR4)
                VAR6 = VAR4;
            if (VAR3->VAR17 + VAR6 <= sizeof(VAR3->VAR10))
            {
                memcpy(VAR3->VAR10 + VAR3->VAR17, VAR10, VAR6);
            }
            else
            {
                fprintf(VAR23, ""
                                "");
                VAR3->VAR16 = 0;
                goto VAR13;
            }
            VAR3->VAR17 += VAR6;
            VAR10 += VAR6;
            VAR4 -= VAR6;
            if (VAR3->VAR17 >= VAR3->VAR18)
            {
                VAR3->VAR17 = 0;
                VAR3->VAR16 = 0;
                if (FUN9(&VAR3->VAR19, VAR3->VAR10, VAR4, VAR24) == 0)
                {
                    FUN4(VAR3, false);
                    break;
                }
            }
            break;
        }
    }
}