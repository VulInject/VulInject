static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
int *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR1);
struct VAR7 *VAR8 = VAR6->VAR8;
struct p80211msg_dot11req_mibget VAR9;
struct VAR10 *VAR11;
int VAR12;
int VAR13 = 0;

VAR11 = (struct VAR10 *)&VAR9.VAR14.VAR15;
VAR9.VAR16 = VAR17;
VAR11->VAR18 =
VAR19;

VAR12 = FUN3(VAR8, (VAR20 *)&VAR9);

if (VAR12) {
VAR13 = -VAR21;
goto VAR22;
}

*VAR4 = VAR11->VAR15;

VAR22:
return VAR13;
}