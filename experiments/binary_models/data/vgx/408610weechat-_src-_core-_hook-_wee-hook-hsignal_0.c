FUN1 (const char *signal, struct VAR1 *VAR2)
{
struct VAR3 *VAR4, *VAR5;
int VAR6;

VAR6 = VAR7;

FUN2 ();

VAR4 = VAR8[VAR9];
while (VAR4)
{
VAR5 = VAR4->VAR5;

if (!VAR4->VAR10
&& !VAR4->VAR11
&& (FUN3 (signal, VAR4)))
{
VAR4->VAR11 = 1;
VAR6 = (FUN4(VAR4, VAR12))
(VAR4->VAR13,
VAR4->VAR14,
signal,
VAR2);
VAR4->VAR11 = 0;

if (VAR6 == VAR15)
break;
}

VAR4 = VAR5;
}

FUN5 ();

return VAR6;
}