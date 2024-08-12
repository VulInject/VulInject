void FUN1(int VAR1, VAR2 *VAR3, int VAR4)
{
    static VAR5 *VAR6[16], *VAR7;
    char VAR8[512];
    int VAR9;
    int32_t VAR10;
    VAR7 = VAR6[VAR1];
    if (!VAR7)
    {
        snprintf(VAR8, sizeof(VAR8), "", VAR1, ""
                                                              "");
        VAR7 = fopen(VAR8, "");
        if (!VAR7)
            return;
        VAR6[VAR1] = VAR7;
    }
    if (VAR1 == 0)
    {
        static int VAR11 = 0;
        FUN2("", VAR11);
        for (VAR9 = 0; VAR9 < VAR4; VAR9++)
        {
            FUN2("", (double)VAR3[VAR9] / VAR12);
            if ((VAR9 % 18) == 17)
                FUN2("");
        }
        VAR11 += VAR4;
    }
    for (VAR9 = 0; VAR9 < VAR4; VAR9++)
    {
        VAR10 = VAR3[VAR9] << (23 - VAR13);
        fwrite(&VAR10, 1, sizeof(VAR2), VAR7);
    }
}