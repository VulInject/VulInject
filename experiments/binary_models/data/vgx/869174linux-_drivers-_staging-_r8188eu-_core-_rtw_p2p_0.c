VAR1 FUN1(struct VAR2 *VAR3, VAR4 *VAR5)
{
u8 VAR6[VAR7] = { 0x00 };
u16 VAR8 = 0;
u32 VAR9 = 0, VAR10 = 0;
__le16 VAR11;


VAR10 = 0;
VAR6[VAR10++] = 0x50;
VAR6[VAR10++] = 0x6F;
VAR6[VAR10++] = 0x9A;
VAR6[VAR10++] = 0x09;	














VAR8 = VAR12 | VAR13;
VAR8 |=  ((VAR14 | VAR15) << 8);
if (FUN2(VAR3, VAR16))
VAR8 |= (VAR17 << 8);

VAR11 = FUN3(VAR8);
VAR10 += FUN4(&VAR6[VAR10], VAR18, 2, (VAR4 *)&VAR11);


VAR10 += FUN4(&VAR6[VAR10], VAR19, VAR20, VAR3->VAR21);






VAR5 = FUN5(VAR5, VAR22, VAR10, (unsigned char *)VAR6, &VAR9);
return VAR9;
}