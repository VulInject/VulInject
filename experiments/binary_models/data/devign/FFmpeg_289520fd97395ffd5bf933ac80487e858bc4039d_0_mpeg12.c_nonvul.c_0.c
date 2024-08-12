static int FUN1(VAR1 *VAR2, uint16_t VAR3[64], uint16_t VAR4[64], int VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < 64; VAR6++)
    {
        int VAR7 = VAR2->VAR8.VAR9[VAR10[VAR6]];
        int VAR11 = FUN2(&VAR2->VAR12, 8);
        if (VAR11 == 0)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        if (VAR5 && VAR6 == 0 && VAR11 != 8)
        {
            FUN3(VAR2->VAR13, VAR15, "", VAR11);
            VAR11 = 8;
        }
        VAR3[VAR7] = VAR11;
        if (VAR4)
            VAR4[VAR7] = VAR11;
    }
    return 0;
}