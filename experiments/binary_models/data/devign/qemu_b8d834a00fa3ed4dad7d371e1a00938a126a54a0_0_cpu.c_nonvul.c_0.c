static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    FeatureWord VAR5;
    int VAR6 = 0;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        uint32_t VAR8 = FUN2(VAR5, false);
        uint32_t VAR9 = VAR4->VAR10[VAR5];
        VAR4->VAR10[VAR5] &= VAR8;
        VAR2->VAR11[VAR5] = VAR9 & ~VAR4->VAR10[VAR5];
        if (VAR2->VAR11[VAR5])
        {
            VAR6 = 1;
        }
    }
    return VAR6;
}