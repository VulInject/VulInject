enum { VAR1 = 0, VAR2 = 0, VAR3 = 1, VAR4 = 31 };

static VAR5 FUN1(uint8_t VAR6, uint8_t VAR7) {
VAR8->VAR9 &= (7 << 2);
VAR8->VAR9 |= ((VAR5) VAR6 << 11) | ((VAR5) VAR7 << 6);
VAR8->VAR9 |= FUN2(0);
while (VAR8->VAR9 & FUN2(0)) (void) 0;
return VAR8->VAR10;
}