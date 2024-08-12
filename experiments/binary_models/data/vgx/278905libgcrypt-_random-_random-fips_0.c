FUN1 (size_t VAR1)
{
void *VAR2;
int VAR3;

FUN2 (!VAR4);
VAR4 = FUN3 (VAR1);
VAR5 = VAR1;
VAR6 = 0;

VAR3 = FUN4 (VAR7, 0,
VAR8,
VAR9);
do
{
VAR3 = FUN5 (VAR7, 0,
VAR8,
VAR9);
}
while (VAR3 >= 0 && VAR6 < VAR5);
VAR3 = -1;

if (VAR3 < 0 || VAR6 != VAR5)
{
FUN6 (VAR4);
VAR4 = NULL;
FUN7 ("");
}
VAR2 = VAR4;
VAR4 = NULL;
return VAR2;
}