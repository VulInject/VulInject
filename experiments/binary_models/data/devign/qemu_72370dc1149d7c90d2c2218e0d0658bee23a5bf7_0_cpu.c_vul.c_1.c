static void FUN1(FeatureWord VAR1, uint32_t VAR2)
{
    VAR3 *VAR4 = &VAR5[VAR1];
    int VAR6;
    for (VAR6 = 0; VAR6 < 32; ++VAR6)
    {
        if (1 << VAR6 & VAR2)
        {
            const char *VAR7 = FUN2(VAR4->VAR8);
            assert(VAR7);
            fprintf(VAR9, ""
                            "",
                    FUN3() ? "" : "", VAR4->VAR10, VAR7, VAR4->VAR11[VAR6] ? "" : "", VAR4->VAR11[VAR6] ? VAR4->VAR11[VAR6] : "", VAR6);
        }
    }
}