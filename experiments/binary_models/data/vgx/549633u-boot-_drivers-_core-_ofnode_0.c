int FUN1(ofnode VAR1, const char *VAR2,
const char ***VAR3)
{
const char **VAR4;
int VAR5;
int VAR6;

*VAR3 = NULL;
VAR5 = FUN2(VAR1, VAR2);
if (VAR5 < 0)
return VAR5;
if (!VAR5)
return 0;

VAR4 = calloc(VAR5 + 1, sizeof(char *));
if (!VAR4)
return -VAR7;

for (VAR6 = 0; VAR6 < VAR5; VAR6++)
FUN3(VAR1, VAR2, VAR6, &VAR4[VAR6]);
VAR4[VAR5] = NULL;
*VAR3 = VAR4;

return VAR5;
}