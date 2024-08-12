static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    int VAR9 = 0;
    if (VAR2->VAR10.VAR11[1] & 0x2)
    {
        FUN3("");
        return -1;
    }
    if (VAR2->VAR10.VAR11[1] & 0x1)
    {
        uint8_t VAR12 = VAR2->VAR10.VAR11[2];
        if (VAR2->VAR10.VAR13 < 4)
        {
            FUN3(""
                 "",
                 VAR12, VAR2->VAR10.VAR13);
            return -1;
        }
        if (FUN4(VAR6->VAR14) == VAR15)
        {
            VAR4[VAR9++] = 5;
        }
        else
        {
            VAR4[VAR9++] = 0;
        }
        VAR4[VAR9++] = VAR12;
        VAR4[VAR9++] = 0x00;
        switch (VAR12)
        {
        case 0x00:
            FUN5(""
                    "",
                    VAR2->VAR10.VAR13);
            VAR4[VAR9++] = 4;
            VAR4[VAR9++] = 0x00;
            VAR4[VAR9++] = 0x80;
            VAR4[VAR9++] = 0x83;
            VAR4[VAR9++] = 0xb0;
            break;
        case 0x80:
        {
            const char *VAR16 = VAR2->VAR8->VAR17.VAR18->VAR16 ? VAR2->VAR8->VAR17.VAR18->VAR16 : "";
            int VAR19 = strlen(VAR16);
            if (VAR19 > VAR2->VAR10.VAR13)
                VAR19 = VAR2->VAR10.VAR13;
            if (VAR19 > 20)
                VAR19 = 20;
            FUN5(""
                    "",
                    VAR2->VAR10.VAR13);
            VAR4[VAR9++] = VAR19;
            memcpy(VAR4 + VAR9, VAR16, VAR19);
            VAR9 += VAR19;
            break;
        }
        case 0x83:
        {
            int VAR20 = 255 - 8;
            int VAR21 = strlen(FUN6(VAR6->VAR14));
            if (VAR21 > VAR20)
                VAR21 = VAR20;
            FUN5(""
                    "",
                    VAR2->VAR10.VAR13);
            VAR4[VAR9++] = 3 + VAR21;
            VAR4[VAR9++] = 0x2;
            VAR4[VAR9++] = 0;
            VAR4[VAR9++] = 0;
            VAR4[VAR9++] = VAR21;
            memcpy(VAR4 + VAR9, FUN6(VAR6->VAR14), VAR21);
            VAR9 += VAR21;
            break;
        }
        case 0xb0:
        {
            unsigned int VAR22 = VAR6->VAR7.VAR17.VAR22 / VAR6->VAR7.VAR23;
            unsigned int VAR24 = VAR6->VAR7.VAR17.VAR24 / VAR6->VAR7.VAR23;
            VAR4[3] = VAR9 = 0x3c;
            memset(VAR4 + 4, 0, VAR9 - 4);
            VAR4[6] = (VAR22 >> 8) & 0xff;
            VAR4[7] = VAR22 & 0xff;
            VAR4[12] = (VAR24 >> 24) & 0xff;
            VAR4[13] = (VAR24 >> 16) & 0xff;
            VAR4[14] = (VAR24 >> 8) & 0xff;
            VAR4[15] = VAR24 & 0xff;
            break;
        }
        default:
            FUN3(""
                 "",
                 VAR12, VAR2->VAR10.VAR13);
            return -1;
        }
        return VAR9;
    }
    if (VAR2->VAR10.VAR11[2] != 0)
    {
        FUN3(""
             "",
             VAR2->VAR10.VAR11[2]);
        return -1;
    }
    if (VAR2->VAR10.VAR13 < 5)
    {
        FUN3(""
             "",
             VAR2->VAR10.VAR13);
        return -1;
    }
    VAR9 = VAR2->VAR10.VAR13;
    if (VAR9 > VAR25)
        VAR9 = VAR25;
    memset(VAR4, 0, VAR9);
    if (VAR2->VAR26 || VAR2->VAR10.VAR11[1] >> 5)
    {
        VAR4[0] = 0x7f;
        return VAR9;
    }
    if (FUN4(VAR6->VAR14) == VAR15)
    {
        VAR4[0] = 5;
        VAR4[1] = 0x80;
        memcpy(&VAR4[16], "", 16);
    }
    else
    {
        VAR4[0] = 0;
        memcpy(&VAR4[16], "", 16);
    }
    memcpy(&VAR4[8], "", 8);
    memcpy(&VAR4[32], VAR6->VAR27 ? VAR6->VAR27 : VAR28, 4);
    VAR4[2] = 5;
    VAR4[3] = 2;
    if (VAR9 > 36)
    {
        VAR4[4] = VAR9 - 5;
    }
    else
    {
        VAR4[4] = 36 - 5;
    }
    VAR4[7] = 0x10 | (VAR2->VAR29->VAR30 ? 0x02 : 0);
    return VAR9;
}