static bool FUN1(u16 VAR1)
{

u32 VAR2;

for (VAR2 = 0; VAR2 < FUN2(VAR3); VAR2++)
if (VAR3[VAR2] == VAR1)
return true;

return false;
}