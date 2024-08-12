FUN1 (struct VAR1 *VAR2, const char *VAR3, va_list VAR4)
{

enum { VAR5 = 1024 };
char VAR6[VAR5];
char *VAR7 = FUN2 (VAR2);
size_t VAR8 = FUN3 (VAR2);
char *VAR9;

if (VAR8 < VAR5)
{
VAR7 = VAR6;
VAR8 = VAR5;
}
VAR9 = FUN4 (VAR7, &VAR8, VAR3, VAR4);
if (!VAR9)
{
if (VAR10 == VAR11)
FUN5 ();
return -1;
}
if (VAR9 == VAR7 && VAR9 != VAR6)

FUN6 (VAR2, VAR8);
else
{

FUN7 (VAR2, VAR9, VAR8);
if (VAR9 != VAR6)
free (VAR9);
}
return VAR8;
}