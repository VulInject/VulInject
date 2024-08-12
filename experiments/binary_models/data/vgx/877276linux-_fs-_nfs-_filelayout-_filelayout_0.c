static struct VAR1 *
FUN1(struct VAR2 *VAR2, gfp_t VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(sizeof(*VAR5), VAR3);
if (VAR5 == NULL)
return NULL;
FUN3(&VAR5->VAR6);
VAR5->VAR6.VAR7 = &VAR8;
return &VAR5->VAR9;
}