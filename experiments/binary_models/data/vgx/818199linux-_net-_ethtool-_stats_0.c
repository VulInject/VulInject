}
FUN1(VAR1);

void FUN2(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
const struct VAR6 *VAR7 = VAR3->VAR6;
struct ethtool_eth_phy_stats VAR8, VAR9;

memset(&VAR9, 0xff, sizeof(VAR9));
memset(&VAR8, 0xff, sizeof(VAR8));
VAR9.VAR10 = VAR11;
VAR8.VAR10 = VAR12;

VAR7->FUN3(VAR3, &VAR9);
VAR7->FUN3(VAR3, &VAR8);

FUN4(VAR5, &VAR9, &VAR8,
sizeof(VAR5->VAR13),
FUN5(struct VAR4, VAR13));
}