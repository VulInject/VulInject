static void FUN1(VAR1 *VAR2)
{
int VAR3;
u8 VAR4[VAR5];

for (VAR3 = 0; VAR3 < VAR5; VAR3++)
VAR4[VAR3] = VAR2[VAR5 - VAR3 - 1];
FUN2(VAR2, VAR4);
}

struct VAR6 {
enum iwl_rx_phy_info_type VAR7;
__le32 VAR8, VAR9, VAR10, VAR11;
__le16 VAR12;

u32 VAR13;
u32 VAR14;
u16 VAR15;
u8 VAR16, VAR17;
u8 VAR18;
};