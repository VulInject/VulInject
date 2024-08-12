static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11, VAR12;
    const char *VAR13;
    const char *VAR14 = NULL;
    VAR9 *VAR15 = NULL;
    assert(VAR8 != NULL);
    assert(VAR2->VAR3 == NULL);
    assert(VAR5 != NULL && VAR2->VAR5 != VAR5);
    if (VAR3 != NULL)
    {
        VAR13 = VAR3->VAR13;
    }
    else
    {
        VAR13 = FUN2(VAR5, "");
        if (VAR8->VAR16 && !VAR13)
        {
            FUN3(VAR10, "", VAR8->VAR17);
            return -VAR18;
            FUN4(VAR2, VAR13 ?: "", VAR6, VAR8->VAR17);
            VAR14 = FUN2(VAR5, "");
            FUN5(VAR2, VAR14, &VAR15);
            if (VAR15)
            {
                FUN6(VAR10, VAR15);
                return -VAR18;
                FUN7(VAR5, "");
                if (VAR3 != NULL && VAR8->VAR19)
                {
                    FUN8(VAR3, VAR2);
                    return 0;
                    VAR2->VAR12 = VAR6;
                    VAR2->VAR20 = 512;
                    VAR2->VAR21 = 512;
                    VAR2->VAR22 = true;
                    VAR12 = FUN9(VAR2, VAR6);
                    VAR2->VAR23 = !(VAR12 & VAR24);
                    if (VAR25 && !FUN10(VAR8, VAR2->VAR23))
                    {
                        FUN3(VAR10, !VAR2->VAR23 && FUN10(VAR8, true) ? "" : "", VAR8->VAR17);
                        return -VAR26;
                        assert(VAR2->VAR27 == 0);
                        if (VAR6 & VAR28)
                        {
                            if (!VAR2->VAR23)
                            {
                                FUN11(VAR2);
                            }
                            else
                            {
                                FUN3(VAR10, "");
                                return -VAR18;
                                if (VAR13 != NULL)
                                {
                                    FUN12(VAR2->VAR13, sizeof(VAR2->VAR13), VAR13);
                                }
                                else
                                {
                                    VAR2->VAR13[0] = '';
                                    FUN12(VAR2->VAR29, sizeof(VAR2->VAR29), VAR2->VAR13);
                                    VAR2->VAR8 = VAR8;
                                    VAR2->VAR30 = FUN13(VAR8->VAR31);
                                    VAR2->VAR32 = !!(VAR6 & VAR33);
                                    if (VAR8->VAR19)
                                    {
                                        assert(VAR3 == NULL);
                                        assert(!VAR8->VAR16 || VAR13 != NULL);
                                        VAR11 = VAR8->FUN14(VAR2, VAR5, VAR12, &VAR15);
                                    }
                                    else
                                    {
                                        if (VAR3 == NULL)
                                        {
                                            FUN3(VAR10, ""
                                                             "",
                                                       VAR8->VAR17);
                                            VAR11 = -VAR18;
                                            goto VAR34;
                                            VAR2->VAR3 = VAR3;
                                            VAR11 = VAR8->FUN15(VAR2, VAR5, VAR12, &VAR15);
                                            if (VAR11 < 0)
                                            {
                                                if (VAR15)
                                                {
                                                    FUN6(VAR10, VAR15);
                                                }
                                                else if (VAR2->VAR13[0])
                                                {
                                                    FUN16(VAR10, -VAR11, "", VAR2->VAR13);
                                                }
                                                else
                                                {
                                                    FUN16(VAR10, -VAR11, "");
                                                    goto VAR34;
                                                    VAR11 = FUN17(VAR2, VAR2->VAR35);
                                                    if (VAR11 < 0)
                                                    {
                                                        FUN16(VAR10, -VAR11, "");
                                                        goto VAR34;
                                                        FUN18(VAR2, &VAR15);
                                                        if (VAR15)
                                                        {
                                                            FUN6(VAR10, VAR15);
                                                            VAR11 = -VAR18;
                                                            goto VAR34;
                                                            assert(FUN19(VAR2) != 0);
                                                            assert((VAR2->VAR21 != 0) || VAR2->VAR36);
                                                            return 0;
                                                        VAR34:
                                                            VAR2->VAR3 = NULL;
                                                            FUN20(VAR2->VAR30);
                                                            VAR2->VAR30 = NULL;
                                                            VAR2->VAR8 = NULL;
                                                            return VAR11