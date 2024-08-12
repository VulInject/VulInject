static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
enum dlm_query_join_response_code VAR5)
{
int VAR6;

if (VAR5 == VAR7) {
FUN2(0, "");
return 1;
}

FUN3(&VAR2->VAR8);

VAR6 = memcmp(VAR4->VAR9, VAR2->VAR10,
sizeof(VAR2->VAR10));
FUN4(&VAR2->VAR8);

if (VAR6)
FUN2(0, "");

return VAR6;
}