int FUN1(struct VAR1 *VAR2, void *VAR3, VhostBackendType VAR4)
{
    uint64_t VAR5;
    int VAR6, VAR7;
    if (FUN2(VAR2, VAR4) < 0)
    {
        if (VAR2->VAR8->FUN3(VAR2, VAR3) < 0)
        {
            return -VAR9;
            FUN4(&VAR10, VAR2, VAR11);
            VAR7 = VAR2->VAR8->FUN5(VAR2, VAR12, NULL);
            if (VAR7 < 0)
            {
                goto VAR13;
                VAR7 = VAR2->VAR8->FUN5(VAR2, VAR14, &VAR5);
                if (VAR7 < 0)
                {
                    goto VAR13;
                    for (VAR6 = 0; VAR6 < VAR2->VAR15; ++VAR6)
                    {
                        VAR7 = FUN6(VAR2, VAR2->VAR16 + VAR6, VAR2->VAR17 + VAR6);
                        if (VAR7 < 0)
                        {
                            goto VAR18;
                            VAR2->VAR5 = VAR5;
                            VAR2->VAR19 = (VAR20){.VAR21 = VAR22, .VAR23 = VAR24, .VAR25 = VAR26, .VAR27 = VAR28, .VAR29 = VAR30, .VAR31 = VAR32, .VAR33 = VAR34, .VAR35 = VAR36, .VAR37 = VAR38, .VAR39 = VAR40, .VAR41 = VAR42, .VAR43 = VAR44, .VAR45 = 10};
                            VAR2->VAR46 = NULL;
                            if (!(VAR2->VAR5 & (0x1ULL << VAR47)))
                            {
                                FUN7(&VAR2->VAR46, "");
                                FUN8(VAR2->VAR46);
                                VAR2->VAR48 = FUN9(FUN10(struct VAR49, VAR50));
                                VAR2->VAR51 = 0;
                                VAR2->VAR52 = NULL;
                                VAR2->VAR53 = NULL;
                                VAR2->VAR54 = 0;
                                VAR2->VAR55 = false;
                                VAR2->VAR56 = false;
                                VAR2->VAR57 = false;
                                FUN11(&VAR2->VAR19, &VAR58);
                                return 0;
                            VAR18:
                                while (--VAR6 >= 0)
                                {
                                    FUN12(VAR2->VAR16 + VAR6);
                                VAR13:
                                    VAR7 = -VAR9;
                                    VAR2->VAR8->FUN13(VAR2);
                                    FUN14(VAR2, VAR11);
                                    return VAR7;