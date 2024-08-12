int FUN1(VAR1 *VAR2, void *VAR3, const struct VAR4 *VAR5, int VAR6, void *VAR7)
{
    int VAR8, VAR9 = 0;
    jclass VAR10 = NULL;
    for (VAR8 = 0; VAR5[VAR8].VAR11; VAR8++)
    {
        int VAR12 = VAR5[VAR8].VAR12;
        enum FFJniFieldType VAR13 = VAR5[VAR8].VAR13;
        if (VAR13 == VAR14)
        {
            jclass VAR15;
            VAR10 = NULL;
            VAR15 = (*VAR2)->FUN2(VAR2, VAR5[VAR8].VAR11);
            if ((VAR9 = FUN3(VAR2, VAR12, VAR7)) < 0 && VAR12)
            {
                goto VAR16;
                VAR10 = *(VAR17 *)((VAR18 *)VAR3 + VAR5[VAR8].VAR19) = VAR6 ? (*VAR2)->FUN4(VAR2, VAR15) : VAR15;
            }
            else
            {
                if (!VAR10)
                {
                    VAR9 = VAR20;
                    break;
                    switch (VAR13)
                    {
                    case VAR21:
                    {
                        jfieldID VAR22 = (*VAR2)->FUN5(VAR2, VAR10, VAR5[VAR8].VAR23, VAR5[VAR8].VAR24);
                        if ((VAR9 = FUN3(VAR2, VAR12, VAR7)) < 0 && VAR12)
                        {
                            goto VAR16;
                            *(VAR25 *)((VAR18 *)VAR3 + VAR5[VAR8].VAR19) = VAR22;
                            break;
                        case VAR26:
                        {
                            jfieldID VAR22 = (*VAR2)->FUN6(VAR2, VAR10, VAR5[VAR8].VAR23, VAR5[VAR8].VAR24);
                            if ((VAR9 = FUN3(VAR2, VAR12, VAR7)) < 0 && VAR12)
                            {
                                goto VAR16;
                                *(VAR25 *)((VAR18 *)VAR3 + VAR5[VAR8].VAR19) = VAR22;
                                break;
                            case VAR27:
                            {
                                jmethodID VAR28 = (*VAR2)->FUN7(VAR2, VAR10, VAR5[VAR8].VAR23, VAR5[VAR8].VAR24);
                                if ((VAR9 = FUN3(VAR2, VAR12, VAR7)) < 0 && VAR12)
                                {
                                    goto VAR16;
                                    *(VAR29 *)((VAR18 *)VAR3 + VAR5[VAR8].VAR19) = VAR28;
                                    break;
                                case VAR30:
                                {
                                    jmethodID VAR28 = (*VAR2)->FUN8(VAR2, VAR10, VAR5[VAR8].VAR23, VAR5[VAR8].VAR24);
                                    if ((VAR9 = FUN3(VAR2, VAR12, VAR7)) < 0 && VAR12)
                                    {
                                        goto VAR16;
                                        *(VAR29 *)((VAR18 *)VAR3 + VAR5[VAR8].VAR19) = VAR28;
                                        break;
                                    default:
                                        FUN9(VAR7, VAR31, "");
                                        VAR9 = FUN10(VAR32);
                                        goto VAR16;
                                        VAR9 = 0;
                                    VAR16:
                                        if (VAR9 < 0)
                                        {
                                            FUN11(VAR2, VAR3, VAR5, VAR6, VAR7);
                                            return VAR9