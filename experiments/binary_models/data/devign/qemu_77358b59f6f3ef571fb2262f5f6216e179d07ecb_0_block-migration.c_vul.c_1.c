static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    static int VAR5;
    int VAR6, VAR7;
    char VAR8[256];
    int64_t VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    do
    {
        VAR9 = FUN2(VAR2);
        VAR7 = VAR9 & ~VAR14;
        VAR9 >>= VAR15;
        if (VAR7 & VAR16)
        {
            int VAR17;
            VAR6 = FUN3(VAR2);
            FUN4(VAR2, (VAR12 *)VAR8, VAR6);
            VAR8[VAR6] = '';
            VAR11 = FUN5(VAR8);
            if (!VAR11)
            {
                fprintf(VAR18, "", VAR8);
                return -VAR19;
            }
            VAR13 = FUN6(VAR20);
            FUN4(VAR2, VAR13, VAR20);
            VAR17 = FUN7(VAR11, VAR9, VAR13, VAR21);
            FUN8(VAR13);
            if (VAR17 < 0)
            {
                return VAR17;
            }
        }
        else if (VAR7 & VAR22)
        {
            if (!VAR5)
            {
                FUN9("");
                VAR5 = 1;
            }
            FUN9("", (int)VAR9, (VAR9 == 100) ? '' : '');
            FUN10(VAR23);
        }
        else if (!(VAR7 & VAR24))
        {
            fprintf(VAR18, "");
            return -VAR19;
        }
        if (FUN11(VAR2))
        {
            return -VAR25;
        }
    } while (!(VAR7 & VAR24));
    return 0;
}