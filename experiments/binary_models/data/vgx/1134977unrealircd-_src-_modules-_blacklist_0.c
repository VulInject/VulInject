char *FUN1(char *VAR1, VAR2 *VAR3)
{
int VAR4 = 0;
int VAR5;

if (!VAR3)
return NULL;

if (FUN2(VAR3)->VAR6)
VAR5 = 32;
else
VAR5 = 4;

for (; *VAR1; VAR1++)
{
if (*VAR1 == '')
{
VAR4++;
if (VAR4 == VAR5)
return VAR1+1;
}
}
return NULL;
}