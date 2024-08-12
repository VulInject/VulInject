int FUN1(struct VAR1 *VAR2, u8 VAR3,
enum wl1251_acx_channel_type VAR4,
u8 VAR5, enum wl1251_acx_ps_scheme VAR6,
enum wl1251_acx_ack_policy VAR7)
{
struct VAR8 *VAR9;
int VAR10 = 0;

FUN2(VAR11, ""
"", VAR3, VAR4, VAR5,
VAR6, VAR7);

VAR9 = FUN3(sizeof(*VAR9), VAR12);
if (!VAR9)
return -VAR13;

VAR9->VAR3 = VAR3;
VAR9->VAR4 = VAR4;
VAR9->VAR5 = VAR5;
VAR9->VAR6 = VAR6;
VAR9->VAR7 = VAR7;

VAR10 = FUN4(VAR2, VAR14, VAR9, sizeof(*VAR9));
if (VAR10 < 0) {
FUN5("", VAR10);
goto VAR15;
}

VAR15:
FUN6(VAR9);
return VAR10;
}