static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR4 = FUN2(VAR3->VAR5.VAR6.VAR7);
struct VAR8 *VAR8 = &VAR4->VAR9[0];
struct VAR10 *VAR11 = FUN3(VAR8);
struct nd_label_id VAR12;
resource_size_t VAR13 = 0;
struct VAR14 *VAR15;

if (!VAR3->VAR16)
return 0;
FUN4(&VAR12, VAR3->VAR16, VAR17);
FUN5(VAR11, VAR15)
if (strcmp(VAR15->VAR18, VAR12.VAR19) == 0)
VAR13 += FUN6(VAR15);
return VAR13;
}