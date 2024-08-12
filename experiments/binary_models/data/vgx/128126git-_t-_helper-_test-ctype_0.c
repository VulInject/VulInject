static int FUN1(const char *VAR1, int VAR2)
{

if (VAR2 == '')
return VAR2 == *VAR1;
if (*VAR1 == '')
VAR1++;
return !!strchr(VAR1, VAR2);
}