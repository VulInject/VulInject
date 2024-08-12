struct VAR1 *FUN1(bool VAR2,
uint32_t VAR3,
VAR4 *VAR5)
{
struct VAR1 *VAR6 =
(struct VAR1 *)FUN2(
sizeof(struct VAR1), VAR7,
VAR8, VAR5);

VAR6->VAR9 = VAR2;
VAR6->VAR3 = VAR3;

return VAR6;
}