int FUN1(re_t VAR1, const char* VAR2, int* VAR3)
{
int VAR4;

if(NULL == VAR3)
{
VAR3 = &VAR4;
}

*VAR3 = 0;
if (VAR1 != 0)
{
if (VAR1[0].VAR5 == VAR6)
{
return ((FUN2(&VAR1[1], VAR2, VAR3)) ? 0 : -1);
}
else
{
int VAR7 = -1;

do
{
VAR7 += 1;

if (FUN2(VAR1, VAR2, VAR3))
{
if (VAR2[0] == '')
return -1;

return VAR7;
}
}
while (*VAR2++ != '');
}
}
return -1;
}