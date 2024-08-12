static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
unsigned long VAR8;
int VAR9;

VAR9 = FUN2(VAR6, 10, &VAR8);
if (VAR9)
return VAR9;

VAR9 = FUN3(VAR10, VAR8);
if (VAR9 < 0)
return VAR9;

return VAR7;
}