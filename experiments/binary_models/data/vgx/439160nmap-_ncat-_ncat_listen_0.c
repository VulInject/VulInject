static char *FUN1(char *VAR1, size_t VAR2, int VAR3, int *VAR4)
{
char *VAR5 = NULL;
size_t VAR6 = 0;
const char *VAR7;
int VAR8;

VAR6 = 32;
VAR5 = (char *) FUN2(VAR6);
VAR8 = FUN3(VAR5, VAR6, "", VAR3);


for (VAR7 = VAR1; VAR7 - VAR1 < VAR2; VAR7++) {
char VAR9[32];
int VAR10;

if (FUN4((int) (unsigned char) *VAR7) || *VAR7 == '' || *VAR7 == '' || *VAR7 == '') {
VAR9[0] = *VAR7;
VAR10 = 1;
} else {
VAR10 = FUN3(VAR9, sizeof(VAR9), "", (unsigned char) *VAR7);
}

if (VAR8 + VAR10 > VAR6) {
VAR6 = (VAR8 + VAR10) * 2;
VAR5 = (char *) FUN5(VAR5, VAR6 + 1);
}
memcpy(VAR5 + VAR8, VAR9, VAR10);
VAR8 += VAR10;
}

VAR5 = (char *) FUN5(VAR5, VAR8 + 1);
VAR5[VAR8] = '';

*VAR4 = VAR8;

return VAR5;
}