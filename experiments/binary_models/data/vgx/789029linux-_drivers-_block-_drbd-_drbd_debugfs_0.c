static void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
unsigned long VAR5)
{
struct drbd_thread_timing_details VAR6;

do {
VAR6 = *VAR4;
} while (VAR6.VAR7 != VAR4->VAR7);
if (!VAR6.VAR8)
return;
FUN2(VAR2, "",
VAR6.VAR7,
FUN3(VAR5 - VAR6.VAR9),
VAR6.VAR10, VAR6.VAR11,
VAR6.VAR8);
}