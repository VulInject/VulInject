static int FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5, char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    assert(VAR8->VAR9 == VAR10);
    assert(VAR4 != NULL);
    if (!strcmp(VAR5, ""))
    {
        FUN2(VAR8, VAR11, "", FUN3(VAR6));
        VAR4->VAR12 = FUN3(VAR6);
        if (VAR4->VAR12 > 1)
            FUN2(VAR8, VAR13, "");
    }
    else if (!strcmp(VAR5, ""))
    {
        if (strlen(VAR6) == 6)
        {
            char VAR14[3];
            uint8_t VAR15;
            uint8_t VAR16;
            uint8_t VAR17;
            VAR14[0] = VAR6[0];
            VAR14[1] = VAR6[1];
            VAR14[2] = '';
            VAR15 = FUN4(VAR14, NULL, 16);
            VAR14[0] = VAR6[2];
            VAR14[1] = VAR6[3];
            VAR16 = FUN4(VAR14, NULL, 16);
            VAR14[0] = VAR6[4];
            VAR14[1] = VAR6[5];
            VAR17 = FUN4(VAR14, NULL, 16);
            FUN2(VAR8, VAR11, "", VAR15, VAR16, VAR17);
            VAR4->VAR15 = VAR15;
            VAR4->VAR16 = VAR16;
            VAR4->VAR17 = VAR17;
        }
    }
    else if (!strcmp(VAR5, ""))
    {
        uint8_t VAR18[] = {0, 0, 1};
        VAR8->VAR19 = 0;
        VAR8->VAR20 = NULL;
        while (*VAR6)
        {
            char VAR21[1024];
            uint8_t VAR22[1024];
            uint32_t VAR23;
            char *VAR24 = VAR21;
            while (*VAR6 && *VAR6 != '' && (VAR24 - VAR21) < sizeof(VAR21) - 1)
            {
                *VAR24++ = *VAR6++;
            }
            *VAR24++ = '';
            if (*VAR6 == '')
                VAR6++;
            VAR23 = FUN5(VAR22, VAR21, sizeof(VAR22));
            if (VAR23)
            {
                VAR25 *VAR26 = FUN6(VAR23 + sizeof(VAR18) + VAR8->VAR19 + VAR27);
                if (VAR26)
                {
                    if (VAR8->VAR19)
                    {
                        memcpy(VAR26, VAR8->VAR20, VAR8->VAR19);
                        FUN7(VAR8->VAR20);
                    }
                    memcpy(VAR26 + VAR8->VAR19, VAR18, sizeof(VAR18));
                    memcpy(VAR26 + VAR8->VAR19 + sizeof(VAR18), VAR22, VAR23);
                    memset(VAR26 + VAR8->VAR19 + sizeof(VAR18) + VAR23, 0, VAR27);
                    VAR8->VAR20 = VAR26;
                    VAR8->VAR19 += sizeof(VAR18) + VAR23;
                }
                else
                {
                    FUN2(VAR8, VAR13, "");
                    return FUN8(VAR28);
                }
            }
        }
        FUN2(VAR8, VAR11, "", VAR8->VAR20, VAR8->VAR19);
    }
    return 0;
}