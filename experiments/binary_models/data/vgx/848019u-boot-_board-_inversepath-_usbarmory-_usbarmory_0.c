static void FUN1(void)
{
u32 VAR1 = VAR2;
const uint32_t VAR3 = VAR4;
const uint32_t VAR5 = 400;
int VAR6;

VAR6 = FUN2(VAR1, VAR3, VAR7);
if (VAR6)
FUN3("", VAR3);

VAR6 = FUN2(VAR1, VAR5, VAR8);
if (VAR6)
FUN3("",
VAR5);

VAR6 = FUN2(VAR1, VAR5, VAR9);
if (VAR6)
FUN3("", VAR5);
}