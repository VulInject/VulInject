static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u32 VAR5)
{
int VAR6;

VAR5 += sizeof(struct VAR3);

VAR6 = FUN2(VAR2, (VAR7 *)VAR4, VAR5);
if (VAR6 != VAR5) {
FUN3(&VAR2->VAR8, "");
return VAR6;
}

return 0;
}