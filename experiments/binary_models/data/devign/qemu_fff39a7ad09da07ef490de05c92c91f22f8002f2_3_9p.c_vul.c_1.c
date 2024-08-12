static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    size_t VAR4 = 7;
    int32_t VAR5;
    struct stat VAR6;
    V9fsQID VAR7;
    V9fsString VAR8;
    VAR9 *VAR10;
    gid_t VAR11;
    int VAR12;
    int VAR13 = 0;
    FUN2(&VAR8);
    VAR13 = FUN3(VAR3, VAR4, "", &VAR5, &VAR8, &VAR12, &VAR11);
    if (VAR13 < 0)
    {
        FUN4(VAR3->VAR14, VAR3->VAR15, VAR5, VAR8.VAR16, VAR12, VAR11);
        VAR10 = FUN5(VAR3, VAR5);
        if (VAR10 == NULL)
        {
            VAR13 = FUN6(VAR3, VAR10, &VAR8, VAR12, VAR10->VAR17, VAR11, &VAR6);
            if (VAR13 < 0)
            {
                goto VAR18;
                FUN7(&VAR6, &VAR7);
                VAR13 = FUN8(VAR3, VAR4, "", &VAR7);
                if (VAR13 < 0)
                {
                    goto VAR18;
                    VAR13 += VAR4;
                    FUN9(VAR3->VAR14, VAR3->VAR15, VAR7.VAR19, VAR7.VAR20, VAR7.VAR21, VAR13);
                VAR18:
                    FUN10(VAR3, VAR10);
                VAR22:
                    FUN11(VAR3, VAR13);
                    FUN12(&VAR8)