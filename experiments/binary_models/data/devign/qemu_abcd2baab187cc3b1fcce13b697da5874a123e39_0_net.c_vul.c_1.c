static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4, VAR5, VAR6;
    uint8_t VAR7[4096];
    const VAR8 *VAR9;
    VAR5 = recv(VAR3->VAR10, VAR7, sizeof(VAR7), 0);
    if (VAR5 < 0)
    {
        VAR6 = FUN2();
        if (VAR6 != VAR11)
            goto VAR12;
    }
    else if (VAR5 == 0)
    {
    VAR12:
        FUN3(VAR3->VAR10, NULL, NULL, NULL);
        FUN4(VAR3->VAR10);
        return;
    }
    VAR9 = VAR7;
    while (VAR5 > 0)
    {
        switch (VAR3->VAR13)
        {
        case 0:
            VAR4 = 4 - VAR3->VAR14;
            if (VAR4 > VAR5)
                VAR4 = VAR5;
            memcpy(VAR3->VAR9 + VAR3->VAR14, VAR9, VAR4);
            VAR9 += VAR4;
            VAR5 -= VAR4;
            VAR3->VAR14 += VAR4;
            if (VAR3->VAR14 == 4)
            {
                VAR3->VAR15 = FUN5(*(VAR16 *)VAR3->VAR9);
                VAR3->VAR14 = 0;
                VAR3->VAR13 = 1;
            }
            break;
        case 1:
            VAR4 = VAR3->VAR15 - VAR3->VAR14;
            if (VAR4 > VAR5)
                VAR4 = VAR5;
            memcpy(VAR3->VAR9 + VAR3->VAR14, VAR9, VAR4);
            VAR3->VAR14 += VAR4;
            VAR9 += VAR4;
            VAR5 -= VAR4;
            if (VAR3->VAR14 >= VAR3->VAR15)
            {
                FUN6(VAR3->VAR17, VAR3->VAR9, VAR3->VAR15);
                VAR3->VAR14 = 0;
                VAR3->VAR13 = 0;
            }
            break;
        }
    }
}