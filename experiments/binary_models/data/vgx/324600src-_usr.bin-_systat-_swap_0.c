int
FUN1(void)
{
VAR1 = 1;

VAR2 = FUN2(VAR3, 0, 0);

if (VAR2 < 0)
FUN3("", strerror(VAR4));
if (VAR2 == 0)
return 0;

if (VAR5)
(void)free(VAR5);

VAR5 = calloc(VAR2, sizeof(*VAR5));
if (VAR5 == NULL)
return 0;

VAR6 = FUN2(VAR7, (void *)VAR5, VAR2);
if (VAR6 == -1 || VAR2 != VAR6)
return 0;

VAR1 = VAR2;
if (VAR2 > 1)
VAR1++;

return 0;
}