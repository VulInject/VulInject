int strcmp(const char *VAR1, const char *VAR2)
{
int VAR3;

while (1) {
unsigned char VAR4 = *VAR1++;
unsigned char VAR5 = *VAR2++;

VAR3 = VAR4 - VAR5;
if (VAR3 || !VAR5)
break;
}

return VAR3;
}