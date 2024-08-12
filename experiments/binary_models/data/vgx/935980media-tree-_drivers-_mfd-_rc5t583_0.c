static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
int VAR4;
int VAR5;
uint8_t VAR6 = 0;


if (VAR3->VAR7)
VAR6 = 0x1;

VAR4 = FUN2(VAR1->VAR8, VAR9, VAR6);
if (VAR4 < 0)
FUN3(VAR1->VAR8, "",
VAR9, VAR4);

VAR4 = FUN2(VAR1->VAR8, VAR10, 0x0);
if (VAR4 < 0)
FUN3(VAR1->VAR8, "",
VAR10, VAR4);


for (VAR5 = VAR11; VAR5 <= VAR12; ++VAR5) {
VAR4 = FUN2(VAR1->VAR8, VAR5, 0x0);
if (VAR4 < 0)
FUN3(VAR1->VAR8,
"",
VAR5, VAR4);
}
return 0;
}