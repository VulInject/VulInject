static int FUN1(struct VAR1 *VAR2,
enum qca8k_vlan_cmd VAR3, u16 VAR4)
{
u32 VAR5;
int VAR6;


VAR5 = VAR7;
VAR5 |= VAR3;
VAR5 |= FUN2(VAR8, VAR4);


VAR6 = FUN3(VAR2, VAR9, VAR5);
if (VAR6)
return VAR6;


VAR6 = FUN4(VAR2, VAR9, VAR7);
if (VAR6)
return VAR6;


if (VAR3 == VAR10) {
VAR6 = FUN5(VAR2, VAR9, &VAR5);
if (VAR6 < 0)
return VAR6;
if (VAR5 & VAR11)
return -VAR12;
}

return 0;
}