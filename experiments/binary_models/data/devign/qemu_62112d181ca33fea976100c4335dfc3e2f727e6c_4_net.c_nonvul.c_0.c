static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    int VAR8;
    VAR9 *VAR10;
    const char *VAR11;
    VAR8 = FUN2();
    if (VAR8 == -1 || VAR12 >= VAR13)
    {
        FUN3("");
        return -1;
    }
    VAR10 = &VAR14[VAR8];
    memset(VAR10, 0, sizeof(*VAR10));
    if ((VAR11 = FUN4(VAR2, "")))
    {
        VAR10->VAR11 = FUN5(VAR11);
        if (!VAR10->VAR11)
        {
            FUN3("", VAR11);
            return -1;
        }
    }
    else
    {
        assert(VAR7);
        VAR10->VAR7 = VAR7;
    }
    if (VAR5)
    {
        VAR10->VAR5 = FUN6(VAR5);
    }
    if (FUN4(VAR2, ""))
    {
        VAR10->VAR15 = FUN6(FUN4(VAR2, ""));
    }
    if (FUN4(VAR2, ""))
    {
        VAR10->VAR16 = FUN6(FUN4(VAR2, ""));
    }
    VAR10->VAR17[0] = 0x52;
    VAR10->VAR17[1] = 0x54;
    VAR10->VAR17[2] = 0x00;
    VAR10->VAR17[3] = 0x12;
    VAR10->VAR17[4] = 0x34;
    VAR10->VAR17[5] = 0x56 + VAR8;
    if (FUN4(VAR2, "") && FUN7(VAR10->VAR17, FUN4(VAR2, "")) < 0)
    {
        FUN3("");
        return -1;
    }
    VAR10->VAR18 = FUN8(VAR2, "", VAR19);
    if (VAR10->VAR18 != VAR19 && (VAR10->VAR18 < 0 || VAR10->VAR18 > 0x7ffffff))
    {
        FUN3("", VAR10->VAR18);
        return -1;
    }
    VAR10->VAR20 = 1;
    VAR12++;
    return VAR8;
}