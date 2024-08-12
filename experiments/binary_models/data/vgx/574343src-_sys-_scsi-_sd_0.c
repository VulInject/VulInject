int
FUN1(struct VAR1 *VAR2, int read, u_int64_t VAR3,
u_int32_t VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR2;

VAR6->VAR7 = read ? VAR8 : VAR9;
FUN2(VAR3, VAR6->VAR10);
FUN2(VAR4, VAR6->VAR11);

return sizeof(*VAR6);
}