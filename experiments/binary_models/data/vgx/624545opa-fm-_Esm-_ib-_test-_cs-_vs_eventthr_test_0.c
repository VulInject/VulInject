FUN1 (void)
{
static const char VAR1[] = "";
static const char VAR2[] = "";
Status_t VAR3;
unsigned char VAR4[VAR5];
uint32_t VAR6;

(void) memset (VAR4, 0x08, (VAR7) VAR5);
VAR4[VAR5 - 1] = (unsigned char) 0x00U;

for (VAR6 = (VAR8) 0U; VAR6 < VAR9; VAR6++)
{
VAR3 = FUN2 (&VAR10, VAR4, (VAR11) (0x01U << VAR6));
if (VAR3 == VAR12)
{
(void) FUN3 (&VAR10);
}
else
{
FUN4 ("", VAR12);
FUN4 ("", VAR3);
FUN4 (VAR2, (VAR8) 0U);
return VAR13;
}
}

FUN5 (VAR1, (VAR8) 0U);
return VAR12;

}