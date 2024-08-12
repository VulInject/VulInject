static int FUN1(VAR1 *VAR2, void *VAR3)
{
    uint32_t VAR4[] = {FUN2(0x4), FUN2(0x0), FUN2(0x0), FUN2(0x0), FUN2(0x0)};
    char VAR5[32];
    hwaddr VAR6, VAR7, VAR8;
    uint64_t VAR9[2];
    int VAR10, VAR11;
    if (VAR12 > 1 && VAR13[0] < VAR14)
    {
        VAR6 = VAR13[0];
    }
    else
    {
        VAR6 = VAR14;
    }
    VAR9[0] = 0;
    VAR9[1] = FUN3(VAR2->VAR15);
    VAR11 = FUN4(VAR3, 0, "");
    FUN5(VAR11);
    FUN5((FUN6(VAR3, VAR11, "", "")));
    FUN5((FUN7(VAR3, VAR11, "", VAR9, sizeof(VAR9))));
    FUN5((FUN7(VAR3, VAR11, "", VAR4, sizeof(VAR4))));
    if (VAR6 > VAR2->VAR15)
    {
        VAR9[0] = FUN3(VAR2->VAR15);
        VAR9[1] = FUN3(VAR6 - VAR2->VAR15);
        sprintf(VAR5, "" VAR16, VAR2->VAR15);
        VAR11 = FUN4(VAR3, 0, VAR5);
        FUN5(VAR11);
        FUN5((FUN6(VAR3, VAR11, "", "")));
        FUN5((FUN7(VAR3, VAR11, "", VAR9, sizeof(VAR9))));
        FUN5((FUN7(VAR3, VAR11, "", VAR4, sizeof(VAR4))));
    }
    VAR7 = VAR6;
    for (VAR10 = 1; VAR10 < VAR12; VAR10++)
    {
        VAR9[0] = FUN3(VAR7);
        if (VAR7 >= VAR14)
        {
            VAR8 = 0;
        }
        else
        {
            VAR8 = VAR13[VAR10];
            if (VAR8 > VAR14 - VAR7)
            {
                VAR8 = VAR14 - VAR7;
            }
        }
        VAR9[1] = FUN3(VAR8);
        VAR4[3] = VAR4[4] = FUN2(VAR10);
        sprintf(VAR5, "" VAR16, VAR7);
        VAR11 = FUN4(VAR3, 0, VAR5);
        FUN5(VAR11);
        FUN5((FUN6(VAR3, VAR11, "", "")));
        FUN5((FUN7(VAR3, VAR11, "", VAR9, sizeof(VAR9))));
        FUN5((FUN7(VAR3, VAR11, "", VAR4, sizeof(VAR4))));
        VAR7 += VAR8;
    }
    return 0;
}