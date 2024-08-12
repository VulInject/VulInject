int FUN1(struct VAR1 *VAR2, unsigned VAR3,
struct VAR4 **VAR5, struct VAR6 *VAR7)
{
size_t VAR8 = sizeof(struct VAR4);

if (VAR3 == 0)
return -VAR9;

VAR8 += sizeof(struct VAR10) * VAR3;

*VAR5 = FUN2(VAR8, VAR11);
if (!*VAR5)
return -VAR12;

(*VAR5)->VAR2 = VAR2;
(*VAR5)->VAR7 = VAR7;
(*VAR5)->VAR13 = (void *)&(*VAR5)[1];
(*VAR5)->VAR3 = VAR3;
(*VAR5)->VAR14 = false;

FUN3(&(*VAR5)->VAR15);

return 0;
}