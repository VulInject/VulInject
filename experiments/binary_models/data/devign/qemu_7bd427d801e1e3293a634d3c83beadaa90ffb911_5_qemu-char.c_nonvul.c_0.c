static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (!VAR7->VAR10)
    {
        VAR9 = VAR7->VAR11->FUN2(VAR7->VAR11, VAR4, VAR5);
    }
    else
    {
        int VAR12;
        VAR9 = 0;
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            if (VAR7->VAR13)
            {
                char VAR14[64];
                int64_t VAR15;
                int VAR16;
                VAR15 = FUN3(VAR17);
                if (VAR7->VAR18 == -1)
                    VAR7->VAR18 = VAR15;
                VAR15 -= VAR7->VAR18;
                VAR16 = VAR15 / 1000;
                snprintf(VAR14, sizeof(VAR14), "", VAR16 / 3600, (VAR16 / 60) % 60, VAR16 % 60, (int)(VAR15 % 1000));
                VAR7->VAR11->FUN2(VAR7->VAR11, (VAR3 *)VAR14, strlen(VAR14));
                VAR7->VAR13 = 0;
            }
            VAR9 += VAR7->VAR11->FUN2(VAR7->VAR11, VAR4 + VAR12, 1);
            if (VAR4[VAR12] == '')
            {
                VAR7->VAR13 = 1;
            }
        }
    }
    return VAR9;
}