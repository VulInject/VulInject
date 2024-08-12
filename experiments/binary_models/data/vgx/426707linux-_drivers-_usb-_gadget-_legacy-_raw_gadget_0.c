static int FUN1(struct VAR1 *VAR2,
enum usb_raw_event_type VAR3, size_t VAR4, const void *VAR5)
{
int VAR6 = 0;
unsigned long VAR7;

VAR6 = FUN2(&VAR2->VAR8, VAR3, VAR4, VAR5);
if (VAR6 < 0) {
FUN3(&VAR2->VAR9, VAR7);
VAR2->VAR10 = VAR11;
FUN4(&VAR2->VAR9, VAR7);
}
return VAR6;
}