void FUN1(int VAR1, VAR2 *VAR3, int VAR4)
{
    static VAR5 *VAR6[16], *VAR7;
    char VAR8[512];
    VAR7 = VAR6[VAR1];
    if (!VAR7)
    {
        sprintf(VAR8, "", VAR1);
        VAR7 = fopen(VAR8, "");
        if (!VAR7)
            return;
        VAR6[VAR1] = VAR7;
    }
    if (VAR1 == 0)
    {
        int VAR9;
        static int VAR10 = 0;
        FUN2("", VAR10);
        for (VAR9 = 0; VAR9 < VAR4; VAR9++)
        {
            FUN2("", (double)VAR3[VAR9] / 32768.0);
            if ((VAR9 % 18) == 17)
                FUN2("");
        }
        VAR10 += VAR4;
    }
    fwrite(VAR3, 1, VAR4 * sizeof(VAR2), VAR7);
}