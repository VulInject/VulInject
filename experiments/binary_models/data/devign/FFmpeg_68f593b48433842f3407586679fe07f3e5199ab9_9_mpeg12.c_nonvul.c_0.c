static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14;
    int VAR15;
    VAR5 = (VAR5 - 1) & 0xff;
    if (VAR5 >= VAR13->VAR16)
    {
        fprintf(VAR17, "", VAR5, VAR13->VAR16);
        return VAR18;
    }
    VAR13->VAR19[0] = 1 << (7 + VAR13->VAR20);
    VAR13->VAR19[1] = VAR13->VAR19[0];
    VAR13->VAR19[2] = VAR13->VAR19[0];
    memset(VAR13->VAR21, 0, sizeof(VAR13->VAR21));
    if (VAR13->VAR22)
    {
        VAR13->VAR22 = 0;
        if (FUN2(VAR13, VAR2) < 0)
            return VAR23;
        if (VAR13->VAR2->VAR24 & VAR25)
        {
            FUN3("", VAR13->VAR26, VAR13->VAR27[0][0], VAR13->VAR27[0][1], VAR13->VAR27[1][0], VAR13->VAR27[1][1], VAR13->VAR28 == VAR29 ? "" : (VAR13->VAR28 == VAR30 ? "" : (VAR13->VAR28 == VAR31 ? "" : "")), VAR13->VAR32 ? "" : "", VAR13->VAR33 ? "" : "", VAR13->VAR34 ? "" : "", VAR13->VAR20, VAR13->VAR35, VAR13->VAR36, VAR13->VAR37, VAR13->VAR38, VAR13->VAR39, VAR13->VAR40, VAR13->VAR41 ? "" : "");
        }
    }
    FUN4(&VAR13->VAR42, VAR7, VAR8 * 8);
    VAR13->VAR26 = FUN5(VAR13);
    while (FUN6(&VAR13->VAR42) != 0)
    {
        FUN7(&VAR13->VAR42, 8);
    }
    VAR13->VAR43 = 0;
    for (;;)
    {
        int VAR44 = FUN8(&VAR13->VAR42, VAR45.VAR46, VAR47, 2);
        if (VAR44 < 0)
            return -1;
        if (VAR44 >= 33)
        {
            if (VAR44 == 33)
            {
                VAR13->VAR43 += 33;
            }
        }
        else
        {
            VAR13->VAR43 += VAR44;
            break;
        }
    }
    VAR13->VAR48 = VAR5;
    VAR13->VAR49 = 1;
    for (;;)
    {
        VAR13->VAR50.FUN9(VAR13->VAR51[0]);
        VAR15 = FUN10(VAR13, VAR13->VAR51);
        FUN11("", VAR15);
        if (VAR15 < 0)
            return -1;
        FUN12(VAR13, VAR13->VAR51);
        if (++VAR13->VAR43 >= VAR13->VAR52)
        {
            FUN13(VAR13);
            VAR13->VAR43 = 0;
            VAR13->VAR48++;
            FUN14("", "");
        }
        FUN14("", VAR13->VAR26);
        if (VAR13->VAR49 == 0)
        {
            VAR13->VAR49 = 1;
            for (;;)
            {
                int VAR44 = FUN8(&VAR13->VAR42, VAR45.VAR46, VAR47, 2);
                if (VAR44 < 0)
                    goto VAR53;
                if (VAR44 >= 33)
                {
                    if (VAR44 == 33)
                    {
                        VAR13->VAR49 += 33;
                    }
                }
                else
                {
                    VAR13->VAR49 += VAR44;
                    break;
                }
            }
        }
        if (VAR13->VAR48 >= VAR13->VAR16)
        {
            fprintf(VAR17, "");
            return VAR18;
        }
    }
VAR53:
    FUN15();
    if (VAR13->VAR48 == VAR13->VAR16)
    {
        if (VAR13->VAR54)
            VAR13->VAR26 >>= 1;
        FUN16(VAR13);
        if (VAR13->VAR28 == VAR31 || VAR13->VAR55)
        {
            *VAR4 = *(VAR3 *)&VAR13->VAR56;
        }
        else
        {
            VAR13->VAR57++;
            if (VAR13->VAR58.VAR59[0] == NULL)
            {
                return VAR60;
            }
            else
            {
                *VAR4 = *(VAR3 *)&VAR13->VAR58;
            }
        }
        return VAR61;
    }
    else
    {
        return VAR60;
    }
}