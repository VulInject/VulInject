int FUN1(const char *VAR1)
{
    char VAR2[1024];
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        struct VAR3 *VAR4;
        struct VAR5 *VAR6;
        int VAR7 = FUN3(VAR2);
        if (VAR7 == -1 || VAR7 < sizeof(struct VAR3))
        {
            fprintf(VAR8, "", VAR2);
            FUN4(1);
        }
        if (!VAR9)
        {
            VAR10 = sizeof(VAR11);
            VAR9 = FUN5(VAR10);
        }
        VAR9 = FUN6(VAR9, VAR10 + sizeof(*VAR6) + VAR7);
        VAR6 = (struct VAR5 *)(VAR9 + VAR10);
        VAR6->VAR4.VAR12 = VAR13;
        VAR6->VAR4.VAR14 = FUN7(sizeof(*VAR6) + VAR7);
        if (FUN8(VAR2, VAR6->VAR15) != VAR7)
        {
            fprintf(VAR8, "", VAR2);
            FUN4(1);
        }
        VAR4 = (struct VAR3 *)(VAR6->VAR15);
        FUN9(VAR4->VAR12, VAR13);
        if (VAR4->VAR12 == 4)
        {
            VAR16++;
        }
        VAR10 += sizeof(*VAR6) + VAR7;
        (*(VAR11 *)VAR9) = FUN7(FUN10(*(VAR11 *)VAR9) + 1);
        return 0;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        unsigned long VAR12 = FUN11(VAR2, NULL, 0);
        switch (VAR12)
        {
        case 0:
            FUN12(VAR1);
            return 0;
        case 1:
            FUN13(VAR1);
            return 0;
        default:
            fprintf(VAR8, ""
                            "",
                    VAR12);
            FUN4(1);
        }
    }
    fprintf(VAR8, "");
    return -1;
}