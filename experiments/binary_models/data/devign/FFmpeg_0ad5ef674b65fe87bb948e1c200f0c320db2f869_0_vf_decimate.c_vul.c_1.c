static void FUN1(const VAR1 *VAR2, struct VAR3 *VAR4, const VAR5 *VAR6, const VAR5 *VAR7)
{
    int64_t VAR8 = -1;
    VAR9 *VAR10 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    memset(VAR10, 0, VAR2->VAR14 * sizeof(*VAR10));
    for (VAR11 = 0; VAR11 < (VAR2->VAR15 ? 3 : 1); VAR11++)
    {
        int VAR16, VAR17, VAR18;
        const int VAR19 = VAR6->VAR20[VAR11];
        const int VAR21 = VAR7->VAR20[VAR11];
        const VAR22 *VAR23 = VAR6->VAR24[VAR11];
        const VAR22 *VAR25 = VAR7->VAR24[VAR11];
        int VAR26 = VAR11 ? FUN2(VAR6->VAR26, VAR2->VAR27) : VAR6->VAR26;
        int VAR28 = VAR11 ? FUN2(VAR6->VAR28, VAR2->VAR29) : VAR6->VAR28;
        int VAR30 = VAR2->VAR31 / 2;
        int VAR32 = VAR2->VAR33 / 2;
        if (VAR11)
        {
            VAR30 >>= VAR2->VAR27;
            VAR32 >>= VAR2->VAR29;
        }
        for (VAR17 = 0; VAR17 < VAR28; VAR17++)
        {
            int VAR34 = VAR17 / VAR32;
            int VAR35 = 0;
            for (VAR16 = 0; VAR16 < VAR26; VAR16 += VAR30)
            {
                int64_t VAR36 = 0;
                int VAR37 = FUN3(VAR26, VAR16 + VAR30);
                for (VAR18 = VAR16; VAR18 < VAR37; VAR18++)
                    VAR36 += FUN4(((const VAR38##VAR39##VAR40 *)VAR23)[VAR18] - ((const VAR38##VAR39##VAR40 *)VAR25)[VAR18]);
                VAR10[VAR34 * VAR2->VAR41 + VAR35] += VAR36;
                VAR35++;
            }
        }
        while (0)
            if (VAR2->VAR42 == 8)
                FUN5(8);
            else
                FUN5(16);
        VAR23 += VAR19;
        VAR25 += VAR21;
    }
}
for (VAR12 = 0; VAR12 < VAR2->VAR43 - 1; VAR12++)
{
    for (VAR13 = 0; VAR13 < VAR2->VAR41 - 1; VAR13++)
    {
        int64_t VAR44 = VAR10[VAR12 * VAR2->VAR41 + VAR13] + VAR10[VAR12 * VAR2->VAR41 + VAR13 + 1] + VAR10[(VAR12 + 1) * VAR2->VAR41 + VAR13] + VAR10[(VAR12 + 1) * VAR2->VAR41 + VAR13 + 1];
        if (VAR44 > VAR8)
            VAR8 = VAR44;
    }
}
VAR4->VAR45 = 0;
for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    VAR4->VAR45 += VAR10[VAR12];
VAR4->VAR46 = VAR8;
}