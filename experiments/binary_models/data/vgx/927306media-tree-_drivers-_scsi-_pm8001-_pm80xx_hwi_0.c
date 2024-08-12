int
FUN1(struct VAR1 *VAR2)
{
struct set_ctrl_cfg_req VAR3;
struct VAR4 *VAR5;
int VAR6;
u32 VAR7;
u32 VAR8 = VAR9;
u32 VAR10;

memset(&VAR3, 0, sizeof(struct VAR11));
VAR6 = FUN2(VAR2, &VAR7);
if (VAR6)
return -1;

VAR5 = &VAR2->VAR12[0];
VAR3.VAR7 = FUN3(VAR7);

if (FUN4(VAR2->VAR13))
VAR10 = VAR14;
else
VAR10 = VAR15;

VAR3.VAR16[0] = (VAR17 << 9) |
(VAR18 << 8) | VAR10;
VAR3.VAR16[1] = (VAR19 << 24) | (VAR20 << 8);

VAR6 = FUN5(VAR2, VAR5, VAR8, &VAR3, 0);
if (VAR6)
FUN6(VAR2, VAR7);
return VAR6;

}