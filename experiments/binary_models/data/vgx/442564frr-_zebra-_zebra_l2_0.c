void FUN1(struct VAR1 *VAR2,
vlanid_t VAR3)
{
struct VAR4 *VAR5;
vlanid_t VAR6;
struct VAR7 *VAR8;
struct zebra_vxlan_if_update_ctx VAR9;


VAR5 = VAR2->VAR10;
assert(VAR5);


assert(FUN2(VAR5));

VAR6 = VAR5->VAR11.VAR12.VAR13.VAR8.VAR3;
;
if (VAR6 == VAR3)
return;

memset(&VAR9, 0, sizeof(VAR9));
VAR8 = FUN3(VAR5, 0);
VAR9.VAR14 = *VAR8;
VAR9.VAR15 = VAR16;
VAR8->VAR3 = VAR3;

FUN4(VAR6, VAR8->VAR8, VAR5);
FUN5(VAR3, VAR8->VAR8, VAR5);
FUN6(VAR2, &VAR9);
}