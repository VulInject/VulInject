FUN1 (tree VAR1)
{
const char *VAR2;
size_t VAR3;


if (FUN2 (VAR1) == 0 || ! FUN3 (VAR1))
return 0;

VAR2 = FUN4 (FUN2 (VAR1));


for (VAR3 = 0; VAR3 < FUN5 (VAR4); VAR3++)
if (!strcmp (VAR4[VAR3].VAR2, VAR2))
goto VAR5;
return 0;

VAR5:

if (FUN6 (FUN7 (VAR1)) == 8)
{
if (VAR4[VAR3].VAR6 == -4)
return -31;
if (VAR4[VAR3].VAR6 == -10)
return -32;
}
return VAR4[VAR3].VAR6;
}