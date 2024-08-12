int FUN1(struct VAR1 *VAR2, u16 VAR3)
{
enum prestera_accept_frm_type VAR4;
int VAR5;

VAR4 = VAR6;

if (VAR3) {
VAR5 = FUN2(VAR2, VAR3);
if (VAR5)
return VAR5;

VAR4 = VAR7;
}

VAR5 = FUN3(VAR2, VAR4);
if (VAR5 && VAR4 == VAR7)
FUN2(VAR2, VAR2->VAR8);

VAR2->VAR8 = VAR3;
return 0;
}