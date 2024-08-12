void FUN1(VAR1 *VAR2, hwaddr VAR3, int VAR4)
{
    int VAR5, VAR6;
    int VAR7;
    VAR5 = FUN2(false, VAR3, &VAR8);
    VAR7 = 0;
    while (VAR7 < VAR4)
    {
        struct VAR9 *VAR10;
        int VAR11 = VAR4 < VAR12 ? VAR4 : VAR12;
        char VAR13[sizeof(*VAR10) + VAR11 * VAR14];
        VAR6 = read(VAR5, VAR13, sizeof(VAR13));
        if (VAR6 < 0)
        {
            FUN3("");
        }
        VAR10 = (struct VAR9 *)VAR13;
        while ((VAR7 < VAR4) && ((char *)VAR10 < (VAR13 + VAR6)))
        {
            int VAR15 = VAR10->VAR16, VAR17 = VAR10->VAR18;
            if (VAR10->VAR19 != (VAR3 + VAR7))
            {
                FUN3("" VAR20 "" VAR21 "", VAR10->VAR19, VAR3, VAR7);
            }
            if (VAR4 - VAR7 < VAR17)
            {
                VAR17 = VAR4 - VAR7;
            }
            memcpy(VAR2 + VAR7, VAR10 + 1, VAR14 * VAR17);
            VAR7 += VAR17;
            if ((VAR4 - VAR7) < VAR15)
            {
                VAR15 = VAR4 - VAR7;
            }
            memset(VAR2 + VAR7, 0, VAR15 * VAR14);
            VAR7 += VAR15;
            VAR10 = (struct VAR9 *)((char *)(VAR10 + 1) + VAR14 * VAR10->VAR18);
        }
    }
    close(VAR5);
}