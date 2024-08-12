static int FUN1(const char *VAR1, const char *VAR2)
{
    int VAR3, VAR4;
    int VAR5;
    uint32_t VAR6;
    char *VAR7, *VAR8, *VAR9;
    const char *VAR10, *VAR11;
    VMDK4Header VAR12;
    uint32_t VAR13, VAR14;
    int64_t VAR15, VAR16, VAR17, VAR18;
    char VAR19[VAR20], VAR21[VAR20], VAR22[VAR23];
    static const char VAR24[] = ""
                                        ""
                                        ""
                                        ""
                                        ""VAR25\""
                                        ""%VAR26\""
                                        ""
                                        ""
                                        ""%VAR26\""
                                        ""
                                        ""
                                        ""
                                        "";
    VAR3 = open(VAR1, VAR27 | VAR28 | VAR29 | VAR30 | VAR31, 0644);
    if (VAR3 < 0)
        return -VAR32;
    VAR4 = open(VAR2, VAR33 | VAR30 | VAR31);
    if (VAR4 < 0)
    {
        close(VAR3);
        return -VAR32;
    }
    if (FUN2(VAR4, 0x0, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (read(VAR4, VAR22, VAR23) != VAR23)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (FUN2(VAR3, 0x0, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (write(VAR3, VAR22, VAR23) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    memset(&VAR12, 0, sizeof(VAR12));
    memcpy(&VAR12, &VAR22[4], sizeof(VAR12));
    if (FUN3(VAR3, VAR12.VAR36 << 9))
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (FUN2(VAR4, 0x200, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (read(VAR4, VAR19, VAR20) != VAR20)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if ((VAR7 = strstr(VAR19, "")) != NULL)
    {
        VAR7 += sizeof("");
        sscanf(VAR7, "", &VAR6);
    }
    VAR10 = VAR1;
    if ((VAR11 = strrchr(VAR10, '')) != NULL)
        VAR10 = VAR11 + 1;
    if ((VAR11 = strrchr(VAR10, '')) != NULL)
        VAR10 = VAR11 + 1;
    if ((VAR11 = strrchr(VAR10, '')) != NULL)
        VAR10 = VAR11 + 1;
    snprintf(VAR21, sizeof(VAR21), VAR24, VAR6, VAR6, VAR2, (VAR37)VAR12.VAR17, VAR10);
    if (FUN2(VAR3, 0x200, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    if (write(VAR3, VAR21, strlen(VAR21)) == -1)
    {
        VAR5 = -VAR32;
        goto VAR35;
    }
    VAR15 = VAR12.VAR15 * VAR38;
    VAR16 = VAR12.VAR16 * VAR38;
    VAR17 = VAR12.VAR17 * VAR38;
    VAR18 = (VAR39)VAR12.VAR40 * VAR12.VAR41 * VAR38;
    if (!VAR18)
    {
        VAR5 = -VAR42;
        goto VAR35;
    }
    VAR13 = (VAR37)(VAR17 / VAR18);
    VAR14 = VAR13 * sizeof(VAR37);
    VAR9 = FUN4(VAR14);
    if (FUN2(VAR4, VAR16, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR43;
    }
    if (read(VAR4, VAR9, VAR14) != VAR14)
    {
        VAR5 = -VAR32;
        goto VAR43;
    }
    if (FUN2(VAR3, VAR16, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR43;
    }
    if (write(VAR3, VAR9, VAR14) == -1)
    {
        VAR5 = -VAR32;
        goto VAR43;
    }
    FUN5(VAR9);
    VAR8 = FUN4(VAR14);
    if (FUN2(VAR4, VAR15, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR44;
    }
    if (read(VAR4, VAR8, VAR14) != VAR14)
    {
        VAR5 = -VAR32;
        goto VAR44;
    }
    if (FUN2(VAR3, VAR15, VAR34) == -1)
    {
        VAR5 = -VAR32;
        goto VAR44;
    }
    if (write(VAR3, VAR8, VAR14) == -1)
    {
        VAR5 = -VAR32;
        goto VAR44;
    }
    FUN5(VAR8);
    close(VAR4);
    close(VAR3);
    return 0;
VAR44:
    FUN5(VAR8);
VAR43:
    FUN5(VAR9);
VAR35:
    close(VAR4);
    close(VAR3);
    return VAR5;
}