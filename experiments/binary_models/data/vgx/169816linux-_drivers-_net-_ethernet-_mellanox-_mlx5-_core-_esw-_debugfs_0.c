static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
enum vnic_diag_counter VAR5)
{
u64 VAR6 = 0;
int VAR7;

VAR7 = FUN2(VAR4, VAR5, &VAR6);
if (VAR7)
return VAR7;

FUN3(VAR2, "", VAR6);
return 0;
}