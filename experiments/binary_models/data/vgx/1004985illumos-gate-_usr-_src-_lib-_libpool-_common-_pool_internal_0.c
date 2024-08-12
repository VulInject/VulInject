VAR1
FUN1(void)
{
uint_t VAR2 = 0;
int VAR3;

for (VAR3 = 0; VAR3 < sizeof (VAR4) /
sizeof (VAR4[0]); VAR3++) {
if (VAR4[VAR3] != NULL)
VAR2++;
}
return (VAR2);
}