char *FUN1(const char *VAR1, const char *VAR2)
{
int VAR3 = strlen(VAR1);
int VAR4 = strlen(VAR2);
int VAR5;
int VAR6 = 1;
char *VAR7;

VAR5 = VAR3 + VAR4 + 2;
if ((VAR3 > 0) && (VAR1[VAR3-1] == '')) {
VAR6 = 0;
VAR5--;
}

VAR7 = xmalloc(VAR5);
memcpy(VAR7, VAR1, VAR3);
if (VAR6) {
VAR7[VAR3] = '';
VAR3++;
}
memcpy(VAR7+VAR3, VAR2, VAR4+1);
return VAR7;
}