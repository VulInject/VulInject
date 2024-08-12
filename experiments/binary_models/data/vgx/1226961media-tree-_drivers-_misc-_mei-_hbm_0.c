int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u8 VAR5)
{

struct mei_msg_hdr VAR6;
struct hbm_notification_request VAR7;
const size_t VAR8 = sizeof(struct VAR9);
int VAR10;

FUN2(&VAR6, VAR8);
FUN3(VAR4, VAR11, &VAR7, VAR8);

VAR7.VAR5 = VAR5;

VAR10 = FUN4(VAR2, &VAR6, &VAR7);
if (VAR10)
FUN5(VAR2->VAR2, "", VAR10);

return VAR10;
}