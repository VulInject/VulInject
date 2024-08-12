static int FUN1(struct VAR1 *VAR2,
u32 VAR3, int VAR4,
struct VAR5 *VAR6)
{
struct mthca_set_ib_param VAR7;
struct ib_port_attr VAR8;
int VAR9;

if (FUN2(&FUN3(VAR2)->VAR10))
return -VAR11;

VAR9 = FUN4(VAR2, VAR3, &VAR8);
if (VAR9)
goto VAR12;

VAR7.VAR13     = 0;
VAR7.VAR14 = !!(VAR4 & VAR15);

VAR7.VAR16 = (VAR8.VAR17 | VAR6->VAR18) &
~VAR6->VAR19;

VAR9 = FUN5(FUN3(VAR2), &VAR7, VAR3);
if (VAR9)
goto VAR12;
VAR12:
FUN6(&FUN3(VAR2)->VAR10);
return VAR9;
}