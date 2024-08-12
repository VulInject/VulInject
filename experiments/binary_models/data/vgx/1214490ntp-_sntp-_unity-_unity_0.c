void FUN1(const char* VAR1)
{
const char* VAR2 = VAR1;

if (VAR2 != NULL)
{
while (*VAR2)
{

if ((*VAR2 <= 126) && (*VAR2 >= 32))
{
FUN2(*VAR2);
}

else if (*VAR2 == 13)
{
FUN2('');
FUN2('');
}

else if (*VAR2 == 10)
{
FUN2('');
FUN2('');
}

else
{
FUN2('');
FUN3((VAR3)*VAR2, 2);
}
VAR2++;
}
}
}