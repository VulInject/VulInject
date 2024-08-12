int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct {
u8 VAR5;
u8 VAR6;
u8 VAR7[VAR8];
u8 VAR9;
u8 VAR10;
__le16 VAR11;
__le32 VAR12;
__le32 VAR13;
u8 VAR14;
u8 VAR15;
u8 VAR16[2];
__le32 VAR17;
u8 VAR18;
u8 VAR19;
u8 VAR20;
u8 VAR21;
} __packed VAR22 = {
.VAR5 = 5,
.VAR6 = VAR4 ? VAR23 : VAR24,
.VAR14 = VAR3,
};

return FUN2(VAR2, FUN3(VAR25), &VAR22,
sizeof(VAR22), true);
}