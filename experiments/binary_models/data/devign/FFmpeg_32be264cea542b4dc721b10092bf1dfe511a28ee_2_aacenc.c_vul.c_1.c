static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    if (VAR4->VAR9.VAR10 < 1.0f)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR9.VAR11; VAR8++)
        {
            VAR5 = 0;
            for (VAR6 = 0; VAR6 < VAR4->VAR9.VAR12; VAR6++)
            {
                float *VAR13 = VAR4->VAR14 + VAR5 + VAR8 * 128;
                for (VAR7 = 0; VAR7 < VAR4->VAR9.VAR15[VAR6]; VAR7++)
                    VAR13[VAR7] *= VAR4->VAR9.VAR10;
                VAR5 += VAR4->VAR9.VAR15[VAR6];
            }
        }
    }
}