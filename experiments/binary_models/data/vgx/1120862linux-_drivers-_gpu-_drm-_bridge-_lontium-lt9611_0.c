static void FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
union hdmi_infoframe VAR6;
ssize_t VAR7;
u8 VAR8 = 0x0a; 
u8 VAR9[32];
int VAR10;
int VAR11;

VAR10 = FUN2(&VAR6.VAR12,
VAR3,
VAR5);
if (VAR10 < 0)
goto VAR13;

VAR7 = FUN3(&VAR6, VAR9, sizeof(VAR9));
if (VAR7 < 0)
goto VAR13;

for (VAR11 = 0; VAR11 < VAR7; VAR11++)
FUN4(VAR1->VAR14, 0x8440 + VAR11, VAR9[VAR11]);

VAR10 = FUN5(&VAR6.VAR15.VAR16,
VAR3,
VAR5);
if (VAR10 < 0)
goto VAR13;

VAR7 = FUN3(&VAR6, VAR9, sizeof(VAR9));
if (VAR7 < 0)
goto VAR13;

for (VAR11 = 0; VAR11 < VAR7; VAR11++)
FUN4(VAR1->VAR14, 0x8474 + VAR11, VAR9[VAR11]);

VAR8 |= 0x20;

VAR13:
FUN4(VAR1->VAR14, 0x843d, VAR8); 
}