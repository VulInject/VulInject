static int FUN1(struct VAR1 *VAR2)
{
union delcom_packet VAR3 = { .VAR4.VAR5 = 101, .VAR4.VAR6 = 12 };

VAR3.VAR4.VAR7 = 1 << FUN2(VAR2);
VAR3.VAR4.VAR8 = 0;

return FUN3(VAR2->VAR9->VAR10, VAR3.VAR11);
}