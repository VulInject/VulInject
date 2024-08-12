static void FUN1(void *VAR1, VAR2 *VAR3, const char *VAR4)
{
    if (VAR3 && !(VAR3->VAR5 == 1 && FUN2(VAR3, "", NULL, 0)))
    {
        VAR6 *VAR7 = NULL;
        FUN3(VAR1, VAR8, "", VAR4);
        while ((VAR7 = FUN2(VAR3, "", VAR7, VAR9)))
        {
            if (strcmp("", VAR7->VAR10))
            {
                const char *VAR11 = VAR7->VAR12;
                FUN3(VAR1, VAR8, "", VAR4, VAR7->VAR10);
                while (*VAR11)
                {
                    char VAR13[256];
                    size_t VAR14 = strcspn(VAR11, "");
                    FUN4(VAR13, VAR11, FUN5(sizeof(VAR13), VAR14 + 1));
                    FUN3(VAR1, VAR8, "", VAR13);
                    VAR11 += VAR14;
                    if (*VAR11 == 0xd)
                        FUN3(VAR1, VAR8, "");
                    if (*VAR11 == 0xa)
                        FUN3(VAR1, VAR8, "", VAR4, "");
                    if (*VAR11)
                        VAR11++;
                }
                FUN3(VAR1, VAR8, "");
            }
        }
    }
}