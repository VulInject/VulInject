static inline void FUN1(struct VAR1 *VAR2,
enum zebra_iftype VAR3,
enum zebra_slave_iftype VAR4)
{
struct VAR5 *VAR6;

VAR6 = (struct VAR5 *)VAR2->VAR7;
VAR6->VAR4 = VAR4;

if (VAR6->VAR3 != VAR3) {
VAR6->VAR3 = VAR3;

FUN2(VAR6);
}
}