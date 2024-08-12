int FUN1(VAR1 *VAR2, VAR3 *VAR4, const void *VAR5, unsigned VAR6, const void *VAR7, unsigned VAR8, int (*VAR9)(VAR1 *, VAR10 *VAR11, VAR10 *VAR12))
{
    VAR13 *VAR14 = FUN2(VAR2);
    unsigned VAR15 = 0;
    D3D11_VIDEO_DECODER_BUFFER_DESC VAR16[4];
    DXVA2_DecodeBufferDesc VAR17[4];
    VAR10 *VAR18 = NULL, *VAR19 = NULL;
    int VAR20, VAR21 = 0;
    HRESULT VAR22;
    unsigned VAR23;
    VAR24 *VAR25 = FUN3(VAR2);
    if (VAR25->VAR26)
    {
        VAR20 = FUN4(VAR4, VAR25->VAR26);
        if (VAR20 < 0)
            return VAR20;
    }
    do
    {
        FUN5(VAR2);
        if (FUN6(VAR2))
            VAR22 = FUN7(FUN8(VAR14)->VAR27, FUN8(VAR14)->VAR28, FUN9(VAR2, VAR4), 0, NULL);
        if (VAR2->VAR29 == VAR30)
            VAR22 = FUN10(FUN11(VAR14)->VAR28, FUN9(VAR2, VAR4), NULL);
        if (VAR22 != VAR31 || ++VAR21 > 50)
            break;
        FUN12(VAR2);
        FUN13(2000);
    } while (1);
    if (FUN14(VAR22))
    {
        FUN15(VAR2, VAR32, "", VAR22);
        FUN12(VAR2);
        return -1;
    }
    if (FUN6(VAR2))
    {
        VAR18 = &VAR16[VAR15];
        VAR23 = VAR33;
    }
    if (VAR2->VAR29 == VAR30)
    {
        VAR18 = &VAR17[VAR15];
        VAR23 = VAR34;
    }
    VAR20 = FUN16(VAR2, VAR14, VAR18, VAR23, VAR5, VAR6, 0);
    if (VAR20)
    {
        FUN15(VAR2, VAR32, "");
        goto VAR35;
    }
    VAR15++;
    if (VAR8 > 0)
    {
        if (FUN6(VAR2))
        {
            VAR18 = &VAR16[VAR15];
            VAR23 = VAR36;
        }
        if (VAR2->VAR29 == VAR30)
        {
            VAR18 = &VAR17[VAR15];
            VAR23 = VAR37;
        }
        VAR20 = FUN16(VAR2, VAR14, VAR18, VAR23, VAR7, VAR8, 0);
        if (VAR20)
        {
            FUN15(VAR2, VAR32, "");
            goto VAR35;
        }
        VAR15++;
    }
    if (FUN6(VAR2))
    {
        VAR18 = &VAR16[VAR15 + 0];
        VAR19 = &VAR16[VAR15 + 1];
    }
    if (VAR2->VAR29 == VAR30)
    {
        VAR18 = &VAR17[VAR15 + 0];
        VAR19 = &VAR17[VAR15 + 1];
    }
    VAR20 = FUN17(VAR2, VAR18, VAR19);
    if (VAR20)
    {
        FUN15(VAR2, VAR32, "");
        goto VAR35;
    }
    VAR15 += 2;
    assert(VAR15 == 1 + (VAR8 > 0) + 2);
    if (FUN6(VAR2))
        VAR22 = FUN18(FUN8(VAR14)->VAR27, FUN8(VAR14)->VAR28, VAR15, VAR16);
    if (VAR2->VAR29 == VAR30)
    {
        DXVA2_DecodeExecuteParams VAR38 = {
            .VAR39 = VAR15,
            .VAR40 = VAR17,
            .VAR41 = NULL,
        };
        VAR22 = FUN19(FUN11(VAR14)->VAR28, &VAR38);
    }
    if (FUN14(VAR22))
    {
        FUN15(VAR2, VAR32, "", VAR22);
        VAR20 = -1;
    }
VAR35:
    if (FUN6(VAR2))
        VAR22 = FUN20(FUN8(VAR14)->VAR27, FUN8(VAR14)->VAR28);
    if (VAR2->VAR29 == VAR30)
        VAR22 = FUN21(FUN11(VAR14)->VAR28, NULL);
    FUN12(VAR2);
    if (FUN14(VAR22))
    {
        FUN15(VAR2, VAR32, "", VAR22);
        VAR20 = -1;
    }
    return VAR20;
}