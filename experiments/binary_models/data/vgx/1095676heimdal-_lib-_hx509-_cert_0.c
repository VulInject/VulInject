static int
FUN1(const VAR1 *VAR2,
VAR3 *VAR4)
{
const VAR5 *VAR6;
size_t VAR7;
size_t VAR8 = 0;

memset(VAR4, 0, sizeof(*VAR4));

VAR6 = FUN2(VAR2, &VAR9, &VAR8);
if (VAR6 == NULL)
return VAR10;

return FUN3(VAR6->VAR11.VAR12,
VAR6->VAR11.VAR13,
VAR4, &VAR7);
}