static void *FUN1(struct VAR1 *VAR2, u16 VAR3, u16 VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
void *VAR8;


FUN2(&(VAR6->mutex));

FUN3(VAR2,
VAR9,
"",
VAR3);


VAR6->VAR10 = (VAR11 *)VAR6->VAR12;


memset(VAR6->VAR12, 0, sizeof(union VAR13));
memset(VAR6->VAR14, 0, sizeof(union VAR15));


VAR8 = FUN4(VAR2, &VAR6->VAR10, VAR3, VAR4);


((struct VAR16 *)VAR8)->VAR17 =
(VAR18)VAR6->VAR19;

return VAR8;
}