static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct lio_vf_rep_req VAR5;
struct VAR6 *VAR7;
int VAR8;

VAR7 = VAR4->VAR7;

memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR9 = VAR10;
VAR5.VAR11 = VAR4->VAR11;
VAR5.VAR12.VAR13 = VAR14;

VAR8 = FUN3(VAR7, &VAR5,
sizeof(VAR5), NULL, 0);

if (VAR8) {
FUN4(&VAR7->VAR15->VAR16,
"", VAR8);
return -VAR17;
}

FUN5(&VAR4->VAR18, (FUN6(&VAR4->VAR18) &
~VAR19));

FUN7(VAR2);
FUN8(VAR2);

return 0;
}