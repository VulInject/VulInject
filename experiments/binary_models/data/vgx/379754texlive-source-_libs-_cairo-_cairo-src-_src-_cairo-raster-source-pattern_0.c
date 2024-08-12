FUN1 (VAR1 *VAR2,
const VAR1 *VAR3)
{
VAR4 *VAR5 =
(VAR4 *) VAR2;
cairo_status_t VAR6;

FUN2 (FUN3 (VAR5, sizeof (VAR4)));
memcpy(VAR5, VAR3, sizeof (VAR4));

VAR6 = VAR7;
if (VAR5->copy)
VAR6 = VAR5->copy (&VAR5->VAR8, VAR5->VAR9, VAR3);

return VAR6;
}