const char *
FUN1(enum enhanced_status_code VAR1)
{
uint32_t	VAR2;

for (VAR2 = 0; VAR2 < FUN2(VAR3); ++VAR2)
if (VAR1 == VAR3[VAR2].VAR1)
return VAR3[VAR2].VAR4;
return "";
}