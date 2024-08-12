FUN1 (char *VAR1)
{
char VAR2;

VAR2 = *++VAR1;
if (VAR2 != '')
return 0;
for (;;)
{
VAR2 = *VAR1;
if (FUN2 (VAR2))
VAR1++;
else
{
if (VAR2 == '')
break;
else
return 0;
}
}
return 1;
}