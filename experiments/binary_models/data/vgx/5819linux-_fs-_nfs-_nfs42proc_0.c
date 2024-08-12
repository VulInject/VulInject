int FUN1(struct VAR1 *VAR2, loff_t VAR3, loff_t VAR4)
{
struct rpc_message VAR5 = {
.VAR6 = &VAR7[VAR8],
};
struct VAR9 *VAR9 = FUN2(VAR2);
int VAR10;

if (!FUN3(VAR9, VAR11))
return -VAR12;

FUN4(VAR9);

VAR10 = FUN5(&VAR5, VAR2, VAR3, VAR4);
if (VAR10 == -VAR12)
FUN6(VAR9)->VAR13 &= ~VAR11;

FUN7(VAR9);
return VAR10;
}