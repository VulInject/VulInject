FUN1 (VAR1 *VAR2,
const VAR3 *VAR4)
{
cairo_status_t VAR5 = VAR6;
pixman_region32_t VAR7;

if (VAR2->VAR5)
return VAR2->VAR5;

FUN2 (&VAR7,
VAR4->VAR8, VAR4->VAR9,
VAR4->VAR10, VAR4->VAR11);

if (! FUN3 (&VAR2->VAR12, &VAR2->VAR12, &VAR7))
VAR5 = FUN4 (VAR2, VAR13);

FUN5 (&VAR7);

return VAR5;
}