static int FUN1(VAR1 *VAR2, int64_t VAR3, void **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    unsigned int VAR8;
    int64_t VAR9;
    FUN2(VAR2->VAR10, VAR11);
    VAR8 = VAR3 >> VAR6->VAR12;
    if (VAR8 < VAR6->VAR13)
    {
        uint64_t VAR14 = VAR6->VAR15[VAR8] & VAR16;
        if (VAR14)
        {
            if (FUN3(VAR6, VAR14))
            {
                FUN4(VAR2, true, -1, -1, "" VAR17 ""
                                                          "",
                                        VAR14, VAR8);
                return FUN5(VAR2, VAR14, VAR4);
                *VAR4 = NULL;
                VAR9 = FUN6(VAR2, VAR6->VAR18);
                if (VAR9 < 0)
                {
                    return VAR9;
                    int64_t VAR19 = FUN7(VAR2, VAR6->VAR20);
                    if (VAR19 < 0)
                    {
                        return VAR19;
                        fprintf(VAR21, "" VAR17 "" VAR17 "", VAR8, VAR3 << VAR6->VAR22, VAR19);
                        if (FUN8(VAR6, VAR19, VAR3 << VAR6->VAR22))
                        {
                            VAR9 = FUN9(VAR2, VAR6->VAR23, VAR19, VAR4);
                            if (VAR9 < 0)
                            {
                                goto VAR24;
                                memset(*VAR4, 0, VAR6->VAR20);
                                int VAR25 = (VAR19 >> VAR6->VAR22) & (VAR6->VAR26 - 1);
                                VAR6->FUN10(*VAR4, VAR25, 1);
                            }
                            else
                            {
                                VAR9 = FUN11(VAR2, VAR19, VAR6->VAR20, 1, false, VAR27);
                                if (VAR9 < 0)
                                {
                                    goto VAR24;
                                    VAR9 = FUN6(VAR2, VAR6->VAR23);
                                    if (VAR9 < 0)
                                    {
                                        goto VAR24;
                                        VAR9 = FUN9(VAR2, VAR6->VAR23, VAR19, VAR4);
                                        if (VAR9 < 0)
                                        {
                                            goto VAR24;
                                            memset(*VAR4, 0, VAR6->VAR20);
                                            FUN2(VAR2->VAR10, VAR28);
                                            FUN12(VAR2, VAR6->VAR23, *VAR4);
                                            VAR9 = FUN6(VAR2, VAR6->VAR23);
                                            if (VAR9 < 0)
                                            {
                                                goto VAR24;
                                                if (VAR8 < VAR6->VAR13)
                                                {
                                                    uint64_t VAR29 = FUN13(VAR19);
                                                    FUN2(VAR2->VAR10, VAR30);
                                                    VAR9 = FUN14(VAR2->VAR10, VAR6->VAR31 + VAR8 * sizeof(VAR32), &VAR29, sizeof(VAR29));
                                                    if (VAR9 < 0)
                                                    {
                                                        goto VAR24;
                                                        VAR6->VAR15[VAR8] = VAR19;
                                                        VAR6->VAR33 = FUN15(VAR6->VAR33, VAR8);
                                                        return -VAR34;
                                                        FUN16(VAR2, VAR6->VAR23, VAR4);
                                                        FUN2(VAR2->VAR10, VAR35);
                                                        uint64_t VAR36 = FUN17(FUN15(VAR3 + 1, (VAR19 >> VAR6->VAR22) + 1), VAR6->VAR26);
                                                        uint64_t VAR37 = (VAR36 * VAR6->VAR26) * VAR6->VAR20;
                                                        VAR9 = FUN18(VAR2, VAR37, 0, false, VAR8, VAR19);
                                                        if (VAR9 < 0)
                                                        {
                                                            return VAR9;
                                                            VAR9 = FUN5(VAR2, VAR19, VAR4);
                                                            if (VAR9 < 0)
                                                            {
                                                                return VAR9;
                                                                return -VAR34;
                                                            VAR24:
                                                                if (*VAR4 != NULL)
                                                                {
                                                                    FUN16(VAR2, VAR6->VAR23, VAR4);
                                                                    return VAR9