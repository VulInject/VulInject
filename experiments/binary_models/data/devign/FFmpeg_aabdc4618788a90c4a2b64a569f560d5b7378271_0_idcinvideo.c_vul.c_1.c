static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    long VAR5, VAR6;
    int VAR7;
    unsigned char VAR8 = 0;
    int VAR9, VAR10, VAR11;
    VAR7 = VAR9 = VAR11 = 0;
    for (VAR6 = 0; VAR6 < (VAR2->VAR12.VAR13[0] * VAR2->VAR14->VAR15); VAR6 += VAR2->VAR12.VAR13[0])
    {
        for (VAR5 = VAR6; VAR5 < VAR6 + VAR2->VAR14->VAR16; VAR5++)
        {
            VAR10 = VAR2->VAR17[VAR7];
            VAR4 = VAR2->VAR18[VAR7];
            while (VAR10 >= VAR19)
            {
                if (!VAR9)
                {
                    if (VAR11 > VAR2->VAR20)
                    {
                        FUN2(VAR2->VAR14, VAR21, "");
                        return;
                    }
                    VAR9 = 8;
                    VAR8 = VAR2->VAR22[VAR11++];
                }
                VAR10 = VAR4[VAR10].VAR23[VAR8 & 0x01];
                VAR8 = VAR8 >> 1;
                VAR9--;
            }
            VAR2->VAR12.VAR24[0][VAR5] = VAR10;
            VAR7 = VAR10;
        }
    }
}