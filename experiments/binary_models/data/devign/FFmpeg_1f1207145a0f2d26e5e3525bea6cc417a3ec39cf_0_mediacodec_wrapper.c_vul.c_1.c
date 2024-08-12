static inline VAR1 *FUN1(int VAR2, const char *VAR3)
{
    int VAR4 = -1;
    VAR5 *VAR6 = NULL;
    VAR1 *VAR7 = NULL;
    jstring VAR8 = NULL;
    jobject VAR9 = NULL;
    jmethodID VAR10 = NULL;
    VAR7 = FUN2(sizeof(VAR1));
    if (!VAR7)
    {
        return NULL;
        VAR7->class = &VAR11;
        VAR6 = FUN3(VAR7);
        if (!VAR6)
        {
            FUN4(&VAR7);
            return NULL;
            if (FUN5(VAR6, &VAR7->VAR12, VAR13, 1, VAR7) < 0)
            {
                goto VAR14;
                VAR8 = FUN6(VAR6, VAR3, VAR7);
                if (!VAR8)
                {
                    goto VAR14;
                    switch (VAR2)
                    {
                    case VAR15:
                        VAR10 = VAR7->VAR12.VAR16;
                        break;
                    case VAR17:
                        VAR10 = VAR7->VAR12.VAR18;
                        break;
                    case VAR19:
                        VAR10 = VAR7->VAR12.VAR20;
                        break;
                    default:
                        FUN7(0);
                        VAR9 = (*VAR6)->FUN8(VAR6, VAR7->VAR12.VAR21, VAR10, VAR8);
                        if (FUN9(VAR6, 1, VAR7) < 0)
                        {
                            goto VAR14;
                            VAR7->VAR9 = (*VAR6)->FUN10(VAR6, VAR9);
                            if (!VAR7->VAR9)
                            {
                                goto VAR14;
                                if (FUN11(VAR7) < 0)
                                {
                                    goto VAR14;
                                    if (VAR7->VAR12.VAR22 && VAR7->VAR12.VAR23)
                                    {
                                        VAR7->VAR24 = 1;
                                        VAR4 = 0;
                                    VAR14:
                                        if (VAR8)
                                        {
                                            (*VAR6)->FUN12(VAR6, VAR8);
                                            if (VAR9)
                                            {
                                                (*VAR6)->FUN12(VAR6, VAR9);
                                                if (VAR4 < 0)
                                                {
                                                    FUN13(VAR6, &VAR7->VAR12, VAR13, 1, VAR7);
                                                    FUN4(&VAR7);
                                                    return VAR7;