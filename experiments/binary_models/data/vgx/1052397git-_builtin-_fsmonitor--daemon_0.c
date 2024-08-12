static int FUN1(const char *VAR1,
struct VAR2 *VAR3,
VAR4 *VAR5)
{
const char *VAR6;
char *VAR7;

FUN2(VAR3);
*VAR5 = 0;

if (!FUN3(VAR1, "", &VAR6))
return -1;

while (*VAR6 && *VAR6 != '')
FUN4(VAR3, *VAR6++);
if (!*VAR6++)
return -1;

*VAR5 = (VAR4)FUN5(VAR6, &VAR7, 10);
if (*VAR7)
return -1;

return 0;
}