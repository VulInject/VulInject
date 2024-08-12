static int
FUN1(unsigned int VAR1)
{
unsigned int VAR2;
for (VAR2 = 0; VAR2 < FUN2(VAR3); VAR2++) {
if (VAR1 == VAR3[VAR2])
return VAR2;
}
FUN3();
return 0;
}