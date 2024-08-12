static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    target_ulong VAR6, VAR7, VAR8;
    int VAR9, VAR10 = -1;
    int VAR11, VAR12;
    VAR11 = -1;
    VAR6 = VAR2->VAR13[VAR4];
    for (VAR9 = 0; VAR9 < 8; VAR9++)
    {
        if (VAR3)
        {
            VAR7 = FUN2(VAR6 + (VAR9 * 16));
            VAR8 = FUN2(VAR6 + (VAR9 * 16) + 8);
            VAR12 = FUN3(VAR2, VAR7, VAR8, VAR4, VAR5);
        }
        else
        {
            VAR7 = FUN4(VAR6 + (VAR9 * 8));
            VAR8 = FUN4(VAR6 + (VAR9 * 8) + 4);
            VAR12 = FUN5(VAR2, VAR7, VAR8, VAR4, VAR5);
        }
        if (VAR14 != 0)
        {
            fprintf(VAR15, "" VAR16 "" VAR16 "" VAR16 "" VAR16 "", VAR6 + (VAR9 * 8), VAR7, VAR8, (int)(VAR7 >> 31), VAR4, (int)((VAR7 >> 6) & 1), VAR2->VAR17);
        }
        switch (VAR12)
        {
        case -3:
            return -1;
        case -2:
            VAR11 = -2;
            VAR10 = VAR9;
            break;
        case -1:
        default:
            break;
        case 0:
            VAR11 = 0;
            VAR10 = VAR9;
            goto VAR18;
        }
    }
    if (VAR10 != -1)
    {
    VAR18:
        if (VAR14 != 0)
        {
            fprintf(VAR15, "" VAR19 ""
                             "",
                    VAR2->VAR20, VAR2->VAR21, VAR11);
        }
        VAR8 = VAR2->VAR20;
        if (FUN6(VAR2, &VAR8, VAR11, VAR5) == 1)
        {
            if (VAR3)
            {
                FUN7(VAR6 + (VAR10 * 16) + 8, VAR8);
            }
            else
            {
                FUN8(VAR6 + (VAR10 * 8) + 4, VAR8);
            }
        }
    }
    return VAR11;
}