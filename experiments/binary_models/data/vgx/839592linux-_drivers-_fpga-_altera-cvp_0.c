static int FUN1(struct VAR1 *VAR2, size_t VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
u32 VAR7;
int VAR8;


VAR8 = FUN2(VAR5, VAR9, &VAR7);
if (VAR8 || (VAR7 & VAR10)) {
FUN3(&VAR2->VAR11, "",
VAR3);
return -VAR12;
}
return 0;
}