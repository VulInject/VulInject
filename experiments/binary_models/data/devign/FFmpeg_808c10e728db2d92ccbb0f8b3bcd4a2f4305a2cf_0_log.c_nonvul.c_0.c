static void FUN1(void *VAR1, int VAR2, const char *VAR3, va_list VAR4, AVBPrint VAR5[3], int *VAR6, int VAR7[2])
{
    VAR8 *VAR9 = VAR1 ? *(VAR8 **)VAR1 : NULL;
    FUN2(VAR5 + 0, 0, 1);
    FUN2(VAR5 + 1, 0, 1);
    FUN2(VAR5 + 2, 0, 65536);
    if (VAR7)
        VAR7[0] = VAR7[1] = VAR10 + 16;
    if (*VAR6 && VAR9)
    {
        if (VAR9->VAR11)
        {
            VAR8 **VAR12 = *(VAR8 ***)(((VAR13 *)VAR1) + VAR9->VAR11);
            if (VAR12 && *VAR12)
            {
                FUN3(VAR5 + 0, "", (*VAR12)->FUN4(VAR12), VAR12);
                if (VAR7)
                    VAR7[0] = FUN5(VAR12);
            }
        }
        FUN3(VAR5 + 1, "", VAR9->FUN4(VAR1), VAR1);
        if (VAR7)
            VAR7[1] = FUN5(VAR1);
    }
    FUN6(VAR5 + 2, VAR3, VAR4);
    if (*VAR5[0].VAR14 || *VAR5[1].VAR14 || *VAR5[2].VAR14)
    {
        char VAR15 = VAR5[2].VAR16 && VAR5[2].VAR16 <= VAR5[2].VAR17 ? VAR5[2].VAR14[VAR5[2].VAR16 - 1] : 0;
        *VAR6 = VAR15 == '' || VAR15 == '';
    }
}