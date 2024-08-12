static int
FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4,
enum sshkey_serialize_rep VAR5)
{
int VAR6;

if (VAR2->VAR7 == NULL)
return VAR8;
if ((VAR6 = FUN2(VAR4, VAR2->VAR7, VAR9)) != 0)
return VAR6;

return 0;
}