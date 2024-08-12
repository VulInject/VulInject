int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

if (!VAR2)
return (0);

(void) FUN2("", (void *) VAR2);

FUN3(VAR4, VAR2, VAR5)
(void) FUN2(
"",
VAR4->VAR6, VAR4->VAR7, VAR4->VAR8? VAR4->VAR8 : "",
VAR4->VAR9);

return (0);
}