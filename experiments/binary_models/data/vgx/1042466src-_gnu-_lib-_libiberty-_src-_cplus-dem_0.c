FUN1 (struct VAR1 *VAR2, const char **VAR3,
VAR4 *VAR5, type_kind_t VAR6)
{
int VAR7 = 0;
int VAR8;

VAR8 = 1;
FUN2 (VAR5, "", 1);
(*VAR3)++;
while (VAR8 && **VAR3 != '' && **VAR3 != '')
{
if (VAR7)
{
size_t VAR9;
size_t VAR10;

VAR8 = 0;

VAR10 = strlen (*VAR3);

for (VAR9 = 0; VAR9 < FUN3 (VAR11); ++VAR9)
{
size_t VAR12 = strlen (VAR11[VAR9].VAR13);

if (VAR12 <= VAR10
&& memcmp (VAR11[VAR9].VAR13, *VAR3, VAR12) == 0)
{
FUN2 (VAR5, "", 1);
FUN4 (VAR5, VAR11[VAR9].VAR14);
FUN2 (VAR5, "", 1);
VAR8 = 1;
(*VAR3) += VAR12;
break;
}
}

if (!VAR8)
break;
}
else
VAR7 = 1;

VAR8 = FUN5 (VAR2, VAR3, VAR5, VAR6);
}

if (**VAR3 != '')
VAR8 = 0;
else
{
FUN2 (VAR5, "", 1);
(*VAR3)++;
}

return VAR8;
}