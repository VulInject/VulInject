void FUN1(char *VAR1)
{
int VAR2;

for (VAR2 = 0; VAR2 < FUN2(VAR3); VAR2++)
if (!FUN3(VAR1, VAR3[VAR2],
strlen(VAR3[VAR2])))
break;
if (VAR2 >= FUN2(VAR3))
return;

VAR4 = VAR2;
}