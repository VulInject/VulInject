static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    V9fsString VAR4;
    V9fsString VAR5;
    VAR6 *VAR7;
    V9fsQID VAR8;
    struct stat VAR9;
    int32_t VAR10;
    int VAR11 = 0;
    gid_t VAR12;
    size_t VAR13 = 7;
    FUN2(&VAR4);
    FUN2(&VAR5);
    VAR11 = FUN3(VAR3, VAR13, "", &VAR10, &VAR4, &VAR5, &VAR12);
    if (VAR11 < 0)
    {
        FUN4(VAR3->VAR14, VAR3->VAR15, VAR10, VAR4.VAR16, VAR5.VAR16, VAR12);
        if (FUN5(VAR4.VAR16))
        {
            VAR11 = -VAR17;
            VAR7 = FUN6(VAR3, VAR10);
            if (VAR7 == NULL)
            {
                VAR11 = -VAR18;
                VAR11 = FUN7(VAR3, VAR7, &VAR4, VAR5.VAR16, VAR12, &VAR9);
                if (VAR11 < 0)
                {
                    goto VAR19;
                    FUN8(&VAR9, &VAR8);
                    VAR11 = FUN9(VAR3, VAR13, "", &VAR8);
                    if (VAR11 < 0)
                    {
                        goto VAR19;
                        VAR11 += VAR13;
                        FUN10(VAR3->VAR14, VAR3->VAR15, VAR8.VAR20, VAR8.VAR21, VAR8.VAR22);
                    VAR19:
                        FUN11(VAR3, VAR7);
                    VAR23:
                        FUN12(VAR3, VAR11);
                        FUN13(&VAR4);
                        FUN13(&VAR5)