static int FUN1(struct VAR1 *VAR1, const char *VAR2)
{
unsigned int VAR3;
char *VAR4;

if (!VAR1)
return -1;

for (VAR3 = 0; VAR3 < FUN2(VAR1->VAR5); VAR3++)
if ((VAR4 = FUN3(VAR1->VAR5, VAR3)) != NULL)
if (strcmp(VAR4, VAR2) == 0)
return VAR3;
return -1;
}