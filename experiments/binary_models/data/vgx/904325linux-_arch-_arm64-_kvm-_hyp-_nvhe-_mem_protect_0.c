static int FUN1(u64 VAR1, const struct VAR2 *VAR3,
enum pkvm_page_state VAR4)
{
u64 VAR5 = VAR3->VAR6 * VAR7;

if (FUN2(VAR3))
return 0;

return FUN3(VAR1, VAR5, VAR4);
}