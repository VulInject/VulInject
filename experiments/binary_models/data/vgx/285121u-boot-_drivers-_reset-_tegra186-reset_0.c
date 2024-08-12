static int FUN1(struct VAR1 *VAR1,
enum mrq_reset_commands VAR2)
{
struct mrq_reset_request VAR3;
int VAR4;

VAR3.VAR2 = VAR2;
VAR3.VAR5 = VAR1->VAR6;

VAR4 = FUN2(VAR1->VAR7->VAR8, VAR9, &VAR3, sizeof(VAR3),
NULL, 0);
if (VAR4 < 0)
return VAR4;

return 0;
}