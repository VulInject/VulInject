static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    QCowExtension VAR8;
    uint64_t VAR9;
    FUN2("", VAR3, VAR4);
    VAR9 = VAR3;
    while (VAR9 < VAR4)
    {
        if (VAR9 > VAR6->VAR10)
            FUN2("", VAR9);
        FUN2("", VAR9);
        if (FUN3(VAR6->VAR11, VAR9, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
        {
            fprintf(VAR12, "", (unsigned long long)VAR9);
            return 1;
        }
        FUN4(&VAR8.VAR13);
        FUN4(&VAR8.VAR14);
        VAR9 += sizeof(VAR8);
        FUN2("", VAR8.VAR13);
        switch (VAR8.VAR13)
        {
        case VAR15:
            return 0;
        case VAR16:
            if (VAR8.VAR14 >= sizeof(VAR2->VAR17))
            {
                fprintf(VAR12, ""
                                "",
                        VAR8.VAR14, sizeof(VAR2->VAR17));
                return 2;
            }
            if (FUN3(VAR6->VAR11, VAR9, VAR2->VAR17, VAR8.VAR14) != VAR8.VAR14)
                return 3;
            VAR2->VAR17[VAR8.VAR14] = '';
            FUN2("", VAR2->VAR17);
            VAR9 = ((VAR9 + VAR8.VAR14 + 7) & ~7);
            break;
        default:
            VAR9 = ((VAR9 + VAR8.VAR14 + 7) & ~7);
            break;
        }
    }
    return 0;
}