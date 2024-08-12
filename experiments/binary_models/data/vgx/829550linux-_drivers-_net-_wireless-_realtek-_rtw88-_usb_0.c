static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
u32 VAR5)
{
const struct VAR6 *VAR7 = VAR2->VAR7;
struct rtw_tx_pkt_info VAR8 = {0};

VAR8.VAR9 = VAR5;
VAR8.VAR10 = VAR11;
VAR8.VAR12 = VAR7->VAR13;

return FUN2(VAR2, &VAR8, VAR4);
}