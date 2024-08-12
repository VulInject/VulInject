static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5)
{
    iconv_t VAR6 = (VAR7)-1;
    int VAR8 = 0;
    char *VAR9, *VAR10;
    size_t VAR11, VAR12;
    AVPacket VAR13;
    if (VAR2->VAR14 != VAR15)
        return 0;
    VAR6 = FUN2("", VAR2->VAR16);
    FUN3(VAR6 != (VAR7)-1);
    VAR9 = VAR5->VAR17;
    VAR11 = VAR5->VAR18;
    if (VAR11 >= VAR19 / VAR20 - VAR21)
    {
        FUN4(VAR2, VAR22, "");
        VAR8 = FUN5(VAR23);
        goto VAR24;
    }
    VAR8 = FUN6(&VAR13, VAR11 * VAR20);
    if (VAR8 < 0)
        goto VAR24;
    VAR4->VAR25 = VAR13.VAR25;
    VAR4->VAR17 = VAR13.VAR17;
    VAR4->VAR18 = VAR13.VAR18;
    VAR10 = VAR4->VAR17;
    VAR12 = VAR4->VAR18;
    if (FUN7(VAR6, &VAR9, &VAR11, &VAR10, &VAR12) == (VAR26)-1 || FUN7(VAR6, NULL, NULL, &VAR10, &VAR12) == (VAR26)-1 || VAR12 >= VAR4->VAR18 || VAR11 != 0)
    {
        FUN4(VAR2, VAR22, ""%VAR27\""
                                    "",
               VAR5->VAR17, VAR2->VAR16);
        FUN8(&VAR13);
        VAR8 = FUN5(VAR28);
        goto VAR24;
    }
    VAR4->VAR18 -= VAR12;
    VAR4->VAR17[VAR4->VAR18 - 1] = '';
VAR24:
    if (VAR6 != (VAR7)-1)
        FUN9(VAR6);
    return VAR8;
    FUN3(!"");
}