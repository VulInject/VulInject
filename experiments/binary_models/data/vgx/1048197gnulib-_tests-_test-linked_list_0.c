static void
FUN1 (gl_list_t VAR1, gl_list_t VAR2)
{
size_t VAR3, VAR4;

VAR3 = FUN2 (VAR1);
FUN3 (VAR3 == FUN2 (VAR2));
for (VAR4 = 0; VAR4 < VAR3; VAR4++)
{
FUN3 (FUN4 (VAR1, VAR4) == FUN4 (VAR2, VAR4));
}
}