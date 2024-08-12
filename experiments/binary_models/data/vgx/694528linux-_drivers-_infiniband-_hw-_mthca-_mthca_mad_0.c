static void FUN1(struct VAR1 *VAR2,
u8 VAR3, u16 VAR4, u8 VAR5)
{
struct VAR6 *VAR7;
struct rdma_ah_attr VAR8;
unsigned long VAR9;

if (!VAR2->VAR10[VAR3 - 1][0])
return;

memset(&VAR8, 0, sizeof VAR8);
VAR8.VAR11 = FUN2(&VAR2->VAR12, VAR3);
FUN3(&VAR8, VAR4);
FUN4(&VAR8, VAR5);
FUN5(&VAR8, VAR3);

VAR7 = FUN6(VAR2->VAR10[VAR3 - 1][0]->VAR13->VAR14,
&VAR8, 0);
if (FUN7(VAR7))
return;

FUN8(&VAR2->VAR15, VAR9);
if (VAR2->VAR16[VAR3 - 1])
FUN9(VAR2->VAR16[VAR3 - 1], 0);
VAR2->VAR16[VAR3 - 1] = VAR7;
FUN10(&VAR2->VAR15, VAR9);
}