static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4, VAR5;
    VAR2->VAR6 = VAR7;
    VAR2->VAR8 = FUN2(VAR9);
    memset(VAR2->VAR8, 0xff, VAR9);
    if (!VAR2->VAR8)
    {
        fprintf(VAR10, "");
        FUN3(1);
    }
    if (VAR3)
    {
        VAR4 = FUN4(VAR3, VAR2->VAR8 + 528 * 32);
        if (VAR4 < 0)
        {
            fprintf(VAR10, "", VAR4);
            fprintf(VAR10, "", VAR3);
            FUN3(1);
        }
        else
        {
            VAR5 = (VAR4 + 528 * 32 - 1) / (528 * 32);
            VAR2->VAR8[0] = VAR5 & 0xff;
            VAR2->VAR8[1] = (VAR5 >> 8) & 0xff;
            VAR2->VAR8[2] = (VAR5 >> 16) & 0xff;
            VAR2->VAR8[3] = (VAR5 >> 24) & 0xff;
            fprintf(VAR10, "", VAR4, VAR3);
        }
    }
}