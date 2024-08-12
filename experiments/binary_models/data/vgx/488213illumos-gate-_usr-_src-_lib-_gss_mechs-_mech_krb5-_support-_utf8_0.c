char *FUN1(const char *VAR1)
{
int VAR2;
const unsigned char *VAR3 = (const unsigned char *) VAR1;

if (FUN2(VAR3)) {
return (char *) &VAR1[1];
}

for (VAR2 = 1; VAR2 < 6; VAR2++) {
if ((VAR3[VAR2] & 0xc0) != 0x80) {
return (char *) &VAR1[VAR2];
}
}

return (char *) &VAR1[VAR2];
}