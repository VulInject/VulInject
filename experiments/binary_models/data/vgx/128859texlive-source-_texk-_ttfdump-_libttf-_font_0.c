VAR1 FUN1(TTFontPtr VAR2)
{
TTFontPtr VAR3;

VAR3 = FUN2 (VAR4);

memcpy(VAR3, VAR2, sizeof(VAR4));
VAR3->VAR5 += 1;

return VAR3;
}