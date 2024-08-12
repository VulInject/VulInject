int FUN1(struct VAR1 *VAR2, enum dm_tag_t VAR3, void *VAR4)
{
struct VAR5 *VAR6;

if (!VAR2 || VAR3 >= VAR7)
return -VAR8;

FUN2(VAR6, &VAR9->VAR10, VAR11) {
if (VAR6->VAR2 == VAR2 && VAR6->VAR3 == VAR3)
return -VAR12;
}

VAR6 = calloc(sizeof(*VAR6), 1);
if (!VAR6)
return -VAR13;

VAR6->VAR2 = VAR2;
VAR6->VAR3 = VAR3;
VAR6->VAR4 = VAR4;
FUN3(&VAR6->VAR11, (struct VAR14 *)&VAR9->VAR10);

return 0;
}