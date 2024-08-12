void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    int VAR5, VAR6;
    FUN2(VAR2, &VAR7, VAR8)
    {
        FUN2(VAR4, &VAR2->VAR9, VAR8)
        {
            switch (VAR4->VAR10->VAR11)
            {
            case VAR12:
                VAR5 = 1;
                break;
            case VAR13:
            case VAR14:
            case VAR15:
            case VAR16:
                VAR6 = 1;
                break;
            default:;
            }
        }
        if (VAR6 && !VAR5)
            fprintf(VAR17, "", VAR2->VAR18);
        if (VAR5 && !VAR6)
            fprintf(VAR17, "", VAR2->VAR18);
    }
    FUN2(VAR4, &VAR19, VAR8)
    {
        if (!VAR4->VAR20)
        {
            fprintf(VAR17, "", VAR4->VAR10->VAR11 == VAR12 ? "" : "", VAR4->VAR21);
        }
    }
}