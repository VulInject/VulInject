static int FUN1(struct VAR1 *VAR2,
enum psp_ring_type VAR3)
{
int VAR4 = 0;
struct VAR5 *VAR6 = &VAR2->VAR7;
struct VAR8 *VAR9 = VAR2->VAR9;

VAR4 = FUN2(VAR2, VAR3);
if (VAR4)
FUN3("");

FUN4(&VAR9->VAR10.VAR11,
&VAR6->VAR12,
(void **)&VAR6->VAR13);

return VAR4;
}