static void FUN1(struct VAR1 *VAR2,
u32 VAR3, u32 VAR4, u16 VAR5)
{
struct skb_shared_hwtstamps VAR6;
struct VAR7 *VAR8, *VAR9;
unsigned long VAR10;
bool VAR11 = false;
u16 VAR12;

FUN2(&VAR2->VAR13.VAR14, VAR10);
FUN3(&VAR2->VAR13, VAR8, VAR9) {
FUN4(VAR8, &VAR12);

if (memcmp(&VAR12, &VAR5, sizeof(VAR5)))
continue;

FUN5(VAR8, &VAR2->VAR13);
VAR11 = true;
break;
}
FUN6(&VAR2->VAR13.VAR14, VAR10);

if (VAR11) {
memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR15 = FUN7(VAR3, VAR4);
FUN8(VAR8, &VAR6);
}
}