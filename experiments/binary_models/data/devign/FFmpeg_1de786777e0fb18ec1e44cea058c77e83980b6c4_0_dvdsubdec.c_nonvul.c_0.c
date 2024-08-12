static int FUN1(VAR1 *VAR2, char *VAR3)
{
    VAR4 *VAR5;
    char VAR6[12];
    uint32_t VAR7, VAR8, VAR9, VAR10;
    uint8_t VAR11, VAR12, VAR13, VAR14[65], *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23 = 0;
    const VAR24 *VAR25 = VAR26 + VAR27;
    VAR2->VAR28 = 0;
    if ((VAR5 = fopen(VAR3, "")) == NULL)
    {
        FUN2(VAR2, VAR29, ""%VAR30\"", VAR3, strerror(VAR31));
        return VAR32;
    }
    if (fread(VAR6, 12, 1, VAR5) != 1 || memcmp(VAR6, "", 12))
    {
        FUN2(VAR2, VAR29, ""%VAR30\"", VAR3);
        VAR23 = VAR33;
        goto VAR34;
    }
    if (FUN3(VAR5, 0xCC, VAR35) == -1)
    {
        VAR23 = FUN4(VAR31);
        goto VAR34;
    }
    if (fread(&VAR7, 4, 1, VAR5) == 1)
    {
        VAR8 = FUN5(VAR7) * 2048;
        if (FUN3(VAR5, VAR8 + 0x0C, VAR35) == -1)
        {
            VAR23 = FUN4(VAR31);
            goto VAR34;
        }
        if (fread(&VAR9, 4, 1, VAR5) == 1)
        {
            VAR10 = VAR8 + FUN5(VAR9);
            if (FUN3(VAR5, VAR10 + 0xA4, VAR35) == -1)
            {
                VAR23 = FUN4(VAR31);
                goto VAR34;
            }
            if (fread(VAR14, 64, 1, VAR5) == 1)
            {
                VAR15 = VAR14;
                for (VAR16 = 0; VAR16 < 16; VAR16++)
                {
                    VAR17 = *++VAR15;
                    VAR19 = *++VAR15;
                    VAR18 = *++VAR15;
                    FUN6(VAR18, VAR19);
                    FUN7(VAR11, VAR12, VAR13, VAR17);
                    VAR2->VAR36[VAR16] = (VAR11 << 16) + (VAR12 << 8) + VAR13;
                    VAR15++;
                }
                VAR2->VAR28 = 1;
            }
        }
    }
    if (VAR2->VAR28 == 0)
    {
        FUN2(VAR2, VAR29, ""%VAR30\"", VAR3);
        VAR23 = VAR33;
    }
VAR34:
    fclose(VAR5);
    return VAR23;
}