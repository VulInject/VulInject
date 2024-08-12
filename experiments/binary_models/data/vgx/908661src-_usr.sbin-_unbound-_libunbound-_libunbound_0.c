static int
FUN1(struct VAR1* VAR2, VAR3* VAR4, uint32_t VAR5)
{
int VAR6;
ub_callback_type VAR7;
void* VAR8;
struct VAR9* VAR10;
int VAR11;

VAR11 = FUN2(VAR2, VAR4, VAR5, &VAR7, &VAR8, &VAR6, &VAR10);


if(VAR11 == 2)
(*VAR7)(VAR8, VAR6, VAR10);

return VAR11;
}