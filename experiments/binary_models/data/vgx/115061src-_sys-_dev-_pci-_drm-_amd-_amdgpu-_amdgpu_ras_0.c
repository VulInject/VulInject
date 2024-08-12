static int FUN1(const char *VAR1, int *VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < FUN2(VAR4); VAR3++) {
*VAR2 = VAR3;
if (strcmp(VAR1, VAR4[VAR3]) == 0)
return 0;
}
return -VAR5;
}