int
FUN1(const VAR1 **VAR2, size_t VAR3, VAR1 *VAR4, VAR5 *VAR6)
{
u8 VAR7;
size_t VAR8 = VAR3, VAR9;
const VAR1 *VAR10 = *VAR2;

*VAR2 = NULL;

if (VAR8 < 2) {
return VAR11;
}
VAR7 = *VAR10;
VAR10++;
VAR9 = *VAR10;
VAR10++;
VAR8 -= 2;

if (VAR9 == 0xff) {

if (VAR8 < 2) {
return VAR11;
}

VAR9 = FUN2(VAR10);
VAR10 += 2;
VAR8 -= 2;
}

*VAR4 = VAR7;
*VAR6 = VAR9;
*VAR2 = VAR10;

if (VAR9 > VAR8)
return VAR12;

return VAR13;
}