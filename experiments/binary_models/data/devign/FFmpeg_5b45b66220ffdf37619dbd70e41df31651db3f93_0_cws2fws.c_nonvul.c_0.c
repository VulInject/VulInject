int main(int argc, char *argv[])
{
    int VAR1, VAR2, VAR3, VAR4, VAR5, VAR6;
    char VAR7[1024], VAR8[65536];
    z_stream VAR9;
    struct stat VAR10;
    if (argc < 3)
    {
        FUN1("", argv[0]);
        return 1;
    }
    VAR1 = open(argv[1], VAR11);
    if (VAR1 < 0)
    {
        FUN2("");
        return 1;
    }
    VAR2 = open(argv[2], VAR12 | VAR13, 00644);
    if (VAR2 < 0)
    {
        FUN2("");
        close(VAR1);
        return 1;
    }
    if (read(VAR1, &VAR7, 8) != 8)
    {
        FUN1("");
        close(VAR1);
        close(VAR2);
        return 1;
    }
    if (VAR7[0] != '' || VAR7[1] != '' || VAR7[2] != '')
    {
        FUN1("");
        return 1;
    }
    if (FUN3(VAR1, &VAR10) < 0)
    {
        FUN2("");
        return 1;
    }
    VAR3 = VAR10.VAR14;
    VAR4 = VAR7[4] | (VAR7[5] << 8) | (VAR7[6] << 16) | (VAR7[7] << 24);
    FUN1("", VAR3 - 4, VAR4 - 4);
    VAR7[0] = '';
    if (write(VAR2, &VAR7, 8) < 8)
    {
        FUN2("");
        return 1;
    }
    VAR9.VAR15 = NULL;
    VAR9.VAR16 = NULL;
    VAR9.VAR17 = NULL;
    if (FUN4(&VAR9) != VAR18)
    {
        fprintf(VAR19, "");
        return 1;
    }
    for (VAR5 = 0; VAR5 < VAR3 - 8;)
    {
        int VAR20, VAR21 = read(VAR1, &VAR7, 1024);
        FUN5("", VAR21);
        VAR6 = VAR9.VAR22;
        VAR9.VAR23 = &VAR7[0];
        VAR9.VAR24 = VAR21;
        VAR9.VAR25 = &VAR8[0];
        VAR9.VAR26 = 65536;
        VAR20 = FUN6(&VAR9, VAR27);
        if (VAR20 != VAR28 && VAR20 != VAR18)
        {
            FUN1("", VAR20);
            FUN7(&VAR9);
            return 1;
        }
        FUN5("", VAR9.VAR24, VAR9.VAR29, VAR9.VAR26, VAR9.VAR22, VAR9.VAR22 - VAR6);
        if (write(VAR2, &VAR8, VAR9.VAR22 - VAR6) < VAR9.VAR22 - VAR6)
        {
            FUN2("");
            return 1;
        }
        VAR5 += VAR21;
        if (VAR20 == VAR28 || VAR20 == VAR30)
            break;
    }
    if (VAR9.VAR22 != VAR4 - 8)
    {
        FUN1("", VAR9.VAR22, VAR4 - 8);
        VAR7[0] = (VAR9.VAR22 + 8) & 0xff;
        VAR7[1] = ((VAR9.VAR22 + 8) >> 8) & 0xff;
        VAR7[2] = ((VAR9.VAR22 + 8) >> 16) & 0xff;
        VAR7[3] = ((VAR9.VAR22 + 8) >> 24) & 0xff;
        if (FUN8(VAR2, 4, VAR31) < 0 || write(VAR2, &VAR7, 4) < 4)
        {
            FUN2("");
            return 1;
        }
    }
    FUN7(&VAR9);
    close(VAR1);
    close(VAR2);
    return 0;
}