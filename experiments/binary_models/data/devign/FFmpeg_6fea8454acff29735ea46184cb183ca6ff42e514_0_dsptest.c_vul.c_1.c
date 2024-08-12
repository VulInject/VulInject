static FUN1(int VAR1)
{
    const struct VAR2 *VAR3 = VAR2;
    const int VAR4 = 720;
    char VAR5[32768];
    char *VAR6 = (char *)(((long)VAR5 + 32) & ~0xf);
    int VAR7 = 0;
    while (VAR3->VAR8)
    {
        int VAR9;
        uint64_t VAR10, VAR11;
        op_pixels_func VAR12 = VAR3->VAR12;
        char *VAR13 = VAR6;
        if (!(VAR3->VAR14 & VAR14))
            continue;
        FUN2("", VAR3->VAR8);
        FUN3(VAR15);
        VAR11 = FUN4();
        for (VAR9 = 0; VAR9 < 100000; VAR9++)
        {
            FUN5(VAR13, VAR13 + 1000, VAR4, 16);
            VAR13 += VAR1;
            if (VAR13 > VAR6 + 20000)
                VAR13 = VAR6;
        }
        VAR10 = FUN4();
        FUN6();
        FUN2("", (int)(VAR10 - VAR11));
        VAR7 += (VAR10 - VAR11) / 100000;
        if (VAR3->VAR14 & VAR16)
            FUN7("");
        VAR3++;
    }
    FUN2("", VAR7);
}