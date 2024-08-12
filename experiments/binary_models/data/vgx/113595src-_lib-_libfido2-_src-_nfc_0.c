static int
FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
iso7816_header_t VAR6;

if (FUN2(&VAR4, &VAR5, &VAR6, sizeof(VAR6)) < 0) {
FUN3("", VAR7);
return -1;
}
if (VAR5 < 2) {
FUN3("", VAR7, VAR5);
return -1;
}

VAR5 -= 2; 

while (VAR5 > VAR8) {
if (FUN4(VAR2, &VAR6, VAR4, VAR8, 0x10) < 0) {
FUN3("", VAR7);
return -1;
}
VAR4 += VAR8;
VAR5 -= VAR8;
}

if (FUN4(VAR2, &VAR6, VAR4, (VAR3)VAR5, 0) < 0) {
FUN3("", VAR7);
return -1;
}

return 0;
}