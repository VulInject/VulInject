FUN1 (const void *VAR1, void *VAR2,
const char *VAR3,
void *VAR4, const char *VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9;


(void) VAR1;
(void) VAR2;
(void) VAR3;

if (VAR4 && !FUN2 (VAR4))
return NULL;

VAR7 = FUN3 ();
if (!VAR7)
return NULL;

if (VAR4)
{

if (!FUN4 (VAR7, VAR4, 0))
{
FUN5 (VAR7);
return NULL;
}
return VAR7;
}
else
{

for (VAR9 = VAR10; VAR9;
VAR9 = VAR9->VAR11)
{
if (!VAR5 || !VAR5[0]
|| FUN6 (VAR9->VAR12, VAR5, 1))
{
if (!FUN4 (VAR7, VAR9, 0))
{
FUN5 (VAR7);
return NULL;
}
}
}
return VAR7;
}

return NULL;
}