VAR1 *
FUN1(const char  *VAR2,
size_t       VAR3,
VAR4      *VAR5)
{
size_t    VAR6;
VAR1  *VAR7, *VAR8;

if (!VAR5)
return (VAR1 *)FUN2("", VAR9, NULL);
*VAR5 = 0;
if (!VAR2)
return (VAR1 *)FUN2("", VAR9, NULL);

if (VAR3 == 0) VAR3 = strlen(VAR2);
if ((VAR7 = FUN3(VAR2, VAR3, &VAR6)) == NULL)
return (VAR1 *)FUN2("", VAR9, NULL);
VAR8 = FUN4(VAR7, VAR6, VAR5);
FUN5(VAR7);
return VAR8;
}