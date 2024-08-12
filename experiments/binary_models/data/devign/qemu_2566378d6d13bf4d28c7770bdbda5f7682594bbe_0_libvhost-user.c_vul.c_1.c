FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    char VAR6[FUN2(VAR7 * sizeof(int))] = {};
    struct iovec VAR8 = {
        .VAR9 = (char *)VAR5,
        .VAR10 = VAR11,
    };
    struct msghdr VAR12 = {
        .VAR13 = &VAR8,
        .VAR14 = 1,
        .VAR15 = VAR6,
        .VAR16 = sizeof(VAR6),
    };
    size_t VAR17;
    struct VAR18 *VAR19;
    int VAR20;
    do
    {
        VAR20 = FUN3(VAR3, &VAR12, 0);
    } while (VAR20 < 0 && (VAR21 == VAR22 || VAR21 == VAR23));
    if (VAR20 <= 0)
    {
        FUN4(VAR2, "", strerror(VAR21));
        return false;
    }
    VAR5->VAR24 = 0;
    for (VAR19 = FUN5(&VAR12); VAR19 != NULL; VAR19 = FUN6(&VAR12, VAR19))
    {
        if (VAR19->VAR25 == VAR26 && VAR19->VAR27 == VAR28)
        {
            VAR17 = VAR19->VAR29 - FUN7(0);
            VAR5->VAR24 = VAR17 / sizeof(int);
            memcpy(VAR5->VAR30, FUN8(VAR19), VAR17);
            break;
        }
    }
    if (VAR5->VAR31 > sizeof(VAR5->VAR32))
    {
        FUN4(VAR2, ""
                      "",
                 VAR5->VAR33, VAR5->VAR31, sizeof(VAR5->VAR32));
        goto VAR34;
    }
    if (VAR5->VAR31)
    {
        do
        {
            VAR20 = read(VAR3, &VAR5->VAR32, VAR5->VAR31);
        } while (VAR20 < 0 && (VAR21 == VAR22 || VAR21 == VAR23));
        if (VAR20 <= 0)
        {
            FUN4(VAR2, "", strerror(VAR21));
            goto VAR34;
        }
        assert(VAR20 == VAR5->VAR31);
    }
    return true;
VAR34:
    FUN9(VAR5);
    return false;
}