void FUN1(void)
{
    FUN2(VAR1, VAR2, [VAR3]);
    FUN2(VAR1, VAR4, [VAR3]);
    FUN2(VAR1, VAR5, [VAR3]);
    FUN2(VAR1, VAR6, [VAR3]);
    H264QpelContext VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    FUN3(void, VAR1 *VAR12, const VAR1 *VAR13, ptrdiff_t VAR14);
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        FUN4(*VAR15)[16] = VAR8 ? VAR7.VAR16 : VAR7.VAR17;
        const char *VAR18 = VAR8 ? "" : "";
        for (VAR9 = 8; VAR9 <= 10; VAR9++)
        {
            FUN5(&VAR7, VAR9);
            for (VAR10 = 0; VAR10 < (VAR8 ? 3 : 4); VAR10++)
            {
                int VAR19 = 16 >> VAR10;
                for (VAR11 = 0; VAR11 < 16; VAR11++)
                    if (FUN6(VAR15[VAR10][VAR11], "", VAR18, VAR19, VAR11 & 3, VAR11 >> 2, VAR9))
                    {
                        FUN7();
                        FUN8(VAR5, VAR20, VAR19 * VAR21);
                        FUN9(VAR6, VAR22, VAR19 * VAR21);
                        if (memcmp(VAR2, VAR4, VAR3) || memcmp(VAR5, VAR6, VAR3))
                            FUN10();
                        FUN11(VAR6, VAR22, VAR19 * VAR21);
                    }
            }
        }
        FUN12("", VAR18);
    }
}