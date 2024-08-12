static void FUN1(
unsigned int VAR1,
enum ia_css_buffer_type VAR2)
{
int VAR3;

assert(VAR1 < VAR4);
assert(VAR2 < VAR5);
assert(VAR6[VAR1][VAR2] != VAR7);

VAR3 = VAR6[VAR1][VAR2];
VAR6[VAR1][VAR2] = VAR7;
VAR8[VAR1][VAR3] = true;
}