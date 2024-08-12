static inline const char *FUN1(enum spi_signal_type VAR1)
{
int VAR2;

for (VAR2 = 0; VAR2 < FUN2(VAR3); VAR2++) {
if (VAR1 == VAR3[VAR2].VAR4)
return VAR3[VAR2].VAR5;
}
return NULL;
}