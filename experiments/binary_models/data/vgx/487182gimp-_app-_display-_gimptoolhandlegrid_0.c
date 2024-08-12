FUN1 (VAR1 *VAR2)
{
VAR3        *VAR4    = FUN2 (VAR2);
VAR5 *private = VAR4->private;
gint                       VAR6;

FUN3 (VAR7)->FUN4 (VAR2);

for (VAR6 = 0; VAR6 < 4; VAR6++)
{
FUN5 (private->VAR8[VAR6 + 1],
private->VAR9[VAR6].VAR10,
private->VAR9[VAR6].VAR11);
FUN6 (private->VAR8[VAR6 + 1],
VAR6 < private->VAR12);
}

FUN7 (VAR4);
}