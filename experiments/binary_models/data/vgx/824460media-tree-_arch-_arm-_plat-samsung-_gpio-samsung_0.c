int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, samsung_gpio_pull_t VAR4)
{
void VAR5 *VAR6 = VAR2->VAR7 + 0x08;
int VAR8 = VAR3 * 2;
u32 VAR9;

VAR9 = FUN2(VAR6);
VAR9 &= ~(3 << VAR8);
VAR9 |= VAR4 << VAR8;
FUN3(VAR9, VAR6);

return 0;
}