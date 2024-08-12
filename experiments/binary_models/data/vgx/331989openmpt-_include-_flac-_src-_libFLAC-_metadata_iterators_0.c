VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4, FLAC__off_t VAR5, VAR6 *VAR7)
{
FLAC__byte VAR8[8192];
size_t VAR9;

FUN2(VAR5 >= 0);
while(VAR5 > 0) {
VAR9 = FUN3(sizeof(VAR8), (VAR10)VAR5);
if(fread(VAR8, 1, VAR9, VAR3) != VAR9) {
*VAR7 = VAR11;
return false;
}
if(FUN4(VAR8, 1, VAR9, VAR4) != VAR9) {
*VAR7 = VAR12;
return false;
}
VAR5 -= VAR9;
}

return true;
}