static void
FUN1(VAR1 ** VAR2)
{
pa_stream_state_t VAR3;
int VAR4;


assert(VAR2 != NULL);

if (*VAR2 != NULL)
{
FUN2(VAR5);

VAR3 = FUN3(*VAR2);
if (VAR3 == VAR6)
{
if (FUN4(*VAR2) != 0)
{
VAR4 = FUN5(VAR7);
FUN6(VAR8, VAR9,
"",
FUN7(VAR4));
}
}
FUN8(*VAR2);
*VAR2 = NULL;

FUN9(VAR5);
}
}