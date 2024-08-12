static int FUN1(struct VAR1 *VAR2, int VAR3, u32 VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR6->VAR8[VAR9][VAR3];
struct mlx4_update_qp_params VAR10;
int VAR11;

if (!(VAR6->VAR12->VAR2->VAR13.VAR14 & VAR15))
return -VAR16;


if (VAR4 >> 12) {
VAR10.VAR17 = VAR18;
VAR10.VAR19  = VAR4 / 1000;
} else if (VAR4) {
VAR10.VAR17 = VAR20;
VAR10.VAR19  = VAR4;
} else { 
VAR10.VAR17 = 0;
VAR10.VAR19  = 0;
}

VAR11 = FUN3(VAR6->VAR12->VAR2, VAR8->VAR21, VAR22,
&VAR10);
return VAR11;
}