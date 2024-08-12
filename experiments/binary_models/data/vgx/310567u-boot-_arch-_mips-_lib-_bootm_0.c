static void FUN1(const char *VAR1, const char *VAR2)
{
if (VAR3 < VAR4 - 1) {
VAR5[VAR3] = VAR6;

strcpy(VAR6, VAR1);
VAR6 += strlen(VAR1);

if (FUN2(VAR7)) {
VAR6++;
VAR5[++VAR3] = VAR6;
} else {
*VAR6++ = '';
}

strcpy(VAR6, VAR2);
VAR6 += strlen(VAR2);

VAR6++;
VAR5[++VAR3] = 0;
}
}