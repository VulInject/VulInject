void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10;
    int VAR11;
    VAR10 = FUN2(VAR1 ? VAR2 : NULL, VAR3 ? VAR4 : NULL, &VAR8);
    if (VAR8)
    {
        FUN3(VAR7, VAR8);
        if (!FUN4(VAR10))
        {
            FUN5(VAR7, VAR12, "");
            if (VAR5 < 0)
            {
                FUN5(VAR7, VAR13, "", "");
                FUN6();
                VAR11 = FUN7(VAR10, VAR5);
                switch (VAR11)
                {
                case 0:
                    break;
                case -VAR14:
                    FUN5(VAR7, VAR15, VAR2);
                    break;
                case -VAR16:
                    FUN5(VAR7, VAR17);
                    break;
                case -VAR18:
                    FUN5(VAR7, VAR19, VAR2);
                    break;
                case -VAR20:
                    break;
                default:
                    FUN8(VAR7, -VAR11, "");
                    break