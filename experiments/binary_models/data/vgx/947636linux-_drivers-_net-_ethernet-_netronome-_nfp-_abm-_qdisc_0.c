static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
enum nfp_qdisc_type VAR5, u32 VAR6, u32 VAR7,
unsigned int VAR8, struct VAR9 **VAR10)
{
*VAR10 = FUN2(VAR4, VAR7);
if (*VAR10) {
if (FUN3((*VAR10)->VAR5 != VAR5))
return -VAR11;
return 1;
}

*VAR10 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7,
VAR8);
return *VAR10 ? 0 : -VAR12;
}