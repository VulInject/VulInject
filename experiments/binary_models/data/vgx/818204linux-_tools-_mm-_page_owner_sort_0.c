static int FUN1(const char *VAR1, const char *VAR2)
{
char *VAR3, *VAR4, *VAR5;
int VAR6 = 0;

if (strstr(VAR2, ""))
VAR6 |= VAR7;
if (strstr(VAR2, ""))
VAR6 |= VAR8;
VAR3 = strstr(VAR1, "");
if (VAR3) {
VAR5 = VAR3;
while (*VAR3 != '')
VAR3--;
VAR3--;
while (*VAR3 != '')
VAR3--;
VAR4 = ++VAR3;
VAR3 = strstr(VAR3, "");
if (VAR3 && VAR4 <= VAR3 && VAR3 < VAR5)
VAR6 |= VAR9;
}
if (VAR6 == 0)
VAR6 = VAR10;
return VAR6;
}