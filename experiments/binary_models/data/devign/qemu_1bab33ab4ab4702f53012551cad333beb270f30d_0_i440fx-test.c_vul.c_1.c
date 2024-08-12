static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    static struct
    {
        uint32_t VAR9;
        uint32_t VAR10;
    } VAR11[] = {
        {0, 0},
        {0xF0000, 0xFFFFF},
        {0xC0000, 0xC3FFF},
        {0xC4000, 0xC7FFF},
        {0xC8000, 0xCBFFF},
        {0xCC000, 0xCFFFF},
        {0xD0000, 0xD3FFF},
        {0xD4000, 0xD7FFF},
        {0xD8000, 0xDBFFF},
        {0xDC000, 0xDFFFF},
        {0xE0000, 0xE3FFF},
        {0xE4000, 0xE7FFF},
        {0xE8000, 0xEBFFF},
        {0xEC000, 0xEFFFF},
    };
    VAR5 = FUN2(VAR3);
    VAR7 = FUN3(VAR5, FUN4(0, 0));
    FUN5(VAR7 != NULL);
    for (VAR8 = 0; VAR8 < FUN6(VAR11); VAR8++)
    {
        if (VAR11[VAR8].VAR9 == VAR11[VAR8].VAR10)
        {
            continue;
        }
        FUN7("", VAR11[VAR8].VAR9, VAR11[VAR8].VAR10);
        FUN8(VAR7, VAR8, VAR12);
        FUN5(FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0));
        FUN8(VAR7, VAR8, VAR12 | VAR13);
        FUN10(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x42);
        FUN8(VAR7, VAR8, VAR13);
        FUN5(!FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x42));
        FUN5(FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x42));
        FUN10(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x82);
        FUN5(!FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x82));
        FUN8(VAR7, VAR8, VAR12 | VAR13);
        FUN5(FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x82));
        FUN8(VAR7, VAR8, 0);
        FUN5(!FUN9(VAR11[VAR8].VAR9, VAR11[VAR8].VAR10, 0x82));
    }
    FUN11();