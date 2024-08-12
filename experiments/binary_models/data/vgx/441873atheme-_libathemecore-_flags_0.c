const char *
FUN1(unsigned int VAR1)
{
unsigned int VAR2;
static char VAR3[VAR4];

*VAR3 = '';

for (VAR2 = 0; VAR2 < FUN2(VAR5); VAR2++)
{
if (VAR5[VAR2].VAR6 == NULL)
continue;

if (!(VAR1 & VAR5[VAR2].VAR7))
continue;

if (*VAR3 != '')
FUN3(VAR3, "", sizeof VAR3);

FUN3(VAR3, VAR5[VAR2].VAR6, sizeof VAR3);
}

return VAR3;
}