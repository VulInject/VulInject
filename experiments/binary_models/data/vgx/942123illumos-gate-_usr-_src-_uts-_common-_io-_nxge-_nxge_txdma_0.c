void
FUN1(p_nxge_t VAR1, p_tx_ring_t VAR2, uint16_t VAR3)
{
FUN2((VAR1, VAR4, ""));

if (VAR2 == NULL) {
FUN2((VAR1, VAR4,
""));
return;
}

if (VAR2->VAR5 != VAR3) {
FUN2((VAR1, VAR4,
""
"",
VAR2->VAR5, VAR3));
return;
}

FUN3(&VAR2->VAR6);
(void) FUN4(VAR1, VAR2, 0);
VAR2->VAR7 = 0;
VAR2->VAR8 = 0;
VAR2->VAR9.VAR10 = 0;
VAR2->VAR11.VAR10 = 0;
VAR2->VAR12 = 0;
FUN5(&VAR2->VAR6);

FUN2((VAR1, VAR4, ""));
}