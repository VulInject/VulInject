char *
FUN1(const char *VAR1)
{
const char	*VAR2;
char		*VAR3, *VAR4 = NULL;
int		VAR5;


for (VAR2 = VAR1, VAR5 = 0; *VAR2; VAR2++)
if (*VAR2 == '' || *VAR2 == '' || *VAR2 == '' ||
*VAR2 == '' || *VAR2 == '')
VAR5++;

if (VAR5 == 0)
return ((char *)VAR1);

VAR4 = calloc(1, VAR5 * 2 + strlen(VAR1) + 1);
if (VAR4 == NULL)
return (NULL);
for (VAR2 = VAR1, VAR3 = VAR4; *VAR2; VAR2++) {
if (*VAR2 == '' || *VAR2 == '' || *VAR2 == '' ||
*VAR2 == '' || *VAR2 == '') {
*VAR3++ = '';
*VAR3++ = FUN2(*VAR2 >> 4);
*VAR3++ = FUN2(*VAR2 & 0xf);
} else
*VAR3++ = *VAR2;
}
return (VAR4);
}