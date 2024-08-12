FUN1 (const char *VAR1, int VAR2)
{
size_t VAR3;


FUN2 (VAR2 != VAR4);


for (VAR3 = 0; VAR3 < VAR5; ++VAR3)
if (strcmp (VAR6[VAR3].VAR7, VAR1) == 0)
{
if (VAR2 < VAR6[VAR3].VAR8)
FUN3 ("",
VAR6[VAR3].VAR7,
VAR6[VAR3].VAR8);
else if (VAR6[VAR3].VAR9 > VAR6[VAR3].VAR8
&& VAR2 > VAR6[VAR3].VAR9)
FUN3 ("",
VAR6[VAR3].VAR7,
VAR6[VAR3].VAR9);
else
VAR6[VAR3].VAR2 = VAR2;
return;
}


FUN3 ("", VAR1);
}