static int FUN1(struct VAR1 *VAR2,
enum stratix10_svc_command_code VAR3,
void *VAR4, u32 VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR2->VAR10.VAR9;
struct stratix10_svc_client_msg VAR11;
int VAR12;

FUN2(VAR9, "",
VAR13, VAR3, VAR4, VAR5);

VAR11.VAR3 = VAR3;
VAR11.VAR4 = VAR4;
VAR11.VAR5 = VAR5;

VAR12 = FUN3(VAR7, &VAR11);
FUN2(VAR9, "", VAR12);

return VAR12;
}