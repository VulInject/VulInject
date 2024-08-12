static void FUN1(VAR1 *VAR2, int VAR3)
{
    const struct VAR4 *VAR5 = VAR2->VAR6;
    struct v4l2_fmtdesc VAR7 = {.VAR3 = VAR8};
    while (!FUN2(VAR5->VAR9, VAR10, &VAR7))
    {
        enum AVCodecID VAR11 = FUN3(VAR7.VAR12);
        enum AVPixelFormat VAR13 = FUN4(VAR7.VAR12, VAR11);
        VAR7.VAR14++;
        if (!(VAR7.VAR15 & VAR16) && VAR3 & VAR17)
        {
            const char *VAR18 = FUN5(VAR13);
            FUN6(VAR2, VAR19, "", VAR18 ? VAR18 : "", VAR7.VAR20);
        }
        else if (VAR7.VAR15 & VAR16 && VAR3 & VAR21)
        {
            VAR22 *VAR23 = FUN7(VAR11);
            FUN6(VAR2, VAR19, "", VAR23 ? VAR23->VAR24 : "", VAR7.VAR20);
        }
        else
        {
            continue;
        }
        if (VAR7.VAR15 & VAR25)
            FUN6(VAR2, VAR19, "");
        FUN8(VAR2, VAR7.VAR12);
        FUN6(VAR2, VAR19, "");
    }
}