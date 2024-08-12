int
FUN1(const char **VAR1, const char *VAR2)
{
int VAR3, VAR4;
if (*VAR1 == NULL)	
return (0);
if (VAR2 == NULL || *VAR2 == '')
return (1);

VAR3 = strlen(*VAR1);	
VAR4 = strlen(VAR2);
if (VAR4 > VAR3 || FUN2(*VAR1, VAR2, VAR4))	
return (0);	
(*VAR1) += VAR4;		
return (1);
}