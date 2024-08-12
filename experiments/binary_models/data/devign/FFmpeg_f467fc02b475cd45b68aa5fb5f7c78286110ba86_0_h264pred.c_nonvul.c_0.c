void FUN1(void)
{
    static const struct
    {
        void (*VAR1)(VAR2 *, VAR3 *, VAR3 *, int, int, int);
        const char *VAR4;
    } VAR5[] = {
        {VAR6, ""},
        {VAR7, ""},
        {VAR8, ""},
        {VAR9, ""},
    };
    FUN2(VAR3, VAR10, [VAR11]);
    FUN2(VAR3, VAR12, [VAR11]);
    H264PredContext VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    for (VAR14 = 0; VAR14 < FUN3(VAR5); VAR14++)
    {
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            int VAR18 = VAR19[VAR15];
            for (VAR17 = 8; VAR17 <= (VAR18 == VAR20 ? 10 : 8); VAR17++)
                for (VAR16 = 1; VAR16 <= (VAR18 == VAR20 ? 2 : 1); VAR16++)
                {
                    FUN4(&VAR13, VAR18, VAR17, VAR16);
                    VAR5[VAR14].FUN5(&VAR13, VAR10, VAR12, VAR15, VAR16, VAR17);
                }
        }
        FUN6("", VAR5[VAR14].VAR4);
    }
}