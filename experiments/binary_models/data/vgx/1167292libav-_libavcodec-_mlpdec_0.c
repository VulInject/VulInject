static VAR1 FUN1(uint64_t VAR2,
int VAR3)
{
int VAR4;

if (FUN2(VAR2) <= VAR3)
return 0;

for (VAR4 = 0; VAR4 < FUN3(VAR5); VAR4++)
if (VAR2 & VAR5[VAR4] && !VAR3--)
return VAR5[VAR4];
return 0;
}