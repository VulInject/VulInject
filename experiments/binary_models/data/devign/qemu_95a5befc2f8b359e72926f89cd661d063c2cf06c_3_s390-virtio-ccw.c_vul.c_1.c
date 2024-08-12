static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    int VAR8;
    for (VAR8 = 0; VAR8 < sizeof(VAR7->VAR9) && VAR3[VAR8]; VAR8++)
    {
        uint8_t VAR10 = FUN3(VAR3[VAR8]);
        if (('' <= VAR10 && VAR10 <= '') || ('' <= VAR10 && VAR10 <= '') || (VAR10 == '') || (VAR10 == ''))
        {
            VAR7->VAR9[VAR8] = VAR10;
        }
        else
        {
            FUN4(VAR5, "", VAR10, VAR10);
            return;
        }
    }
    for (; VAR8 < sizeof(VAR7->VAR9); VAR8++)
    {
        VAR7->VAR9[VAR8] = '';
    }
}