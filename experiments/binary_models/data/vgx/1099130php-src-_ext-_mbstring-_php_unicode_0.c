static inline unsigned FUN1(unsigned VAR1, const VAR2 *VAR3) {
VAR1 = FUN2(VAR1, VAR3);
if (FUN3(VAR1 > 0xffffff)) {
return VAR4[VAR1 & 0xffffff];
}
return VAR1;
}