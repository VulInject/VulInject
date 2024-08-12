VAR1
FUN1(VAR1 * VAR2,
VAR3 *VAR4)
{
gss_buffer_set_t VAR5;

VAR5 = (VAR6 *) FUN2(sizeof(*VAR5));
if (VAR5 == VAR7) {
*VAR2 = VAR8;
return VAR9;
}

VAR5->VAR10 = 0;
VAR5->VAR11 = NULL;

*VAR4 = VAR5;

*VAR2 = 0;
return VAR12;
}