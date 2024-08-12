static void FUN1(struct VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    uint32_t VAR9;
    VAR6 = 0;
    VAR7 = 255;
    for (VAR5 = 0; VAR5 < VAR2->VAR10; ++VAR5)
    {
        VAR9 = VAR2->VAR11[VAR5].VAR12 & ~VAR2->VAR11[VAR5].VAR13 & (VAR3 ? VAR2->VAR11[VAR5].VAR14 : ~VAR2->VAR11[VAR5].VAR14);
        while (VAR9 != 0)
        {
            VAR4 = FUN2(VAR9);
            VAR8 = VAR2->VAR11[VAR5].VAR15[VAR4];
            if (VAR8 <= VAR7)
            {
                VAR7 = VAR8;
                VAR6 = 32 * VAR5 + VAR4;
            }
            VAR9 &= VAR9 - 1;
        }
    }
    VAR2->VAR6[VAR3] = VAR6;
}