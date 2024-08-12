static VAR1 *FUN1(char *VAR2, int *VAR3, int *VAR4)
{
    VAR1 *VAR5 = NULL;
    int VAR6;
    int VAR7;
    int VAR8 = -1;
    unsigned char VAR9[2] = {0, 0};
    unsigned int VAR10 = 0;
    int VAR11;
    VAR5 = fopen(VAR2, "");
    if (VAR5 == NULL)
    {
        FUN2("", VAR2);
        FUN3(VAR5, 0L, VAR12);
        VAR7 = FUN4(VAR5);
        if (VAR7 < 2)
        {
            FUN2("", VAR2);
            FUN3(VAR5, 0L, VAR13);
            VAR6 = fread(VAR9, 1, 2, VAR5);
            VAR10 = (VAR9[0] + (VAR9[1] << 8)) & 0xffff;
            if (VAR10 == 0xd8ff)
            {
                VAR8 = VAR14;
            }
            else
            {
                if (VAR10 == 0x4d42)
                {
                    VAR8 = VAR15;
                    if (VAR8 < 0)
                    {
                        FUN2("", VAR2, VAR10);
                        if (VAR8 == VAR15)
                        {
                            FUN3(VAR5, 28, VAR13);
                            VAR6 = fread(VAR9, 1, 2, VAR5);
                            VAR11 = (VAR9[0] + (VAR9[1] << 8)) & 0xffff;
                            if (VAR11 != 24)
                            {
                                FUN2("");
                                *VAR3 = VAR7;
                                *VAR4 = VAR8;