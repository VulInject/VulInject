static struct VAR1 *
FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR4)
{
struct VAR1 *VAR5, *VAR6;
struct nfs_commit_info VAR7;
struct VAR8 *VAR8 = &VAR3->VAR9;

FUN2(&VAR7, VAR8);


VAR5 = FUN3(VAR8, &VAR7, VAR4);
if (VAR5)
return VAR5->VAR10;


FUN4(VAR5, VAR6, &VAR7.VAR11->VAR12, VAR13) {
if (VAR5->VAR14 == VAR4)
return VAR5->VAR10;
}

return NULL;
}