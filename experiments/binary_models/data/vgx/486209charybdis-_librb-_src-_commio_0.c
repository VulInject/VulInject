static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR2;

if(VAR2->VAR5 == VAR6 && FUN2(&VAR4->VAR7))
{
struct sockaddr_in VAR8;
memset(&VAR8, 0, sizeof(struct VAR9));
VAR8.VAR10 = VAR11;
VAR8.VAR12 = VAR4->VAR13;
VAR8.VAR14.VAR15 = ((VAR16 *)&VAR4->VAR7)[3];
memcpy(VAR2, &VAR8, sizeof(struct VAR9));
}
}